#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool so_hoan_hao(ll n)
{
    if (n <= 5)
    {
        return 0;
    }

    ll i = 1;
    ll tong = 0;

    while (i * i <= n)
    {
        if (n % i == 0)
        {
            tong += i;
            if (n / i != i && i != 1)
            {
                tong += n / i;
            }
        }
        i++;
    }

    if (tong == n)
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

    if (so_hoan_hao(n))
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