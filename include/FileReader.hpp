#ifndef FILEREADER_HPP
#define FILEREADER_HPP

#include "CentralNodeList.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

class FileReader{
    private:
        CentralNodeList* Central;
        std::string FilePath;
        int GetFirstDigit(int number);
        int GetSecondDigit(int number);
    public:
        FileReader(std::string path);
        void ReadFile();
        CentralNodeList* GetCentralNodeList();
        ~FileReader();
};

#endif