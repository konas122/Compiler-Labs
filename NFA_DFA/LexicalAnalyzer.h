#ifndef LEXICALANALYZER_H
#define LEXICALANALYZER_H
#include "Preprocessor.h"

struct codeVal
{
    char code;
    string *val;

    codeVal();
    codeVal &operator=(const codeVal &cv);
    ~codeVal();
};

class LexicalAnalyzer
{
    static unordered_map<string, char> mp;
    static unordered_set<char> charSet;
public:
    codeVal scanner(const string &code, int &i);
};


#endif 
