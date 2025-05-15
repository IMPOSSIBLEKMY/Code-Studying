#include <bits/stdc++.h>
#define ll long long //? -9223372036854775808 <= x <= 9223372036854775807

using namespace std;

ll boi_chung_nho_nhat_1(ll a, ll b)
//! Slow least common multiple
//! Thời gian giải thuật: O(sqrt(max(a,b)))
//! Chọn số lớn nhất giữa a và b làm số lần phân tích thừa số nguyên tố
{
    if (a < 0 || b < 0)
    {
        return 0;
    }

    if (a < b)
    {
        ll temp = a;
        a = b;
        b = temp;
    }

    ll i = 2;
    ll tich = 1;

    while (i * i <= a)
    {
        if (b % i != 0 && a % i != 0)
        {
            if (i == 2)
            {
                i++;
            }
            else
            {
                i += 2;
            }
        }
        else
        {
            tich *= i;

            if (a % i == 0)
                a /= i;

            if (b % i == 0)
                b /= i;
        }
    }

    tich *= a * b;

    return tich;
}

ll uoc_chung_lon_nhat(ll a, ll b)
{
    if (a < 0 || b < 0)
    {
        return 0;
    }

    if (a < b)
    {
        ll temp = a;
        a = b;
        b = temp;
    }

    if (b == 0)
    {
        return a;
    }

    while (b != 0)
    {
        ll temp = a;
        a = b;
        b = temp % b;
    }

    return a;
}

ll boi_chung_nho_nhat_2(ll a, ll b)
//! Fast least common multiple
{
    return (a * b) / uoc_chung_lon_nhat(a, b);
}

int main()
{
    ll a, b;
    cin >> a >> b;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << boi_chung_nho_nhat_2(a, b) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}