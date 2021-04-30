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
#include <thread>
#define MAX 1000001
using namespace std;

const int HashValue = 256;
const int w = 1283;
void RabinKarp(string text,string pattern){

    //Length of text string.
    int TextLength = text.length();

    //Length of pattern string.
    int PatternLength = pattern.length();

    //for breaking the loop
    int flag;
    int c=1,i=0;

    //Calculate hash_p(hash value of pattern) and hash_0
    int hash_p=0,hash=0;
    while(i < PatternLength){
        hash_p= (hash_p * HashValue + pattern[i]) % w;
        hash= (hash * HashValue + text[i]) % w;
        i++;
    }

    //Calculate (HashValue^(PatternLength-1))%w
    for(int i=1; i <= PatternLength - 1; i++)
        c= (c * HashValue) % w;

    i=0;
    while(i <= TextLength - PatternLength){
        if(hash_p==hash){
            flag=1;
            for(int j=0; j < PatternLength; j++){
                if(pattern[j]==text[i+j]){
                    continue;
                }
                else{
                    flag = 0;
                    break;
                }
            }
            if(flag==1)cout<<i<<" ";
        }


        //Calculate hash value of next window
        //hash_i+1 = HashValue * {hash_i - text[i] * HashValue^(PatternLength-1)} + text[i+PatternLength]
        if(i < TextLength - PatternLength){
            hash= ((HashValue * (hash - text[i] * c)) + text[i + PatternLength]) % w;
            if(hash<0){
                hash = hash + w;
            }
        }
        i++;
    }
}

int main()
{
    string text = "AABAACAADAABAABAA";
    string pattern = "AABAA";
    RabinKarp(text, pattern);

    return 0;
}