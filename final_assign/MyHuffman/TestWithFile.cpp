#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include "Huffman.h"

using namespace std;

int main(void) {
    // Read file
    string FileName = "./test_data/TestFile.txt";
    ifstream in;
    in.open(FileName);
    stringstream out;
    out << in.rdbuf();
    string input = out.str();

    //construct huffman tree
    EncodingTreeNode* hfmtree = huffmanTreeFor(input);
    PrintTree(hfmtree);
    cout << endl;
    cout << "Input String: " << input << endl;
    queue<Bit> EncodeBits = encodeText(input, hfmtree);
    Printqueue(EncodeBits);
    string DecodeStr;
    DecodeStr = decodeText(EncodeBits, hfmtree);
    cout << "Decode String: " << DecodeStr << endl;
    return 0;
}