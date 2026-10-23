#include<iostream>
using namespace std;
int sumdigits(int n){
    int sum=0,x;
    while(n>0){
        x=n%10;
       sum=sum+x;
       n=n/10;
    }
    return sum;
}
int main(){
    int n,sum;
    cin>>n;
    cout<<sumdigits(n)<<endl;
    return 0;
}