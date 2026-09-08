#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<long long>preSum(n+1,0);
    for(int i=1;i<preSum.size();i++)
    {
        preSum[i]=preSum[i-1]+v[i-1];
    }
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        cout<<preSum[b]-preSum[a-1]<<endl;
    }
    return 0;
}