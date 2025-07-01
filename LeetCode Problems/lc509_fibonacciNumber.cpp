#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    int a=0,b=1,c;
    for(int i=1;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"fibonacci number is: "<<fibo(n);
}