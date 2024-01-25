//Author: Rushikesh Thakare
// you will be given an m x n grid, where each cell has the following values : 

// 2  –  represents a rotten orange
// 1  –  represents a Fresh orange
// 0  –  represents an Empty Cell
// Every minute, if a Fresh Orange is adjacent to a Rotten Orange in 4-direction 
// ( upward, downwards, right, and left ) it becomes Rotten. 

// Return the minimum number of minutes required such that none of the cells has a Fresh 
// Orange. If it’s not possible, return -1.

// Examples:

// Example 1:

// Input: grid - [ [2,1,1] , [0,1,1] , [1,0,1] ]
// 2 1 1 
// 0 1 1
// 1 0 1

// Output: -1

// Input: grid - [ [2,1,1] , [1,1,0] , [0,1,1] ] 

// Output:  4

// 2 1 1
// 1 1 0 
// 0 1 1



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        int cntfresh=0;
        queue<pair<pair<int,int>,int>>q;
        
        int vis[n][m];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                else{
                    vis[i][j]=0;
                }
                if(grid[i][j]==1)cntfresh++;
            }
        }
        
        int tm=0;
        int cnt=0;
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            
            tm=max(tm,t);
            q.pop();
            
            for(int i=0;i<4;i++){
                int nrow=r+drow[i];
                int ncol=c+dcol[i];
                
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0 && grid[nrow][ncol]==1){
                    q.push({{nrow,ncol},t+1});
                    vis[nrow][ncol]=2;
                    cnt++;
                }
            }
        }
        if(cnt!=cntfresh)return -1;
        return tm;
        }
    
int main(){
    vector<vector<int>> grid{ {2,1,1} , {1,1,0} , {0,1,1} } ;
    int rotting = orangesRotting(grid);
    cout<<"Minimum Number of Minutes Required "<<rotting<<endl;

return 0;
}