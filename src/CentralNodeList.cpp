#include "CentralNodeList.hpp"
#include <iostream>

CentralNodeList::CentralNodeList(){
    this->Size = 0;
    this->Head = nullptr;
    this->Tail = nullptr;
}

void CentralNodeList::AddCentralNode(CentralNode* node){

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

float CentralNodeList::GetUpperAverage(){
    return 0.0;
}

float CentralNodeList::GetLowerAverage(){
    return 0.0;
}

void CentralNodeList::SwapNodeLists(int upperPosition, int lowerPosition){
    // swap the upper node list of the central node at 'upperPosition' with the lower node list of  central node at 'lowerPosition'
    CentralNode* firstCentralNode = GetCentralNodeAtIndex(upperPosition);
    CentralNode* secondCentralNode = GetCentralNodeAtIndex(lowerPosition);

    //begin swap
    NodeList* tempNodeList = new NodeList();
    tempNodeList = firstCentralNode->GetUpperList();
    firstCentralNode->SetUpperList(secondCentralNode->GetLowerList());
    secondCentralNode->SetLowerList(tempNodeList);

}

void CentralNodeList::Print(){
for(CentralNode* temp = this->Head; temp != nullptr; temp = temp->GetNextNode())
        temp->Print();
}

CentralNode* CentralNodeList::GetCentralNodeAtIndex(int index){
     if(index > Size -1)
        return nullptr;
    
    CentralNode* temp;
    int i;
    for(i = 0, temp=Head; i < index, temp != nullptr; i++, temp = temp->GetNextNode()){
        if(i == index)
            return temp;
    }

    std::cout<<"No node matches \n";
    return nullptr;
}

CentralNodeList::~CentralNodeList(){
    //delete
}