#include "wordsparser.h"
#include <malloc.h>

WordsParser::WordsParser()
{
    m_str = "Эти слова будут здесь расписаны в столбец по одному";
}

void WordsParser::printWords()
{
    char *tmp_str = strdup(m_str);
    char* word = strtok(tmp_str, " \t");
    while (word != NULL) {
        cout << word << endl;
        word = strtok(NULL, " \t");
    }
    free(tmp_str);
}

void WordsParser::printStr()
{
    cout << m_str << endl;
}

