#include <iostream>
#include<stdio.h>
#include <string>
#include <unordered_map>

using namespace std;

//Sorting and deleting will take time complixity of O(nlogn + n) = O(nlogn)
//

void finddublicates(string x){
  unordered_map<char, int> values;

  for(auto temp : x){
    values[temp]++;
  }

  for(auto valtemp: values){
    if(valtemp.second > 1){
      cout<<valtemp.first<<" "<<valtemp.second<<endl;
    }
  }

}

int main() {
  string x = "aasshiishshhhh";
  finddublicates(x);
  return 0;
}


