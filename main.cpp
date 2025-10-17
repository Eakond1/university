#include <iostream>
using namespace std;
int rand1(int i0, int s, int m, int i, int mod){
    int s1 = (m * s + i) % mod;
    cout << "s" << i0 << " = " << s1 << endl;
    if (i0 >= i) {
        return s;
    }
    return rand1(i0 + 1,s1, m, i, mod);
}
int rand2(int i0, int s, int m, int i, int mod){
    int s1 = (m * s + i) % mod;
    cout << "s" << i0 << " = " << s1 << endl;
    if (i0 >= i) {
        return s;
    }
    return rand2(i0 + 1,s1, m, i, mod);
}
int main() {
    setlocale(LC_ALL,"rus");
    cout << "I вариант (m=37, i=3, c=64), введите количество чисел" << endl;
    int result1 = rand1(0, 0, 37, 3, 64);
    cout << endl;
    cout << "II вариант (m=25173, i=13849, c=65537), введите количество чисел" << endl;
    int result2 = rand2(0, 0, 25173, 13849, 65537);
    return 0;
}
