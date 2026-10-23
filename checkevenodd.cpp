#include<iostream>
using namespace std;
void checkEvenOdd(int n){
    if(n%2==0){
        cout<<n <<"is Even"<<endl;
    }
    else{
        cout<< n << "is odd"<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    checkEvenOdd(n);
    return 0;
}