#include<iostream>
using namespace std;
int reverse(int n){
    int rev = 0,x;
    while(n>0){
        x=n%10;
        rev= rev*10+x;
        n=n/10;
    }
    return rev;
}
int main(){
    int n;
    cin>>n;
    cout<<reverse(n)<<endl;
    return 0;
}