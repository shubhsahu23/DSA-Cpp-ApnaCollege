#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    cout<<"Factorial: "<<factorial(n);
}