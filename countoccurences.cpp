#include<iostream>
using namespace std;
int main(){
     int n,i;
    cout<<"Enter size of array";
    cin>>n;
int array[n];
cout<<"Enter array elements";
for(i=0;i<n;i++){
    cin>>array[i];
}
int key;
int count = 0;
cout<<"Enter element to search for";
cin>>key;
for(i=0;i<n;i++){
if(array[i]==key){
    count++;
}
}
cout<<key<<"occurs"<<count<<"times"<<endl;
return 0;
}