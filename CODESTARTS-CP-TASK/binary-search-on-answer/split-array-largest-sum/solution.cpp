#include<bits/stdc++.h>
using namespace std;
bool findSubArray(vector<int>& nums,int lim, int k)
{
int sum=0;
int subCnt=1;
for(int i=0;i<nums.size();i++)
{
    if(sum+nums[i]<=lim)
    {
        sum+=nums[i];
    }
    else
    {
        sum=nums[i];
        subCnt++;
    }
}
return subCnt>k;
}
int splitArray(vector<int>& nums, int k) {
    int n=nums.size();
    int low=*max_element(nums.begin(),nums.end());
    int high=accumulate(nums.begin(),nums.end(),0);
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(findSubArray(nums,mid,k))
        {
            low=mid+1;
        }
        else high=mid-1;

    }
    return low;
}