#include<iostream>
using namespace std;
int main(){
    int num[5];
    for(int i=0;i<5;i++){
        cin>>num[i];
    }
    int x;
    cout<<"Enter number to search:";
    cin>>x;
    bool found = false;
    for(int i=0;i<5;i++){
        if(x==num[i]){
            found= true;
            break;
        }
    }
    if(found){
        cout<<"Element exists"<<endl;
    }
    else
{
    cout<<"Element not found"<<endl;
}
    return 0;
}