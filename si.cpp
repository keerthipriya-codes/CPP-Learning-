#include <iostream>
using namespace std;
int main() {
float principal,rate,time;
cout<<"enter principal:";
cin>>principal;
cout<<"enter rate:";
cin>>rate;
cout<<"enter time:";
cin>>time;
cout<<"Simple Interest: "<<(float)(principal*time*rate)/100<<endl;
return 0;
}
