#ifndef CENTRALNODELIST_HPP
#define CENTRALNODELIST_HPP


#include "CentralNode.hpp"

class CentralNodeList{
    private: 
        CentralNode* Head;
        CentralNode* Tail;
        CentralNode** CentralNodes;
        int Size;
        int LongestNodeListSize;

    public:
        CentralNodeList();
        void AddCentralNode(CentralNode* node);
        float GetUpperAverage();
        float GetLowerAverage();
        CentralNode* GetCentralNodeAtIndex(int index);
        void SwapNodeLists(int upperPosition, int lowerPosition);
        void Print();
        int GetSize();
        int GetLongestNodeListSize();
        ~CentralNodeList();
};

#endif