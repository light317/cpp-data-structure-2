#include "FileReader.hpp"
#include <iostream>

int main(){

    FileReader* reader = new FileReader("veriler.txt");
    CentralNodeList* central = reader->GetCentralNodeList();

    int positionA = 0;
    int positionB = 0;
    int menuInput = 0;

    while(menuInput!=3){

        std::cout<<"1) Swap Nodes.\n";
        std::cout<<"2) Get Average.\n";
        std::cout<<"3) Exit.\n";

        std::cin>>menuInput;
        std::cout<<"\n";
        
        switch (menuInput)
        {
        case 1:
            std::cout<<"enter position A: ";
            std::cin>>positionA;
            std::cout<<"\n";
            std::cout<<"enter position B: ";
            std::cin>>positionB;

            central->SwapNodeLists(positionA,positionB);

            break;
        case 2:
            std::cout<<"The upper average: "<<std::to_string(central->GetUpperAverage())<<"\n";
            std::cout<<"The lower average: "<<std::to_string(central->GetLowerAverage())<<"\n\n";

            break;
        
        default:
            break;
        }
        
    }
}
