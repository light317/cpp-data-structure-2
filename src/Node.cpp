#include "Node.hpp"
#include <iostream>

Node::Node(int value){
    this->Value = value;
    this->Next = nullptr;
}

int Node::GetValue(){
    return this->Value;
}

void Node::SetNextNode(Node* nextNode){
    this->Next = nextNode;
}

Node* Node::GetNextNode(){
    return this->Next;
}