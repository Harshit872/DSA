#include<bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &nums){
    int maxindex = 0;
    for(int i = 0 ; i < nums.size() ; i++){
        if(i > maxindex) return false;
        maxindex = max(i+nums[i] , maxindex);
    }
    return true;
} 

int main(){
    // Test Case 1: You can jump 1 step from index 0 to 1, then 3 steps to the last index.
    vector<int> nums1 = {2, 3, 1, 1, 4};
    
    // Test Case 2: You will always arrive at index 3 no matter what. Its maximum jump length is 0.
    vector<int> nums2 = {3, 2, 1, 0, 4};
    cout<<"Test case 1:";
    if(canJump(nums1)){
        cout<<"True" << endl;
    }
    else {
        cout << "False (Cannot reach the end)\n";
    }

    cout << "Test Case 2: ";
    if (canJump(nums2)) {
        cout << "True (Can reach the end)\n";
    } else {
        cout << "False (Cannot reach the end)\n";
    }

    return 0;


}