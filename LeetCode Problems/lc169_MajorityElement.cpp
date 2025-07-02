#include<iostream>
using namespace std;
#include<vector>
int maj(vector<int>& vec){
    int candidate;
    int count=0;
    for(int i:vec){
        if(count==0){
            candidate=i;
        }
        count+=(i==candidate)?1:-1;
    }
    return candidate;
}
int main(){
    vector<int> vec={1,1,1,1,1,1,1,2,2,2,3,3};
    cout<<"majority element: "<<maj(vec)<<endl;
}