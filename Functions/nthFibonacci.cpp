#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0) return 0;
    if(n==1) return 0;
    int a=0,b=1,c;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;

}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<n<<"fibonacci number is: "<<fibo(n);
}