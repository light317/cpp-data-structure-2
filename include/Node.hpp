#ifndef NODE_HPP
#define NODE_HPP


class Node{
    private:
        int Value;
        Node* Next;

    public:
        Node(int value);
        int GetValue();
        Node* GetNextNode();
        void SetNextNode(Node* nextNode);
        void Delete();
        ~Node();
};

#endif