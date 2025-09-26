#include <iostream>
using namespace std;

int Division(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int Subtraction(int a, int b) {
    a = abs(a);
    b = abs(b);
    if (a == 0) return b;
    if (b == 0) return a;

    while (a != b) {
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}

int main() {
    setlocale(LC_ALL,"rus");
    int a, b;

    cout << "������� ��� �����: ";
    cin >> a >> b;

    if (a == 0 && b == 0) {
        cout << "��� �� ��������� ��� ���� �����" << endl;
        return 1;
    }

    cout << "��� ������� �������: " << Division(a, b) << endl;
    cout << "��� ������� ���������: " << Subtraction(a, b) << endl;

    return 0;
}
