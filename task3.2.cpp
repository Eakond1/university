#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");
    cout<<"Вывод содержимого текстового файла"<<endl;
    ifstream file("pr3.2.txt");
    string line;
    getline(file,line);
    for (int i=0; i<line.size();i++){
        if((line[i]>'/') && (line[i]<':')){
            cout<<line[i];
        }
    }

}

