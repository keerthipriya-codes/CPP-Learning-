#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks:";
    cin>>marks;
    if(marks>=35)
    {
        if(marks>=75)
        {
            cout<<"Passed with Distinction";
        }
        else
        {
            cout<<"Passed";
        }
    }
    else
    {
        cout<<"Failed";
    }
    return 0;
}