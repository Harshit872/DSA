
#include <bits/stdc++.h>
using namespace std;

int divide(int divident, int divisor)
{
    if (divident == divisor)
        return 1;
    bool sign = true;
    if (divident <= 0 && divisor > 0)
        sign = false;
    else if (divident >= 0 && divisor < 0)
        sign = false;
    long long n = labs(divident);
    long long d = labs(divisor);
    int ans = 0;
    while (n >= d)
    {
        int cnt = 0;
        while (n >= d << (cnt + 1))
            cnt += 1;
        ans += 1 << cnt;
        n -= (d << cnt);
    }
    if (ans == (1 << 31) && sign)
        return INT_MAX;
    if (ans == (1 << 31) && !sign)
        return INT_MIN;

    return sign ? ans : -ans;
}


int main(){
    int d = 8, di =4 ;
    printf("After dividing them : %", divide(8,4));
}