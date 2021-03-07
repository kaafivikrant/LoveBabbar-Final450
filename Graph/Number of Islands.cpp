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
#include <stack>
#define ll long long

using namespace std;

void dfs(vector<vector<char>>&grid,int x,int y,int row,int column){
    if(x<0||y<0||x>=column||y>=row||grid[y][x]=='0')
        return;

    grid[y][x]='0';
    dfs(grid,x+1,y,row,column);
    dfs(grid,x-1,y,row,column);
    dfs(grid,x,y+1,row,column);
    dfs(grid,x,y-1,row,column);
}

int numIslands(vector<vector<char>>& grid) {
    if(grid.empty())
        return 0;
    int row=grid.size();
    int column=grid[0].size();
    int result=0;
    for(int y=0;y<row;++y){
        for(int x=0;x<column;++x){
            result+=grid[y][x]-'0';
            dfs(grid,x,y,row,column);
        }
    }
    return result;
}



int main(){
    vector<vector<char>> Ocean{{'1','1','0','1','0','1'},
                              {'0','0','0','1','0','1'},
                              {'1','1','0','0','0','0'},
                              {'0','0','0','1','0','1'},
                              {'1','1','0','1','0','1'}};
    cout<<numIslands(Ocean);

    return 0;
}