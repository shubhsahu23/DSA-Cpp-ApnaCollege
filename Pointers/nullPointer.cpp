#include<iostream>
using namespace std;
int main(){
    //null pointer is a pointer that doesn't point to any location;
    int **ptr=NULL;
    cout<<ptr<<endl;//we cannot derefrence null pointer because it does not point to any location
    return 0;
}