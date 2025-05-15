#include <bits/stdc++.h>
#define ll long long //? -9223372036854775808 <= x <= 9223372036854775807

using namespace std;

//! Số thuận nghịch lớn nhất theo long long:    9223372036302733229

bool so_thuan_nghich(ll n)
//! Palindromic number
//! Thời gian giải thuật: O(log(n))
//! 1. Lấy kết quả từng hàng đơn vị theo n % 10
//! 2. Nghịch đảo của số bằng chính nó theo công thức: tong = tong * 10 + n % 10
{
    ll n1 = n;
    ll tong = 0;

    while (n)
    {
        tong = tong * 10 + n % 10;
        n /= 10;
    }

    if (tong == n1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    if (so_thuan_nghich(n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}