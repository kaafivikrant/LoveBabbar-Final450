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
#define ll long long

using namespace std;

int shortestChain(string start,string ends,set<string> Wordlist){
    if(Wordlist.find(ends) == Wordlist.end()){
        return 0;
    }
    int level = 0, wordLength = start.size();
    queue<string> Temp;
    Temp.push(start);

    while(!Temp.empty()){
        ++level;
        int sizeofTemp = Temp.size();
        for(int i=0;i<sizeofTemp;++i){
            string word = Temp.front();
            Temp.pop();

            for(int pos = 0; pos< wordLength; ++pos){
                char originalchar = word[pos];

                for(char c = 'a'; c < 'z'; ++c){
                    word[pos] = c;

                    if(word == ends){
                        return level+1;
                    }
                    if(Wordlist.find(word) == Wordlist.end()){
                        continue;
                    }
                    Wordlist.erase(word);
                    Temp.push(word);
                }
                word[pos] = originalchar;
            }
        }
    }
    return 0;
}

int main(){
    set<string> Wordlist;
    Wordlist.insert("hot");
    Wordlist.insert("dot");
    Wordlist.insert("dog");
    Wordlist.insert("lot");
    Wordlist.insert("log");
    Wordlist.insert("cog");

    string start = "hit";
    string ends = "cog";
    cout<<shortestChain(start, ends, Wordlist);

    return 0;
}