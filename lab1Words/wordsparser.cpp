#include "wordsparser.h"
#include <malloc.h>

WordsParser::WordsParser()
{
    m_str = "Эти слова будут здесь расписаны в столбец по одному";
}

void WordsParser::printWords()
{
    //    char *tmp_str = strdup(m_str);
    //    char* word = strtok(tmp_str, " \t");
    //    while (word != NULL) {
    //        cout << word << endl;
    //        word = strtok(NULL, " \t");
    //    }
    //    free(tmp_str);
    int word_len;
    int word_idx = get_word( m_str, word_len );
    while (word_len > 0) {
        //		cout << form( "&.*s\n", word_len, s + word_idx );
        cout.write( m_str + word_idx, word_len );
        cout << "\n";
        word_idx = get_word( m_str, word_len, word_len + word_idx );
    };
}

void WordsParser::printStr()
{
    cout << m_str << endl;
}

int WordsParser::get_word( const char *s, int &size, int start ) {
    int i;
    for ( i = start; isspace( static_cast<unsigned char>(s[i])); ++i ) ;
    int start_of_word = i;
    while ( s[i] != '\0' && ! isspace( static_cast<unsigned char>(s[i])))
        ++i;
    size = i - start_of_word;
    return start_of_word;
}
