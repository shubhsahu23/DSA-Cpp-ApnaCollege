#include<iostream>
#include<cmath>
using namespace std;

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
    cout << "Enter number: ";
    cin >> n;

    if(checkPrime(n)){
        cout << "Prime number";
    }
    else{
        cout << "Not prime number";
    }

    return 0;
}
