#include "FileReader.hpp"

FileReader::FileReader(std::string path){
    FilePath = path;
}

void FileReader::ReadFile(){
    std::cout<<"inside file reader \n";
    std::string token;
    std::ifstream file(FilePath);
    std::string str;
    int index = 0;
    int cellCount = 0;
    while (std::getline(file, token)) 
    {
        std::cout<<"Reading line \n";
        // each loop is a line
        CentralNode* centralNode = new CentralNode();

        std::istringstream ss(token);
        while (std::getline(ss, str, ' ')) 
        {
            // breaking lines by space
            // Node* upNode = new Node(GetFirstDigit(stoi(str)));
            // Node* downNode = new Node(GetSecondDigit(stoi(str)));
            std::cout<<"Reading number \n";

            centralNode->AddNodeToUpperList(GetFirstDigit(stoi(str)));
            centralNode->AddNodeToLowerList(GetSecondDigit(stoi(str)));
        }

        this->Central->AddCentralNode(centralNode);
    }

    Central->Print();
    std::cout<<"Closing file \n";
    file.close();
    std::cout<<"Done \n";
}

CentralNodeList* FileReader::GetCentralNodeList(){
   
    ReadFile();
    std::cout<<"Returning central \n";

    return this->Central;
}

int FileReader::GetFirstDigit(int number){
    if (number > 99)
        throw "Number cannot be greater than 99";

    int t = number / 10;
    return t;
}


int FileReader::GetSecondDigit(int number){
    if (number > 99)
        throw "Number cannot be greater than 99";
    
    int t = number % 10;
    return t;
}

FileReader::~FileReader(){
    delete Central;
}