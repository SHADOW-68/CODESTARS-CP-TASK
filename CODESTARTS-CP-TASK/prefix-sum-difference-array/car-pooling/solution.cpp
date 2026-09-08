#include<bits/stdc++.h>
using namespace std;
bool carPooling(vector<vector<int>>& trips, int capacity)
{
    int diff=0;
    vector<int>count(1001,0);
    for(int i=0;i<trips.size();i++)
    {
        count[trips[i][1]]+=trips[i][0];
        count[trips[i][2]]-=trips[i][0];
    }
    for(int i=0;i<count.size();i++)
    {
        diff+=count[i];
        if(diff>capacity)
        {
            return false;
        }
    }
    return true;
}
