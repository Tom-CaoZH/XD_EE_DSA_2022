#pragma once

#include "Bit.h"
#include <queue>
#include <map>
#include <string>
#include <vector>
#include <stack>
#include <iostream>
#include <error.h>

using namespace std;

#define EMPTY '*'
/**
 * Type representing a node in an encoding tree. Each node stores two pointers,
 * one to the child labeled 0 and one to the child labeled 1.
 *
 * Each node in the tree has an associated character. However, this field is
 * only meaningful if the node is a leaf (that is, a node with no children).
 * You should not touch the character in the node unless you are sure that the
 * node is a leaf.
 *
 * Do not modify this type when working on this assignment.
 */
struct EncodingTreeNode {
    char ch;
    int weight;
    EncodingTreeNode* zero;
    EncodingTreeNode* one;

    bool operator<(const EncodingTreeNode& other) const{
        return weight < other.weight;

    }
    // TRACK_ALLOCATIONS_OF(EncodingTreeNode); // For testing
};

/**
 * Type representing a Huffman-coded file.
 *
 * Do not modify this type when working on this assignment.
 */
struct HuffmanResult {
    queue<Bit>  treeBits;
    queue<char> treeLeaves;
    queue<Bit>  messageBits;
};

/* For debugging purposes, you can print HuffmanResult objects to cout to see
 * what they contain.
 */
std::ostream& operator<< (std::ostream& out, const HuffmanResult& file);

/**
 * End-to-end processing routines.
 */
HuffmanResult compress(const std::string& text);
std::string decompress(HuffmanResult& file);


// ture a string into a map which is better for latter process
map<char, int> str2map(const string& str) {
    map<char ,int> ret;
    for(char ch : str) {
        if(ret.find(ch) != ret.end()) {
            ret[ch]++;
        }
        else {
            ret[ch] = 1;
        }
    }
    return ret;
}

/**
 * Constructs a Huffman coding tree for the given string, using the algorithm
 * described in lecture.
 *
 * If the input string does not contain at least two different characters,
 * this function should report an error.
 *
 * When assembling larger trees out of smaller ones, make sure to set the first
 * tree dequeued from the queue to be the zero subtree of the new tree and the
 * second tree as the one subtree.
 */

EncodingTreeNode* huffmanTreeFor(const map<char, int>& elems) {
    if(elems.size() < 2) {
        printf("the ch in the str should greater or equal than 2");
    }
    priority_queue<EncodingTreeNode*> pq;
    for(auto e : elems) {
        char elem = e.first; // get the key
        EncodingTreeNode* leaf = new EncodingTreeNode;
        leaf->ch = elem;
        leaf->weight = e.second;
        leaf->zero = nullptr;
        leaf->one = nullptr;
        pq.push(leaf);
    }
    while(pq.size() > 1) {
        EncodingTreeNode* node = new EncodingTreeNode;
        int p = 0;
        node->ch = EMPTY;
        p += pq.top()->weight;
        node->zero = pq.top();
        pq.pop();
        p += pq.top()->weight;
        node->one = pq.top();
        pq.pop();
        node->weight = p;
        pq.push(node);
    }
    EncodingTreeNode* ret = pq.top();
    pq.pop();
    return ret;
}


EncodingTreeNode* huffmanTreeFor(string& str) {
    auto elems = str2map(str);
    if(elems.size() < 2) {
        printf("the ch in the str should greater or equal than 2");
    }
    priority_queue<EncodingTreeNode*> pq;
    for(auto e : elems) {
        char elem = e.first; // get the key
        EncodingTreeNode* leaf = new EncodingTreeNode;
        leaf->ch = elem;
        leaf->weight = e.second;
        leaf->zero = nullptr;
        leaf->one = nullptr;
        pq.push(leaf);
    }
    while(pq.size() > 1) {
        EncodingTreeNode* node = new EncodingTreeNode;
        int p = 0;
        node->ch = EMPTY;
        p += pq.top()->weight;
        node->zero = pq.top();
        pq.pop();
        p += pq.top()->weight;
        node->one = pq.top();
        pq.pop();
        node->weight = p;
        pq.push(node);
    }
    EncodingTreeNode* ret = pq.top();
    pq.pop();
    return ret;
}

/**
 * @brief helper funciton, is used to judge whether this is a leaf.
 * 
 * @param node 
 * @return true 
 * @return false 
 */
bool isLeaf(EncodingTreeNode* node) {
    if(node->one == nullptr && node->zero == nullptr) {
        return true;
    }
    return false;
}

/**
 * Given a string and a Huffman encoding tree, encodes that text using the tree
 * and outputs a Queue<Bit> corresponding to the encoded representation.
 *
 * The input tree will not be null and will not consist of a single node; these
 * are edge cases you don't have to handle. The input tree will contain all
 * characters that make up the input string.
 */

void tree2map(EncodingTreeNode* tree, map<char, vector<Bit>>& elems, vector<Bit>& path) {
    if(isLeaf(tree)) {
        elems[tree->ch] = path;
        return;
    }
    Bit bit_0 = 0;
    path.push_back(bit_0);
    tree2map(tree->zero, elems, path);
    // path.remove(path.size() - 1);
    path.pop_back();
    Bit bit_1 = 1;
    path.push_back(bit_1);
    tree2map(tree->one, elems, path);
    // backtrace : remove the last one elem
    // path.remove(path.size() - 1);
    path.pop_back();
    return;
}

queue<Bit> encodeText(const string& str, EncodingTreeNode* tree) {
    map<char, vector<Bit>> elems;
    vector<Bit> path;
    tree2map(tree,elems,path);
    queue<Bit> ret;
    for(char ch : str) {
        vector<Bit> all_bits = elems[ch];
        // cout << "char: " << ch << endl;
        // cout << "encode: " ;
        for(Bit bit : all_bits) {
            // cout << bit << " ";
            ret.push(bit);
        }
        // cout << endl;
    }
    return ret;
}


/**
 * Given a Queue<Bit> containing a compressed message and a tree that was used
 * to encode those bits, decodes the bits back to the original message.
 *
 * You can assume the input tree is not null and is not a single character;
 * those are edge cases you don't need to handle.
 *
 * You can assume the input Queue<Bit> is well-formed in that every character
 * was encoded correctly, there are no stray bits in the Queue, etc.
 */
string decodeText(queue<Bit>& bits, EncodingTreeNode* tree) {
    string str;
    EncodingTreeNode* pointer = tree;
    while(!bits.empty()) {
        Bit bit = bits.front();
        bits.pop();
        if(bit == 0) {
            if(pointer->zero != nullptr) {
                pointer = pointer->zero;
            }
        }
        else if(bit == 1) {
            if(pointer->one != nullptr) {
                pointer = pointer->one;
            }
        }
        if(isLeaf(pointer)) {
            // reach the leaf, then we can get the value
            str += pointer->ch;
            // restore the pointer
            pointer = tree;
        }
    }
    return str;
}


/**
 * @brief To print out the whole huffman tree
 * 
 * @param tree 
 */
void PrintTree(EncodingTreeNode* tree) {
    cout << tree->ch;
    if(tree->one != nullptr || tree->zero != nullptr) {
        // This is the leaf
        cout << "(";
        PrintTree(tree->zero);
        cout << ",";
        PrintTree(tree->one);
        cout << ")";
    }
}

void Printqueue(queue<Bit> q) {
    cout << "Encode data: ";
    while(!q.empty()) {
        cout << q.front() ;
        q.pop();
    }
    cout << endl;
}