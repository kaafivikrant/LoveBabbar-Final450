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


void searchNaive(string Text,string Pattern){

    //Length of the text and pattern
    int lenX = Text.length();
    int lenY = Pattern.length();

    //Looping through the text and searching for the first text encounter
    for(int i=0;i<lenX - lenY;i++){
        //initialization the iterator for the pattern
        int j;
        //Looping through the pattern to search if the value from the text is same or not
        for(j=0;j<lenY;j++){
            //Checking for the match
            if(Text[i+j] != Pattern[j]){
                break;
            }
        }
        //If the count of j and length of pattern is same then print
        if(j == lenY){
            cout<<"Pattern :- "<<i<<" "<<endl;
        }
    }
}

int main() {
    string Text = "Hey is name is vikrant";
    string Pattern = "is";

    searchNaive(Text,Pattern);

}

//Time Complixity  O(m*(n-m+1)) Worst Case