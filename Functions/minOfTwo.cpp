#include<iostream>
using namespace std;
int min(int a,int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}
int main(){
    int a,b;
    cout<<"Enter Number: ";
    cin>>a;
    cout<<"Enter Number: ";
    cin>>b;
    cout<<"Minimum of "<<a <<" and "<<b<<" is "<<min(a,b);
}