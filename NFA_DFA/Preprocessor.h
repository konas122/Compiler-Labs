#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
using std::ifstream;
using std::string;
using std::ios;
using std::cout;
using std::unordered_map;
using std::unordered_set;
#ifndef PREPROCESSOR_H
#define PREPROCESSOR_H


class Preprocessor
{
    ifstream sourceFile;
public:
    Preprocessor() = delete;

    string &&pretreatment();

    explicit Preprocessor(const string &filePath);
};


#endif // PREPROCESSOR_H
