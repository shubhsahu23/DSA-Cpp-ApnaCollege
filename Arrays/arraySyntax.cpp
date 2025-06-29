#include<iostream>
using namespace std;
int main(){
    int marks[5]={99,100,54,36,88};//index starts from 0 
    marks[0]=101;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    int size=sizeof(marks)/sizeof(int);
    cout<<size;
    return 0;
}