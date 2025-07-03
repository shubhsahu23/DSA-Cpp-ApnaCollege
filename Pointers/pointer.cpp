#include<iostream>
using namespace std;
int main(){
    int a=10;
    int* ptr=&a;
    int** parptr=&ptr;//address of ptr
    cout<<ptr<<endl;//value in ptr
    cout<<&a<<endl;//address of variable a
    cout<<&ptr<<endl;//address of ptr;
    cout<<parptr<<endl;//value stored in parent pointer

}