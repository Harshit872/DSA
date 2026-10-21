#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
        int ones=0,twos = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            ones = (ones^nums[i])&~twos;
            twos = (twos^nums[i])&~ones;
        }
        return ones;
        
        
    }

int main(){
    vector<int> nums={4,4,4,5,6,6,6,8,8,8};
    printf("The single element in nums is: %d" , singleNumber(nums));

}