#include "CentralNode.hpp"
#include <iostream>

CentralNode::CentralNode(){
    UpperList = new NodeList();
    LowerList = new NodeList();
    Next = nullptr;
}

void CentralNode::SetUpperList(NodeList* nodeList){
    UpperList = nodeList;
}

void CentralNode::SetLowerList(NodeList* nodeList){
    LowerList = nodeList;
}

void CentralNode::Print(){
    std::cout<<"   ";
    UpperList->PrintList();
    std::cout<<"\n  /\n";
    std::cout<<"-\n";
    std::cout<<"  \\ \n";
    std::cout<<"   ";
    LowerList->PrintList();
    std::cout<<"\n\n";
}

void CentralNode::SetNextNode(CentralNode* nextNode){
    this->Next = nextNode;
}

CentralNode* CentralNode::GetNextNode(){
    return this->Next;
}

NodeList* CentralNode::GetUpperList(){
    return this->UpperList;
}

NodeList* CentralNode::GetLowerList(){
    return this->LowerList;
}

void CentralNode::AddNodeToUpperList(int value){
    UpperList->AddNode(value);
}

void CentralNode::AddNodeToLowerList(int value){
    LowerList->AddNode(value);
}
CentralNode::~CentralNode(){
    //delete
}