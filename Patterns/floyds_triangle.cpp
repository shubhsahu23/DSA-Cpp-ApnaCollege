#include<iostream>
using namespace std;
int main(){
    int n=5;
    int s=1;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<i+1;j++){
            cout<<s<<" ";
            s++;
        }
        cout<<endl;
    }
}