#include "FileReader.hpp"

FileReader::FileReader(std::string path){
    FilePath = path;
}

void FileReader::ReadFile(){
    std::string token;
    std::ifstream file(FilePath);
    std::string str;
    int index = 0;
    int cellCount = 0;

    CentralNodeList* centralNodeList = new CentralNodeList();
    CentralNode* centralNode;
    NodeList* tempUpperNodeList;
    NodeList* tempLowerNodeList;

    while (std::getline(file, token)) 
    {
        // each loop is a line
        centralNode = new CentralNode();

        std::istringstream ss(token);
        while (std::getline(ss, str, ' ')) 
        {
            centralNode->AddNodeToUpperList(GetFirstDigit(stoi(str)));
            centralNode->AddNodeToLowerList(GetSecondDigit(stoi(str)));
        }

        centralNodeList->AddCentralNode(centralNode);
    }

    Central = centralNodeList;
    file.close();
}

CentralNodeList* FileReader::GetCentralNodeList(){
   
    ReadFile();

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