//
//  Huffman.hpp
//  Huffman Code
//
//  Created by Mary Tamry on 27.10.22.
//

#ifndef Huffman_hpp
#define Huffman_hpp
#include <string>
using namespace std;

class Huffman{
public:
    Huffman();
    string Encode(string s);
    string Decode(string s);
private:
    string s;
    void TextStatistics();
    void CreateNodes();
    void BuildTree();
    void ProduceCode();
};

#endif /* Huffman_hpp */
