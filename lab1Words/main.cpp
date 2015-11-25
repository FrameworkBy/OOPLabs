#include "pc_header.h"
#include "wordsparser.h"

using namespace std;

int main()
{
    ::SetConsoleOutputCP(1251);
    ::SetConsoleCP(1251);
    cout << "Тестовый режим.\n";
    WordsParser wp;
//    wp.printWords();
    cout << "Введите с клавитуры: ";
    char buffer[100];
    cin.getline(buffer,99);
    wp.setStr(buffer);
    wp.printWords();
    cout << "Исходная строка: ";
    wp.printStr();
    return 0;
}

