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
#include <list>
#define ll long long

using namespace std;

int mediansortedarr(vector<int> x,vector<int> y){

    //Space is O(x+y)
    vector<int> final;

    //Pushing elements O(x+y)
    for(int i=0;i<x.size();i++){
        final.push_back(x[i]);
        final.push_back(y[i]);
    }
    //Sorting O((x+y)log(x+y))
    sort(final.begin(),final.end());

    //Iterating O(1)
    if(final.size()%2==0){
       return (final[(final.size()-1)/2] + final[((final.size()-1)/2) + 1])/2;
    }else{
        return (final[(final.size()-1)/2]);
    }
}

int main()
{

    vector<int> x = {1,12,15,26,38};
    vector<int> y = {2,13,17,30,45};
    cout<<mediansortedarr(x,y);

    return 0;
}