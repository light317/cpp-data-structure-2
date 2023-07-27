#ifndef NODELIST_HPP
#define NODELIST_HPP


#include "Node.hpp"

class NodeList {
    private:
        Node* Head;
        Node* Tail;
        int Size;
        void Clear();
    public:
        Node** Nodes;

        NodeList();
        NodeList(const int value);
        ~NodeList();
        int GetSize();
        Node* GetNodeAtIndex(int index);
        int GetNodeValueAtIndex(int index);
        void AddNode(const int value);
        void PrintList();

};

#endif