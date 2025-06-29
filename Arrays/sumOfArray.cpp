#include<iostream>
using namespace std;
int sumOfArray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[]={7,5,6,9,8,1,6};
    int size=7;
    cout<<"Sum of array: "<<sumOfArray(arr,size)<<endl;
}