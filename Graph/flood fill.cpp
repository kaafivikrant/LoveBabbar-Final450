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
#define Row 4
#define Column 4

using namespace std;

void floodfillHelper(int screen[][Column],int x,int y,int previousColour,int newcolour){
    if(x<0 || x>=Row || y<0 || y>=Column){
        return;
    }
    if(screen[x][y] != previousColour){
        return;
    }
    if(screen[x][y] == newcolour){
        return;
    }

    screen[x][y] = newcolour;
    floodfillHelper(screen,x+1,y,previousColour,newcolour);
    floodfillHelper(screen,x-1,y,previousColour,newcolour);
    floodfillHelper(screen,x,y+1,previousColour,newcolour);
    floodfillHelper(screen,x,y-1,previousColour,newcolour);

}

void floodfill(int screen[][Column],int x,int y,int newcolour){
    int previousColour = screen[x][y];
    floodfillHelper(screen,x,y,previousColour,newcolour);
}

void printmat(int screen[][Column]){
    for(int i=0;i<Row;i++){
        for(int j=0;j<Column;j++){
            cout<<screen[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int screen[Row][Column] = {{1,1,2,1},
                               {2,2,2,1},
                               {1,2,2,2},
                               {1,2,1,1}};
    int x = 2,y = 2,newcolour = 0;
    printmat(screen);
    floodfill(screen,x,y,newcolour);
    cout<<endl;
    printmat(screen);

    return 0;
}