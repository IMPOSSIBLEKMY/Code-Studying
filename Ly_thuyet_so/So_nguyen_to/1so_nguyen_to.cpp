#include <bits/stdc++.h>
#define ll long long //? -9223372036854775808 <= x <= 9223372036854775807

using namespace std;

//! Số nguyên tố lớn nhất theo long long: 9181531581341931811

bool so_nguyen_to(ll n)
//! Thời gian giải thuật: O(sqrt(n)/2)
//! Bắt đầu kiểm tra từ 3 đến các số lẻ khác nhỏ hơn căn n VD: 3 5 7 9 11 ...
{
    if (n <= 1)
    {
        return 0;
    }

    if (n == 2)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
        return 0;
    }

    ll i = 3;

    while (i * i <= n)
    {
        if (n % i == 0)
        {
            return 0;
        }

        i += 2;
    }

    return 1;
}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    if (so_nguyen_to(n))
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