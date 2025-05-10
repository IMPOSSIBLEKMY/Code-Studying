#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll uoc_chung_lon_nhat_2(ll a, ll b)
//! the fast way to find greatest common divisor
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

ll boi_chung_nho_nhat_1(ll a, ll b)
//! the slow way to find least common multiple
//? using prime factorization the bigger number between a and b
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

ll boi_chung_nho_nhat_2(ll a, ll b)
//! the fast way to find least common multiple
{
    return (a * b) / uoc_chung_lon_nhat_2(a, b);
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