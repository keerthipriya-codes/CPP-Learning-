#include<iostream>
using namespace std;
int main()
{
    int i,n,x,rev=0;
    cin>>n;
    i=n;
    while(n>0)
    {
    x=n%10;
    rev=rev*10+x;
    n=n/10;
    }
    if(rev==i)
    {
        cout<< i <<"is a palindrome"<<endl;
    }
    else
    {
        cout<< i <<"is not a palindrome"<<endl;
    }
    return 0;
}