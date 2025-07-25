#include <bits/stdc++.h>
#include <cmath>

#define ll long long

using namespace std;

bool so_hoan_hao(ll n)
{
    if (n <= 5)
    {
        return 0;
    }

    ll i = 2;
    ll tong = 1;

    while (i <= n / i)
    {
        if (n % i == 0)
        {
            tong += i;

            if (n / i != i)
            {
                tong += n / i;
            }
        }

        i++;
    }

    if (tong + 1 == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool so_nguyen_to(ll n)
{
    if (n <= 1)
    {
        return false;
    }

    if (n % 2 == 0)
    {
        return false;
    }

    if (n == 2)
    {
        return true;
    }

    ll i = 3;

    while (i <= n / i)
    {
        if (n % i == 0)
        {
            return false;
        }

        i += 2;
    }

    return true;
}

bool so_hoan_hao_Euclid(ll n)
{
    int p = 1;
    while(p <= 33)
    {
        ll mersenne_prime = ((ll)pow(2, p)) - 1;
        ll tich = mersenne_prime * (ll)pow(2, p-1);

        if(tich < n)
        {
            p++;
            continue;
        }

        if(tich == n)
        {
            if(!so_nguyen_to(p))
            {
                return false;
            }

            if(!so_nguyen_to(mersenne_prime))
            {
                return false;
            }

            return true;
        }
        else 
        {
            return false;
        }
    }

    return false;
}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    if (so_hoan_hao_Euclid(n))
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