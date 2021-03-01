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

int trappingrainwater(vector<int> x){
//    vector<int> leftsum(x.size()), rightsum(x.size()) ;
//
//    int result=0;
//
//    for(int i=1;i<x.size();i++){
//        leftsum[i] = (max(x[i],leftsum[i-1]));
//    }
//    for(int j=x.size()-2;j>=0;j--){
//        rightsum[j] = max(x[j],rightsum[j+1]);
//    }
//
//    for(int k=1;k<x.size()-1;k++){
//        result +=min(leftsum[k],rightsum[k]) - x[k];
//    }
//
//    return result;

    int left=0, right = x.size()-1;
    int result=0;

    int leftsum = 0, rightsum = 0;
    while(left<right){
        if(x[left] < x[right]){
            x[left] >= leftsum ? (leftsum = x[left]): result+=(leftsum-x[left]);
            ++left;
        }else{
            x[right]>=rightsum?(rightsum = x[right]): result+=(rightsum - x[right]);
            --right;
        }
    }
    return result;
}

int main()
{
    vector<int> x = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trappingrainwater(x);

    return 0;
}