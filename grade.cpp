#include<iostream>
using namespace std;
int main() {
    int marks;
    cin>>marks;
    if(marks>=90)
    {
        cout<<"grade is A+";
    }
    else if(marks>=75)
    {
        cout<<"grade is A";
    }
    else if(marks>=50)
    {
        cout<<"grade is B";
    }
    else if(marks>=40)
   {
        cout<<"grade is C";
    }
    else 
    {
        cout<<"Fail";
    }
    return 0;
}