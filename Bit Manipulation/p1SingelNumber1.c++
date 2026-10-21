


#include<bits/stdc++.h>
using namespace std;

int Snum(vector<int> nums){
    int xr = 0;
    for(int i = 0 ; i < nums.size() ; i++){
        xr = xr^nums[i];
    }
    return xr;
}

int main(){

    vector <int> nums={1,1,2,2,3,3,4,4,5,6,6};
    cout<<"Single number"<<Snum(nums);
    return 0;
}