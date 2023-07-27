#ifndef CENTRALNODE_HPP
#define CENTRALNODE_HPP

#include "NodeList.hpp"

class CentralNode{
    private:
        NodeList* UpperList;
        NodeList* LowerList;
        CentralNode* Next; 
    
    public:
        CentralNode();
        void SetUpperList(NodeList* nodeList);
        void SetLowerList(NodeList* nodeList);
        void AddNodeToUpperList(int value);
        void AddNodeToLowerList(int value);
        NodeList* GetUpperList();
        NodeList* GetLowerList();
        void Print();
        void SetNextNode(CentralNode* nextNode);
        CentralNode* GetNextNode();
        ~CentralNode();
};

#endif