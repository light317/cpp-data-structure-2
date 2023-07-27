#include "CentralNodeList.hpp"
#include <iostream>

CentralNodeList::CentralNodeList(){
    this->Size = 0;
    this->LongestNodeListSize = 0;
    this->Head = nullptr;
    this->Tail = nullptr;
}

void CentralNodeList::AddCentralNode(CentralNode* node){

    int nodeListSize = node->GetUpperList()->GetSize();

    if(nodeListSize > LongestNodeListSize){
        LongestNodeListSize = nodeListSize;
    }

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
    float totalSumAverage = 0.0;
    float rowSumAverage = 0.0;
    int sizeToBeUsed = 0;
    for(int currentIndex = 0; currentIndex < LongestNodeListSize; currentIndex++){
        sizeToBeUsed = Size;
        rowSumAverage = 0.0;
        for(CentralNode* temp = this->Head; temp != nullptr; temp = temp->GetNextNode()){
            int nodeValue = temp->GetUpperList()->GetNodeValueAtIndex(currentIndex);

            if(nodeValue == -999){
                sizeToBeUsed--;
                continue;
            }

            rowSumAverage += nodeValue;
        }
   
        totalSumAverage += (float)rowSumAverage/(float)sizeToBeUsed;
    }
    
    return totalSumAverage;
}

float CentralNodeList::GetLowerAverage(){
float totalSumAverage = 0.0;
    float rowSumAverage = 0.0;
    int sizeToBeUsed = 0;
    for(int currentIndex = 0; currentIndex < LongestNodeListSize; currentIndex++){
        sizeToBeUsed = Size;
        rowSumAverage = 0.0;
        for(CentralNode* temp = this->Head; temp != nullptr; temp = temp->GetNextNode()){
            int nodeValue = temp->GetLowerList()->GetNodeValueAtIndex(currentIndex);

            if(nodeValue == -999){
                sizeToBeUsed--;
                continue;
            }

            rowSumAverage += nodeValue;
        }
        totalSumAverage += (float)rowSumAverage/(float)sizeToBeUsed;
    }
    
    return totalSumAverage;}

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

int CentralNodeList::GetSize(){
    return Size;
}


int CentralNodeList::GetLongestNodeListSize(){
    return LongestNodeListSize;
}

CentralNodeList::~CentralNodeList(){
    //delete
}