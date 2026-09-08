#include<bits/stdc++.h>
using namespace std;
int maxElement(vector<int>&piles)
{
int maxi=INT_MIN;
for(int i=0;i<piles.size();i++)
{
    maxi=max(maxi,piles[i]);
}
return maxi; //this our max speed which is largest element in array,any more that that will give same ans anyways,suppose 11 is max,so 12 will also give 4 hrs and 11 as well given 4 piles of banana
}
long long totalRate(vector<int>&piles,int hourly)
{
long long totalH=0;
int n=piles.size();
for(int i=0;i<n;i++)
{
    totalH += ceil((double)(piles[i])/(double)(hourly)); //total hrs
}
return totalH;
}
int minEatingSpeed(vector<int>& piles, int h) {
    int n=piles.size();
    int low=1;
    int high=maxElement(piles);
    long long totalH=0;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        totalH =totalRate(piles,mid);
        if(totalH<=h)//means we got something which is definitely possible so no need to check above it they are obv possib;le ans but we want minimum so we go below to find minimum rate
        {
            high=mid-1;
        }
        else low=mid+1;
    }
    return low; //low will always end up on min poss value and high will always end of max poss value dry running multiple examples
    
}
