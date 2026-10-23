#include <bits/stdc++.h>
using namespace std;

int findContentChildren(vector<int> &g, vector<int> &s)
{
    int n = g.size();
    int m = s.size();
    int l = 0 ;
    int r = 0;
    while(l < n && r < m){
        if(g[l] <= s[r]){
            l++;
            r++;
        }
        else{
            r++;
        }
    }
    return l;

}

int main(){
    vector<int> a = {1, 1, 2, 2, 3, 4};
    vector<int> b = {1, 3, 3, 4, 5};

    printf("Number of children statisfy are : %d" , findContentChildren(a,b));
}
