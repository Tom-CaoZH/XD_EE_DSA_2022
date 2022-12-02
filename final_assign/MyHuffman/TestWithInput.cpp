#include <iostream>
#include <map>
#include "Huffman.h"

using namespace std;

int main(void) {
    int n = 0;
    scanf("%d\n", &n);
    map<char, int> KeyAndWeight;
    cout << "n: " << n << endl;
    char ch = 'a';
    int weight = 0;
    for(int i = 0;i < n; ++i) {
        scanf("%c %d\n",&ch, &weight);
        KeyAndWeight[ch] = weight;
    }
    EncodingTreeNode* hfmtree = huffmanTreeFor(KeyAndWeight);
    PrintTree(hfmtree);
    cout << endl;
    string str;
    cin >> str;
    cout << "Input String: " << str << endl;
    queue<Bit> EncodeBits = encodeText(str, hfmtree);
    Printqueue(EncodeBits);
    string DecodeStr;
    DecodeStr = decodeText(EncodeBits, hfmtree);
    cout << "Decode String: " << DecodeStr << endl;
    return 0;
}