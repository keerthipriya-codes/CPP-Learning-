#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter number of students: ";
    cin>>n;
    int marks[n];
    cout<<"Enter marks: ";
    for(int i=0;i<n;i++){
        cin>>marks[i];
    }
    int total = 0;
    float avg;
    int max = marks[0];
    int min = marks[0];
    for(int i=0;i<n;i++){
        total+=marks[i];
        if(marks[i]>max){
            max = marks[i];
        }
        if(marks[i]<min){
            min = marks[i];
        }
    }
    avg = (float)total/n;
    cout<<"Total: "<<total<<endl;
    cout<<"Average: "<<avg<<endl;
    cout<<"Highest mark: "<<max<<endl;
    cout<<"Lowest mark: "<<min<<endl;
    for(i=0;i<n;i++){
    if(marks[i]>35){
        cout<<"Pass"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }
}
    return 0;
}