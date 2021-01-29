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

    vector<int> x={7,6,4,3,1};

//    int max=INT16_MIN;
//    for(int i=0;i<x.size()-1;i++){
//        for(int j=i+1;j<x.size();j++){
//            if(x[j]-x[i]>max){
//                max=x[j]-x[i];
//            }
//        }
//    }
//    cout<<max;

//    int max=INT16_MIN;
//    int i=0,j=x.size()-1;
//
//    while(i<j){
//        if(abs(x[i]-x[j])>max){
//            max=abs(x[i]-x[j]);
//        }
//        i++;
//        j--;
//    }
//    cout<<max;
//  not for descrsing elements

    int minE=INT16_MAX;
    int result=0;

    for(int i=0;i<x.size();i++){
        minE=min(minE,x[i]);
        result=max(result,x[i]-minE);
    }
    cout<<result;


    return 0;
}



