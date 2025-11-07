#include <iostream>
#include <string>
#include <cmath>
using namespace std;
bool isValidNumber(string number, int system) {
    if (number.empty()) {
            return false;
    }
    int value;
    for (int i =0; i < number.size();i++) {
        if(number[i]>='0' && number[i]<='9'){
            value = number[i] - '0';
        } else if (number[i] >='A' && number[i]<='Z'){
            value = number[i] - 'A' + 10;
    }
        if (value >= system){
                return false;
        }
    }
    return true;
}
int charToValue(char number){
    int value;
    if(number>='0' && number<='9'){
    value = number - '0';
    } else if (number >='A' && number<='Z'){
        value = number - 'A' + 10;
    }
    return value;
}
char valueToChar(int number){
    char value='0';
    if(number>=0 && number<=9){
        value = number + '0';
    } else if (number > 9  && number < 16){
        value = 'A' + (number - 10);
    }
    return value;
}
double toDecimal(string number, int system){
    double decimalNumber=0;
    int chislo=0;
    for(int i = number.size()-1; i>=0; i--){
        chislo = charToValue(number[i]);
        decimalNumber = decimalNumber+ chislo*pow(system,(number.size()-i-1));
    }
    return decimalNumber;
}
string fromDecimal(int number, int system){
    string finalNumber = "";
    while (number!=0){
        finalNumber += valueToChar(number%system);
        number = number/system;
    }
    string reversedStr;
    for (int i = finalNumber.size() - 1; i >= 0; i--) {
        reversedStr +=finalNumber[i];
    }
    return reversedStr;
}
string convertNumber(string number, int firstSystem, int finalSystem){
    if (firstSystem < 2 || firstSystem > 16 || finalSystem < 2 || finalSystem > 16) {
        return "Ошибка: система счисления должна быть от 2 до 16";
    }
    if (!isValidNumber(number, firstSystem)) {
        return "Ошибка: некорректное число для данной системы счисления";
    }
    if (firstSystem == finalSystem) {
            return number;
    }
    return fromDecimal(toDecimal(number, firstSystem), finalSystem);
}
int main(){
    setlocale(LC_ALL,"rus");
    string number;
    int firstSystem, finalSystem;
    cout<<"Введите число: ";
    cin>>number;
    cout<<"Введите систему счисления числа: ";
    cin>>firstSystem;
    cout<<"Введите систему счисления, в которую надо перевести: ";
    cin>>finalSystem;
    cout<<convertNumber(number,firstSystem,finalSystem);
    return 0;
}
