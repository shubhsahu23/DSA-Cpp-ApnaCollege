#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Binary number: ";
    cin>>n;
    int pow=1;
    int ans=0;
    while(n>0){
        int temp=n%10;
        n/=10;
        ans+=(temp*pow);
        pow*=2;
    }
    cout<<"Decimal number: "<<ans;
}