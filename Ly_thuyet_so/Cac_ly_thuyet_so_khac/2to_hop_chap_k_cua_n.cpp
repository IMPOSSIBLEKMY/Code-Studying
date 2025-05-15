#include <bits/stdc++.h>
#define ll long long //? -9223372036854775808 <= x <= 9223372036854775807

using namespace std;

ll to_hop_chap_k_cua_n(int n, int k)
//! Combination
//! Thời gian giải thuật: O(k)
//! nCk = (n(n-1)...(n-k+1))/(k!)
{
    if (k > n || n < 0 || k < 0)
    {
        return -1;
    }

    if (n == 0 && k == 0)
    {
        return 0;
    }

    if (n == k || k == 0)
    {
        return 1;
    }

    if (k == 1 || k == n - 1)
    {
        return n;
    }

    ll tich1 = 1;
    ll tich2 = 1;

    for (int i = 1; i <= k; i++)
    {
        tich1 *= n;
        n--;
        tich2 *= i;
    }

    return tich1 / tich2;
}

int main()
{
    int n, k;
    cin >> n >> k;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << to_hop_chap_k_cua_n(n, k) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}