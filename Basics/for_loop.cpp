#include<iostream>
using namespace std;
int main(){
    //sum of numbers from 1 to n
    int n=10;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"sum: "<<sum<<endl;
    return 0;
}