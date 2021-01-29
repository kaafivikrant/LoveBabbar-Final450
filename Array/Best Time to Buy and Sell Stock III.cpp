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

int main () {

    vector<int> x={3,3,5,0,0,3,1,4};

//    int result=0;
//    int nsize=x.size();
//    vector<int> temp;
//    for(int i=1;i<x.size();i++){
//        if(x[i]-x[i-1]>0){
//            temp.push_back(x[i]-x[i-1]);
//        }
//    }
//    sort(temp.begin(), temp.end(), greater<int>());
//    cout<<accumulate(temp.begin(),temp.begin()+2,0);
//    cout<<result;

    int firstBuy=INT16_MAX;
    int secondBuy=INT16_MAX;
    int firstProfit=0;
    int secondProfit=0;

    for(int i=0;i<x.size();i++){
        firstBuy=min(firstBuy,x[i]);
        firstProfit=max(firstProfit,x[i]-firstBuy);
        secondBuy=min(secondBuy,x[i]-firstProfit);
        secondProfit=max(secondProfit,x[i]-secondBuy);
    }

    cout<<secondProfit;

    return 0;
}



