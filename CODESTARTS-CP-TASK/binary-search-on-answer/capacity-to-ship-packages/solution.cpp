#include<bits/stdc++.h>
using namespace std;
bool Returndays(vector<int>& weights, int cap,int days)
{
int NumOfDays=1;
int load=0;
for(int i=0;i<weights.size();i++)
{
    if(weights[i]+load>cap)
    {
        NumOfDays++;
        load=weights[i];
    }
    else load+=weights[i];
}
return NumOfDays<=days;
}
int shipWithinDays(vector<int>& weights, int days) {
    int low=*max_element(weights.begin(),weights.end());
    int high=accumulate(weights.begin(),weights.end(),0);
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(Returndays(weights,mid,days))
        {
            high=mid-1;
        }
        else low=mid+1;
    }
    return low;
    
}

