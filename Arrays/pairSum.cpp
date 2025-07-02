#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int>& vec,int target){
    int n=vec.size();
    int i=0,j=n-1;
    vector<int> ans;
    while(i<j){
        int sum=vec[i]+vec[j];
        if(sum<target){
            i++;
        }
        else if(sum>target){
            j--;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
    }
    return ans;
}
int main(){
    vector<int> vec={2,7,8,9,15};
    int target=9;
    vector<int> ans=pairSum(vec,target);
    cout<<ans[0]<<" "<<ans[1];
    return 0;

}