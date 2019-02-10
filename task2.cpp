#include <iostream>
#include <cmath>
using namespace std;

int main(){
    unsigned long num,d,a,b;
    cout<<"Enter number: ";
    cin>>num;
    if (num<=0){
        cout<<"Incorrect number"<<endl;
        return 1;
    }
    d=1;
    while (d<=sqrt(num)){
        if (num % d==0){
            cout<<d<<" ";
            if (d!=num / d) cout<<num / d<<" ";
        }
        d++;
    }
}
