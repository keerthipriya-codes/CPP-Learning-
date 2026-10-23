#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int marks[n];
    for(int i = 0;i<n;i++){
        cin>>marks[i];
    }
    int sum = 0;
    float avg;
    for(int i=0;i<n;i++){
        sum= sum+marks[i];
        avg = (float)sum/n;
    }
    cout<<avg<<endl;
    return 0;
}