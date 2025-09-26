#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    cout<<"Вывод содержимого текстового файла";
    setlocale(LC_ALL,"rus");
    ifstream file("pr3.txt");
    string line;
    getline(file,line);
    while (file){
        cout<<line<<endl;
        getline(file,line);
    }
}

