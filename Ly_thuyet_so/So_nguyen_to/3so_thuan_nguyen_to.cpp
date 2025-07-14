#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool so_thuan_nguyen_to(ll n)
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
        if (n % 10 != 2 && n % 10 != 3 && n % 10 != 5 && n % 10 != 7)
        {
            return 0;
        }
    
        tong += int(n % 10);
        n /= 10;
    }

    if (tong % 2 == 0)
    {
        return 0;
    }

    ll i = 3;

    while (i <= n1 / i)
    {
        if (i <= tong / i)
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
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}