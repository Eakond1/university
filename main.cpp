#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main () {
    setlocale(LC_ALL,"rus");
    ofstream file1("1.txt");
    double number1;
    cout<<"¬ведите 10 чисел"<<endl;
    for (int i = 1; i <= 10; i++) {
        cin >> number1;
        file1 << number1 << endl;
    }
    file1.close();
    ifstream file("1.txt");
    double sum,number;
    while (file >> number) {
        sum += number;
    }
    file.close();
    cout<<sum;
  return 0;

}
