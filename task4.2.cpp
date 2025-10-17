#include <iostream>
#include <string>
using namespace std;
int main () {
    setlocale(LC_ALL,"rus");
    int kol=6;
    while(kol!=0){
    for (int i= 0; i<8; i++){
        cout<<"*";
    }
    if(kol%2==0){
        cout<<"*------------------------"<<endl;
    }
    else{
        cout<<"*"<<endl;
    }
    kol-=1;
    }
    for (int i= 0; i<10; i++){
        cout<<"---------------------------------"<<endl;
    }

}

