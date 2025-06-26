#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=a++;//post increment
    b=++a;//pre increment
    cout<<b<<endl;
    cout<<a<<endl;
    return 0;
}