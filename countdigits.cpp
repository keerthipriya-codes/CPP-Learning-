#include<iostream>
using namespace std;
int main()
{
    int n,i,x;
    int count = 0;
    cin>>n;
    while(n>0)
    {
        x=n%10;
          count++;
n=n/10;
    }
    cout<<count<<endl;
    return 0;
}