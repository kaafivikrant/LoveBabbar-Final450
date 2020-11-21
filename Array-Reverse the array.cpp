#include <iostream>
#include <string>
using namespace std;

int main(){
    string x = "vikrant";
    cout<<x<<endl;
    for(int i=0;i<x.size()/2;i++){
        swap(x[i],x[x.size()-i-1]);
    }
    cout<<x;

    return 0;
}