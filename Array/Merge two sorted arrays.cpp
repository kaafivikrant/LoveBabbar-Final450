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
#define ll long long

using namespace std;


int main()
{
    vector<int> first = {1,2,3,4,5};
    vector<int> second = {6,7,8,9,10};

    map<int,bool> final;

    for(int & i : first)
        final[i] = true;

    for(int & i : second)
        final[i] = true;

    for(auto i : final)
        cout<<i.first<<" ";

    return 0;
}


