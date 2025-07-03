#include<iostream>
using namespace std;
int main(){
    int a=10;
    int* ptr=&a;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;//+4 beacuse int has 4 bytes
    ptr--;
    cout<<ptr<<endl;//-4 
    cout<<ptr+2<<endl;
    cout<<ptr-2<<endl;

}