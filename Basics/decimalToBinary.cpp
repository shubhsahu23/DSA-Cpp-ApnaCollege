#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Decimal number: ";
    cin>>n;
    int ans=0;
    int pow=1;
    while(n>0){
        int temp=n%2;
        n/=2;
        ans+=(temp*pow);
        pow*=10;

    }
    cout<<"Binary number: "<<ans;
}