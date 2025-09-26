#include <iostream>
using namespace std;
int main () {
    setlocale(LC_ALL,"rus");
    int n,i,p,np;
    cin>>n;
    int a[n+1];
    for (i=2; i<=n; i++) {
    a[i]=i;
    }
    cout << "Простые числа:" << endl;
    for(i = 2;i<=n;i++){
            if(a[i] != 0){
            cout << a[i] << endl;
            for(p = 2 * i; p <= n ; p += i){
                    a[p] = 0;
        }
    }
  }
  return 0;

}
