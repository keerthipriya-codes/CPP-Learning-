#include<iostream>
using namespace std;
int main()
{
    int i=1;
    do 
    {
        cout<<i<<endl;
        i++;
        if(i==7)
        {
            break;
        }
    }
    while(i<=8);
    return 0;
}