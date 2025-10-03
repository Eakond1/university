#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");
    setlocale(LC_ALL,"rus");
    string text;
    cout << "Введите текст файла: "<<endl;
    getline(cin, text);
    ofstream file("1.txt");
    file << text;
    file.close();
    ifstream readFile("1.txt");
    string line,line1,save;
    getline(readFile, line);
    readFile.close();
    int ind;
    save = "";
    bool key = 0;
    for (int i=0; i<line.size();i++){
        if (((line[i]>=64) && (line[i]<=90)) or ((line[i]>=61) && (line[i]<=122))){
            key = true;
        }
        else{
            key = false;

            break;
        }
    }
    if (line.size()>30){
        cout<<"Слишком много символов, строка обрезана"<<endl;
        line1 = line.substr(0, 30);
        line = line1;
    }
    char temp;
    if(key == false){
        cout<<"Есть лишние символы";
    }
    else{
        for (int i = 0; i<line.size(); i++){
            if ((line[i]>64) && (line[i]< 91)){
                line[i] = tolower(line[i]);
                save+=line[i];
            }
        }
        for (int i = 0; i<line.size(); i++){
            for( int f = 0; f<line.size(); f++){
                if (line[f] > line[f+1]){
                    temp = line[f];
                    line[f] = line[f+1];
                    line[f+1] = temp;
                }
            }
        }
        while (save.size()>0){
            ind = line.find(save[0]);
            line[ind] = toupper(line[ind]);
            save.erase(0,1);
        }
        for (int i=0; i<line.size(); i++){
            cout<<line[i];
        }
    }
}
