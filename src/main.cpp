#include "FileReader.hpp"
#include <iostream>

int main(){

    FileReader* reader = new FileReader("data.txt");
    CentralNodeList* central = reader->GetCentralNodeList();
    std::cout<<"Inside main \n";

    // NodeList* nl = new NodeList();

    // nl->AddNode(1);
    // nl->AddNode(2);
    // nl->AddNode(3);
    // nl->AddNode(4);

    // NodeList* nd = new NodeList();
    // nd->AddNode(5);
    // nd->AddNode(5);
    // nd->AddNode(6);
    // nd->AddNode(7);

    // CentralNode* c = new CentralNode();
    // c->SetUpperList(nl);
    // c->SetLowerList(nd);

    // NodeList* n4 = new NodeList();

    // n4->AddNode(0);
    // n4->AddNode(7);
    // n4->AddNode(8);
    // n4->AddNode(9);

    // NodeList* n5 = new NodeList();
    // n5->AddNode(2);
    // n5->AddNode(2);
    // n5->AddNode(2);
    // n5->AddNode(2);

    // CentralNode* c2 = new CentralNode();
    // c2->SetUpperList(n4);
    // c2->SetLowerList(n5);

    // NodeList* n6 = new NodeList();

    // n6->AddNode(5);
    // n6->AddNode(0);
    // n6->AddNode(0);

    // NodeList* n7 = new NodeList();
    // n7->AddNode(1);
    // n7->AddNode(7);
    // n7->AddNode(6);

    // CentralNode* c3 = new CentralNode();
    // c3->SetUpperList(n6);
    // c3->SetLowerList(n7);


    // CentralNodeList* tt = new CentralNodeList();
    // tt->AddCentralNode(c);
    // tt->AddCentralNode(c2);
    // tt->AddCentralNode(c3);



    // tt->Print();

    central->Print();

    int positionA = 0;
    int positionB = 0;

    while(1){
        std::cout<<"enter position A: ";
        std::cin>>positionA;
        std::cout<<"\n";
        std::cout<<"enter position B: ";
        std::cin>>positionB;
        std::cout<<"\n Swapping...\n";

        central->SwapNodeLists(positionA,positionB);
        central->Print();
    }

    // nl->PrintList();
    // std::cout<<nl->Nodes[1]->GetValue();

    // std::cout<<"\n\n";
    // std::cout<<nl->GetNodeValueAtIndex(2);

    // Node* x = nl->GetNodeAtIndex(3);
    // nl->GetNodeAtIndex(3)->Delete();
   // std::cout<<x->GetValue();

}
