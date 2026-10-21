#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> powerset(vector<int> &nums)
{
    int subsets = 1 << nums.size();
    vector<vector<int>> ans;

    for (int num = 0; num < subsets; num++)
    {
        vector<int> list;

        for (int i = 0; i < nums.size(); i++)
        {
            //for checking if the bit is set or not
            if (num & (1 << i))
            {
                list.push_back(nums[i]);
            }
        }

        ans.push_back(list);
    }

    return ans;
}

int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans = powerset(nums);
    for(auto subset: ans){
        cout<<"{";
        for(int x : subset){
            cout<<x<<",";
        }
        cout<<"}"<<endl;
    }
    return 0 ;
}