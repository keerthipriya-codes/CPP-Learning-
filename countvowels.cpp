#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string name = "Keerthi";
    int count=0;
    for(int i=0;i<name.length();i++){
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='O'||name[i]=='U'||name[i]=='I'){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}