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

    int get_word( const char *s, int &size, int start = 0 );
};

#endif // WORDSPARSER_H
