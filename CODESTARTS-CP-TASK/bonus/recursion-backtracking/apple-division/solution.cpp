#include<bits/stdc++.h>
using namespace std;
int n;
int ans=INT_MAX;
void solve(int i,int sum1,int sum2,vector<int>&v)
{
    if(i==n)
    {
        ans=min(ans,abs(sum1-sum2));
        return;
    }
    solve(i+1,sum1+v[i],sum2,v);
    solve(i+1,sum1,sum2+v[i],v);
}
int main()
{
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    solve(0,0,0,v);
    cout<<ans;
    return 0;
}