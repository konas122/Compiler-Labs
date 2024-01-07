#include <iostream>

#include "Preprocessor.h"
#include "LexicalAnalyzer.h"
#include "Lex.h"


char type(char c) {
    if (isdigit(c))
        return 'a';
    return c;
}


int main() {
    // string inputSet = "a.e+-";
    // string reg = "(1|2|3|4|5|6|7|8|9)";
    string reg = "(a|b|c)*";
    
    std::cout << reg << std::endl;

    auto lex = Lex(reg);
    lex.preprocess();   // ab|*a^b^b^
    lex.buildNFA();
    lex.showNFA();
    lex.buildDFA();

    return 0;
}
