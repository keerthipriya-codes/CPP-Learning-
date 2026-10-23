#include<iostream>
using namespace std;
int palindrome(int n){
    int rev=0,x;
    while(n>0){
        x=n%10;
        rev=rev*10+x;
        n=n/10;
    }
    return rev;
}
int main(){
    int n,rev,i;
    cin>>n;
    if(palindrome(n)==n){
        cout<<n<<"is a palindrome"<<endl;
    }
    else{
        cout<<n<<"is not a palindrome"<<endl;
    }
    return 0;
}