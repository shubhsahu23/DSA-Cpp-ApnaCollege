#include<iostream>
using namespace std;
int main(){
    cout<<!(3>1)<<endl;// not operator false->0
    cout<<!(3>1) || (3>2)<<endl;//or operator
    cout<<!(3>1) && (3>2)<<endl;//and operator
    return 0;

}