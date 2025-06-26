#include<iostream>
using namespace std;
int main(){
    int n=5;
    int fact=1;
    if(n==0 || n==1){
        cout<<"factorial of "<<n<<" is "<<1<<endl;
        return 0;
    }
    for(int i=n;i>1;i--){
        fact*=i;
    }
    cout<<"factorial of "<<n<<" is "<<fact<<endl;
    return 0;
    
}