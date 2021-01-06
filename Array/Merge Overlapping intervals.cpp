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
    vector<vector<int>> intervals{{1,3},{2,6},{8,10},{15,18},{4,5}};
    vector<vector<int>> finals;

    sort(intervals.begin(),intervals.end());

    for(auto& i: intervals){
        if(finals.empty() || i[0] > finals.back()[1]){
            finals.push_back(i);
        }else{
            finals.back()[1] = max(finals.back()[1],i[1]);
        }
    }

    for(auto & interval : finals){
        cout<<interval.front()<<","<<interval.back()<<" ";
    }


    return 0;
}


