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
cout<<"Enter element to search for";
cin>>key;
for(i=0;i<n;i++){
if(array[i]==key){
    cout<<key<<"is in index"<<i<<endl;
    break;
}
}
return 0;
}