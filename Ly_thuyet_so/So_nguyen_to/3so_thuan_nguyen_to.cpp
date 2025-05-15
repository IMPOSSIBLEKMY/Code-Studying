#include <bits/stdc++.h>
#define ll long long //? -9223372036854775808 <= x <= 9223372036854775807

using namespace std;

//! Số thuần nguyên tố lớn nhất theo long long: 7777777777777777577

bool so_thuan_nguyen_to(ll n)
//! Cách tăng tốc độ xét:
//! 1.Xét nguyên tố từng đơn vị của số rồi tính tổng đơn vị.
//! 2.Cuối cùng xét nguyên tố cho số tổng đó và cả số n.
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

    ll n1 = n;
    ll tong = 0;

    while (n)
    {
        if (n % 10 == 2 || n % 10 == 3 || n % 10 == 5 || n % 10 == 7)
        {
            tong += int(n % 10);
            n /= 10;
        }
        else
        {
            return 0;
        }
    }

    if (tong % 2 == 0)
    {
        return 0;
    }

    ll i = 3;

    while (i * i <= n1)
    {
        if (i * i <= tong)
        {
            if (tong % i == 0)
            {
                return 0;
            }
        }

        if (n1 % i == 0)
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

    if (so_thuan_nguyen_to(n))
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