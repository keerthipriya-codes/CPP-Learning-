#include<iostream>
using namespace std;
int main(){
    int i,n;
    for(i=1;i<=10;i++)
    {
    for(n=2;n<=9;n++)
    {
        if(n==5)
        {
            continue;
        }
        cout<<n<<"x"<<i<<"="<<n*i<<"\t";
    }
    cout<<endl;
}
return 0;
}