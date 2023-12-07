/*Вариант 11
Дана строка. Подсчитать общее количество содержащихся в ней
строчных латинских букв.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    size_t k = 0;
    string str;
    cout << "Введите строчку из букв: ";
    getline(cin, str, '\n');
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if ('a' <= ch && ch <= 'z') {
            k++;
        }
    }
    cout << "Количество строчных латинских букв: " << k;
    return 0;
}