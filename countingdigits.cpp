#include<iostream>
using namespace std;
int countdigits(int n){
    int x,count =0;
    while(n>0){
        x=n%10;
       if(x>0){
        count++;
       }
       n=n/10;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<countdigits(n)<<endl;
    return 0;
}