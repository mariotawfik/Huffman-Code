//
//  Node.cpp
//  Huffman Code
//
//  Created by Mary Tamry on 27.10.22.
//

#include "Node.hpp"

Node::Node(char symbolInputed, int frequencyInputed) {
    symbol = symbolInputed;
    count = frequencyInputed;
    left = new Node();
    right = new Node();
}