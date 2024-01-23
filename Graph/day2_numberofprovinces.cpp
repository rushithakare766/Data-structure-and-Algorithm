//AUthor : Rushikesh Thakare

// There are n cities. Some of them are connected, while some are not. If city a is connected directly with city b, and city b is connected directly with city c, then city a is connected indirectly with city c.

// A province is a group of directly or indirectly connected cities and no other cities outside of the group.

// You are given an n x n matrix isConnected where isConnected[i][j] = 1 if the ith city and the jth city are directly connected, and isConnected[i][j] = 0 otherwise.

// Return the total number of provinces.

 

// Example 1:


// Input: isConnected = [[1,1,0],[1,1,0],[0,0,1]]
// Output: 2
// Example 2:


// Input: isConnected = [[1,0,0],[0,1,0],[0,0,1]]
// Output: 3

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class solution{
    private:
        void dfs(int node,vector<int>adjs[],int vis[]){
            vis[node]=1;
            for(auto it:adjs[node]){
                if(!vis[it]){
                    dfs(it,adjs,vis);
                }
            }
        }
    public:
        int numprovinces(vector<vector<int>>adj,int v){
            vector<int>adjs[v];
            for(int i=0;i<v;i++){
                for(int j=0;j<v;j++){
                    if(adj[i][j]==1 && i!=j){
                        adjs[i].push_back(j);
                        adjs[j].push_back(i);
                    }
                }
            }

            int vis[v]={0};
            int cnt=0;

            for(int i=0;i<v;i++){
                if(!vis[i]){
                    cnt++;
                    dfs(i,adjs,vis);
                }
            }
            return cnt;
        }
};

int main(){
    vector<vector<int>>adj
    {
         {1, 0, 1},
        {0, 1, 0},
        {1, 0, 1}
    };

    solution ob;
    cout<< ob.numprovinces(adj,3) <<endl;
    return 0;
}

