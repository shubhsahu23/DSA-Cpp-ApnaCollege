#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& vec){
    int ans=0;
    for(int i:vec){
        ans^=i;
    }
    return ans;
}
int main(){
    vector<int> vec = {2, 3, 2, 4, 4};
    int result = singleNumber(vec);
    cout << "The single number is: " << result << endl;
    return 0;
}
