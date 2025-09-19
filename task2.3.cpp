#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");
    cout<<"Ââåäèòå ÷èñëî"<<endl;
    double n,a;
    cin>>n;
    a=n;
    for (n; n < a + 10; n++){
        cout<<n<<" ";
    }
}

