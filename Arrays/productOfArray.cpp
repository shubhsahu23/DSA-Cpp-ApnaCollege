#include<iostream>
using namespace std;
int productOfArray(int arr[],int size){
    int product=1;
    for(int i=0;i<size;i++){
        product*=arr[i];
    }
    return product;
}
int main(){
    int arr[]={7,5,6,9,8,1,6};
    int size=7;
    cout<<"product of array: "<<productOfArray(arr,size)<<endl;
}