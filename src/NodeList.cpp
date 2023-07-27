#include "NodeList.hpp"
#include <iostream>

NodeList::NodeList(const int headValue){
    Node* headNode = new Node(headValue);
    this->Size = 1;
    this->Head = headNode;
    this->Tail = Head;
    this->Head->SetNextNode(Tail);
    this->Tail->SetNextNode(nullptr);
}

NodeList::NodeList(){
    this->Size = 0;
    this->Head = nullptr;
    this->Tail = nullptr;
}

void NodeList::AddNode(const int value){
    Node* node = new Node(value);

    if(Size == 0){
        Head = node;
        Tail = Head;
        Size++;
        return;
    }else if(Size == 1){
        Head->SetNextNode(node);
    };

    Tail->SetNextNode(node);
    Tail = node;

    this->Size++;
}

int NodeList::GetNodeValueAtIndex(int index){
    Node* temp = GetNodeAtIndex(index);
    if(temp == nullptr)
        return -999;
    
    return temp->GetValue();
}

Node* NodeList::GetNodeAtIndex(int index){
    if(index > Size -1)
        return nullptr;
    
    Node* temp;
    int i;
    for(i = 0, temp=Head; i < index, temp != nullptr; i++, temp = temp->GetNextNode()){
        if(i == index)
            return temp;
    }

    std::cout<<"No node matches \n";
    return nullptr;
}

void NodeList::PrintList(){
    for(Node* temp = this->Head; temp != nullptr; temp = temp->GetNextNode())
        std::cout<<temp->GetValue()<<" ";
}

int NodeList::GetSize(){
    return Size;
}

NodeList::~NodeList(){
    Clear();
}

void NodeList::Clear(){
 //Delete all nodes of the list
 // delete Node
}