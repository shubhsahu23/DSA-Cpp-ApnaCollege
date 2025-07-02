#include<iostream>
using namespace std;
#include<vector>
#include<climits>
int bestTime(vector<int>& vec){
    int minprice=INT_MAX;
    int maxprofit=0;
    for(int val:vec){
        minprice=min(minprice,val);
        maxprofit=max(maxprofit,val-minprice);
    }
    return maxprofit;
} 
int main(){
    vector<int> vec={7,1,5,3,6,4};
    cout<<bestTime(vec);
}