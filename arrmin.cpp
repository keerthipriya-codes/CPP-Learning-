#include<iostream>
using namespace std;
int main(){
int n,i;
cout<<"Enter the size of array";
cin>>n;
int array[n];
cout<<"Enter elements";
for(i =0;i<n;i++){
    cin>>array[i];
}
int min = array[0];
for(i=0;i<n;i++){
    if(array[i]<min){
        min = array[i];
    }
}
cout<<"Smallest element is"<< min;
return 0;
}

