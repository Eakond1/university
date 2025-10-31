#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

bool isValidNumber(const string& number, int base) {
    if (number.empty()) return false;

    for (char c : number) {
        int digit = isdigit(c) ? c - '0' : toupper(c) - 'A' + 10;
        if (digit >= base) return false;
    }
    return true;
}

int charToValue(char c) {
    return isdigit(c) ? c - '0' : toupper(c) - 'A' + 10;
}

char valueToChar(int value) {
    return value < 10 ? '0' + value : 'A' + (value - 10);
}

long long toDecimal(const string& number, int fromBase) {
    long long result = 0;
    long long power = 1;

    for (int i = number.length() - 1; i >= 0; i--) {
        result += charToValue(number[i]) * power;
        power *= fromBase;
    }

    return result;
}

string fromDecimal(long long decimalNumber, int toBase) {
    if (decimalNumber == 0) return "0";

    string result = "";

    while (decimalNumber > 0) {
        result += valueToChar(decimalNumber % toBase);
        decimalNumber /= toBase;
    }

    reverse(result.begin(), result.end());
    return result;
}

string convertBase(const string& number, int fromBase, int toBase) {
    if (fromBase < 2 || fromBase > 16 || toBase < 2 || toBase > 16) {
        return "Ошибка: система счисления должна быть от 2 до 16";
    }

    if (!isValidNumber(number, fromBase)) {
        return "Ошибка: некорректное число для данной системы счисления";
    }

    if (fromBase == toBase) return number;

    return fromDecimal(toDecimal(number, fromBase), toBase);
}

int main() {
    setlocale(LC_ALL,"rus");
    string number;
    int fromBase, toBase;

    cout << "Введите число: ";
    cin >> number;

    cout << "Введите исходную систему счисления (2-16): ";
    cin >> fromBase;

    cout << "Введите целевую систему счисления (2-16): ";
    cin >> toBase;

    string result = convertBase(number, fromBase, toBase);
    cout << result;

    return 0;
}
