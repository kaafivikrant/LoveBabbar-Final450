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
#include <unordered_set>
#include <set>
#include <list>
#include <stack>
#define ll long long
#define dd double
#include <stack>
#include <chrono>

using namespace std;

int main(){
    vector<int> x={1,1,32,1,532,723,19,131,13223,15};
    vector<int> sorted;
    while(!x.empty()){
        sorted.push_back(*min_element(x.begin(), x.end()));
        x.erase(min_element(x.begin(), x.end()));
    }

    for(auto t: sorted){
        cout<<t<<" ";
    }

}