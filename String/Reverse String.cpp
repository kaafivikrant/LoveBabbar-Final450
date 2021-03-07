#include <iostream>
#include<stdio.h>
#include <string>

using namespace std;

int main() {
  string x = "strings";
  //sgnirts

  int length = x.length()/2;

  for(int i=0;i<length ; i++){
    swap(x[i],x[x.length()-i-1]);
  }

  cout<<x<<endl;
}
