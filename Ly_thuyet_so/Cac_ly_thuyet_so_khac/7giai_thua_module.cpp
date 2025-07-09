#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll giai_thua_chia_du_k(ll n, int k)
{
    if (n < 0 || k <= 0)
    {
        cout << "Invalid." << endl;
    }

    // 1000000007 = 1e9 + 7
    // là số nguyên tố
    // (1e9 + 7) * 2 < int max
    // (1e9 + 7) ^ 2 < long long max

    if (k >= 1000000008)
    {
        cout << "Out of range k." << endl;
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

    ll kq = 1;

    while(n != 1)
    {
        kq *= (n % k);
        kq %= k;
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