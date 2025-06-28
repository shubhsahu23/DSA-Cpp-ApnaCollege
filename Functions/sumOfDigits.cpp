#include<iostream>
using namespace std;
int sumOfDigits(int n){
    int sum=0;
    while(n!=0){
        int temp=n%10;
        sum+=temp;
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<"Sum of Digits of number "<<n<<" is : "<<sumOfDigits(n);

}