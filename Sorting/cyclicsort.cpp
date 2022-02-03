#include<bits/stdc++.h>
using namespace std;
void swap(vector<int> &nums, int i, int j)
{
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}
void sort(vector<int> &nums)
{
    int i =0 ;
    while(i<nums.size())
    {
        int correct = nums[i]-1;
        if(nums[i]!=nums[correct])
        {
            swap(nums,i,correct);
        }
        else{
            i++;
        }
    }
}
int main()
{
    vector<int> nums = {1,9,8,7,6,5,4,3,2};
    sort(nums);
    for(int i = 0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
}
