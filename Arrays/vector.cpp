#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4};
    vec.push_back(5);//add element at last
    vec.pop_back();//remove last element
    for(int i:vec){
        cout<<i<<endl;
    }
    int size=vec.size();//to get size of vector
    cout<<"size: "<<size<<endl;
    cout<<"Front: "<<vec.front()<<endl;//first value of the vector
    cout<<"Back: "<<vec.back()<<endl;//last value of the vector
    cout<<"value at index 1: "<<vec.at(1);//to find value at index
    return 0;
}