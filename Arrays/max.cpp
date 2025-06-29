#include<iostream>
using namespace std;
int main(){
    int arr[]={5,15,22,1,-15,24};
    int size=sizeof(arr)/sizeof(int);
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"max: "<<max<<endl;
    return 0;

}