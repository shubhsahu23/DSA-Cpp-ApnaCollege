#include<iostream>
using namespace std;
void intersection(int arr1[],int size1,int arr2[],int size2){
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
}
int main(){
    int arr1[]={4,7,8,3,6,9,2};
    int arr2[]={1,3,5,4};
    int size1=7;
    int size2=5;
    intersection(arr1,size1,arr2,size2);

}