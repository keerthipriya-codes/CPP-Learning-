#include<iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<=8)
    {
        cout<<i<<endl;
        if(i==5)
        {
            break;
        }
        i++;
    }
    return 0;
}