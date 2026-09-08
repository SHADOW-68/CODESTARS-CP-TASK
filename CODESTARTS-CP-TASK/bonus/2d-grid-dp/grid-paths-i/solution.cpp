#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    const int m=1e9+7;
    cin>>n;
    vector<string>grid(n);
    for(int i=0;i<n;i++)
    {
        cin>>grid[i];
    }
    vector<vector<int>>path(n,vector<int>(n,0));
    path[0][0]=1;
    if(grid[0][0]=='*')
    {
        cout<<0;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j]=='*')
            {
                path[i][j]=0;
                continue;
            }
            if(i>0)
            {
                path[i][j]+=path[i-1][j];
            }
            if(j>0)
            {
                path[i][j]+=path[i][j-1];
            }
            path[i][j]%=m;
        }
    }
    cout<<path[n-1][n-1];
    return 0;
}

