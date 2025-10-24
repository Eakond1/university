#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main(){
    setlocale(LC_ALL,"rus");
    string str, znach;
    int summ=0;
    bool vhod = true;
    znach = "IVXLCDM";
    cout<<"¬ведите число римскими цифрами IVXLCDM"<<endl;
    cin>>str;
    for (int i =0; i < str.size(); i++){
        if (znach.find(str[i]) == string::npos){
            vhod = false;
            cout << "Error: недопустимый символ" << endl;
            return 1;
        }
    }
    unordered_map<char, int> values = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    for (int i = 0; i < str.size(); i++){
        int number = values[str[i]];
        if (values[str[i + 1]] > number && (i+1)< str.size()){
            summ-=number;
        }
        else{
            summ+=number;
        }
    }
    cout<<summ;
return 0;
}
