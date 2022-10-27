//
//  Huffman.hpp
//  Huffman Code
//
//  Created by Mary Tamry on 27.10.22.
//

#ifndef Huffman_hpp
#define Huffman_hpp
#include <string>
#include <Node.hpp>
using namespace std;

class Huffman: public Node {
public:
    Huffman();
    string Encode(string s);
    string Decode(string s);
private:
    string s;
    int numOfChar[27];
    char charInString[27];
    int numOfCharsFilled;
    void TextStatistics();
    void CreateNodes();
    void BuildTree();
    void ProduceCode();
};

#endif /* Huffman_hpp */
