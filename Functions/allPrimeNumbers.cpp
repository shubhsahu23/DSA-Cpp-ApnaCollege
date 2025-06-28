#include<iostream>
using namespace std;
#include<cmath>
bool checkPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=2;i<=n;i++){
        if(checkPrime(i)){
            cout<<i<<" ";
        }

    }

}