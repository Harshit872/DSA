#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        int s = start / 2;
        int e = s + n - 1;

        int xorRange = prefixXOR(e) ^ prefixXOR(s - 1);

        return (xorRange << 1) | ((n % 2) ? (start % 2) : 0);
    }

    int prefixXOR(int x) {
        if (x < 0) return 0;

        if (x % 4 == 0) return x;
        if (x % 4 == 1) return 1;
        if (x % 4 == 2) return x + 1;
        return 0;
    }
};

int main() {
    int n = 5;
    int start = 0;

    Solution obj;

    cout << "Result: " << obj.xorOperation(n, start) << endl;

    return 0;
}