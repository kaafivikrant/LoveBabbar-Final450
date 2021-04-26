#include <iostream>
#include <utility>
#include <vector>
#include <numeric>
#include <queue>
#include <cmath>
#include <map>
#include <string>
#include <cstring>
#include <algorithm>
#include <fstream>
#include <unordered_map>
#include <set>
#include <list>
#include <stack>
#define ll long long

using namespace std;

int main(){

    vector<int> coin = {1,2,5};
    int amount = 11;
    vector<int> final(amount+1,amount+1);
    final[0]=0;

    for(auto x:coin){
        for(int i=x;i<=amount;i++){
            final[i]=min(final[i],final[i-x]+1);
        }
    }

    int printss = final[amount]>=amount+1 ? -1:final[amount];
    cout<<printss;

    return 0;
}