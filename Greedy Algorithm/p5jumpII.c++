#include<bits/stdc++.h>
using namespace std;

int jump(vector<int>& nums){
    int j = 0;
    int l = 0;
     int r = 0;
    while(r < nums.size() -1){
        int farthest  = 0;
        for(int i = l ; i <= r ; i++){
            farthest = max(farthest , i + nums[i]);
        }
        l = r+1;
        r = farthest;
        j++;
    }
    return j;

}

int main() {
    // Test Case 1: Minimum jumps to reach end is 2 (index 0 -> 1 -> 4)
    vector<int> nums1 = {2, 3, 1, 1, 4};
    
    // Test Case 2: Minimum jumps to reach end is 2 (index 0 -> 1 -> 4)
    vector<int> nums2 = {2, 3, 0, 1, 4};

    cout << "Test Case 1: " <<jump(nums1) << " jumps" << endl;
    cout << "Test Case 2: " <<jump(nums2) << " jumps" << endl;

    return 0;
}