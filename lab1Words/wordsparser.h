#ifndef WORDSPARSER_H
#define WORDSPARSER_H

#include "pc_header.h"


class WordsParser
{
public:
    WordsParser();
    void printWords();
    void printStr();
    void setStr(char* str) {
        m_str = str;
    }

private:
    char* m_str;
};

#endif // WORDSPARSER_H
