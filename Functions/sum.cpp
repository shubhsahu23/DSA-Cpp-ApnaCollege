#include<iostream>
using namespace std;
int sum(int a,int b){
    int s=a+b;
    return s;
}
int main(){
    int a,b;
    cout<<"enter number:";
    cin>>a;
    cout<<"enter number:";
    cin>>b;
    cout<<"sum: "<<sum(a,b);
    return 0;
}