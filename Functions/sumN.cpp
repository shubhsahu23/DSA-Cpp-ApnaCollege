#include<iostream>
using namespace std;
int sumn(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Sum of numbers from 1 to "<<n<<" is: "<<sumn(n);
}