#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");
    string text;
    cout << "Введите текст файла: ";
    getline(cin, text);
    ofstream file("1.txt");
    file << text;
    file.close();
    ifstream readFile("1.txt");
    string content;
    getline(readFile, content);
    readFile.close();
    cout << "\nСодержимое файла:" << endl;
    cout << content << endl;

    return 0;
}
