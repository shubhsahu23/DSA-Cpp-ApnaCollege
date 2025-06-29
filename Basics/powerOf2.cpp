#include<iostream>
using namespace std;
bool powOftwo(int n){
    return n>0 && (n & (n-1))==0;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if(powOftwo(n)){
        cout<<n<<" is power of two"<<endl;
    }
    else{
        cout<<n<<" is not power of two"<<endl;
    }
}