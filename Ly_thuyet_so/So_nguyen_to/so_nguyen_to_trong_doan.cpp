#include <bits/stdc++.h>
#define ll long long

using namespace std;

//! so nguyen to lon nhat theo long long: 9181531581341931811
//! max cua long long:                    9223372036854775807 = 2^63 - 1

bool so_nguyen_to(ll n)
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

void so_nguyen_to_trong_doan(ll a, ll b)
{
    if (a > b)
    {
        ll temp = a;
        a = b;
        b = temp;
    }

    if (a <= 2)
    {
        a = 2;
    }

    if (a > b)
    {
        cout << "INVALID ";
        return;
    }

    ll i = a;

    if (i == 2)
    {
        cout << i << " ";
        i++;
    }

    if (i % 2 == 0)
    {
        i++;
    }

    while (i <= b)
    {
        if (so_nguyen_to(i))
        {
            cout << i << " ";
        }

        i += 2;
    }
}

int main()
{
    ll a, b;
    cin >> a >> b;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    so_nguyen_to_trong_doan(a, b);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}