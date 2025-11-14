//Шифр Цезаря(32 задание)
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
char convertCharForSmall(char letter,int k){
    int numberOfLetter = int(letter);
    int newLetter=0, difference =0;
    if ((numberOfLetter + k)>122){
        difference = 122 - numberOfLetter;
        newLetter = 96 + (k-difference);
    }
    else{
        newLetter = numberOfLetter+k;
    }
    char convertedLetter = newLetter;
    return convertedLetter;
}
char convertCharForBig(char letter,int k){
    int numberOfLetter = int(letter);
    int newLetter=0, difference =0;
    if ((numberOfLetter + k)>90){
        difference = 90 - numberOfLetter;
        newLetter = 64 + (k-difference);
    }
    else{
        newLetter = numberOfLetter+k;
    }
    char convertedLetter = newLetter;
    return convertedLetter;
}
string convertToCipher(string text, int k){
    string convertedText="";
    for(int i = 0; i<text.size(); i++){
        if (text[i]==32){
            convertedText += " ";
        }
        else if (text[i]>=97 && text[i]<=122){
            convertedText+=convertCharForSmall(text[i],k);
        }
        else{
             convertedText+=convertCharForBig(text[i],k);
        }
    }
    return convertedText;
}
int main(){
    setlocale(LC_ALL,"rus");
    string text;
    cout << "Ââåäèòå òåêñò ôàéëà: ";
    getline(cin, text);
    ofstream file("1.txt");
    file << text;
    file.close();
    ifstream readFile("1.txt");
    string content;
    getline(readFile, content);
    readFile.close();
    cout << "Ââåäèòå ñäâèã "<< endl;
    int k ;
    cin>>k;
    cout<< convertToCipher(content,k);
    return 0;
}

