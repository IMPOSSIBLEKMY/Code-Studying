#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll nhan_dong_du(ll a, ll b, ll k)
{
    return (1ll * (a % k) * (b % k)) % k;
}

ll giai_thua_chia_du_k(ll n, int k)
{
    if (n < 0 || k <= 0)
    {
        return -1;
    }

    if (k > 1000000007)
    {
        cout << "Out of range" << endl;
        return -1;
    }

    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    if (n >= k)
    {
        return 0;
    }

    ll kq = n;

    while (n - 1 >= 1)
    {
        kq = nhan_dong_du(kq, n - 1, k);

        if (kq == 0)
        {
            return 0;
        }

        n--;
    }

    return kq;
}

int main()
{
    ll n, k;
    cin >> n >> k;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << giai_thua_chia_du_k(n, k) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}