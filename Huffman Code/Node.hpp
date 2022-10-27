//
//  Node.hpp
//  Huffman Code
//
//  Created by Mary Tamry on 27.10.22.
//

#ifndef Node_hpp
#define Node_hpp

class Node {
public:
    Node();
private:
    char symbol;
    int count;
    Node *left;
    Node *right;
};

#endif /* Node_hpp */
