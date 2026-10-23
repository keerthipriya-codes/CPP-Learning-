#include<iostream>
using namespace std;
void isPrime(int n)
{ 
    int count = 0;
    for(int i=1;i<=n;i++){
       if(n%i==0){
        count++;
       }
    }
    if(count==2){
        cout<<n<<"is prime"<<endl;
    }
    else{
        cout<<n<<"is not a prime"<<endl;
    }
}
int main(){
    int n,count;
    cin>>n;
    isPrime(n);
    return 0;
}