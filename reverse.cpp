#include<iostream>
using namespace std;
int main() 
{
    int n,i,x,rev=0;
    cin>>n;
    while(n>0)
    {
        x=n%10;
        rev=rev*10+x;
        n=n/10;
    }
    cout<<rev<<endl;
    return 0;
}