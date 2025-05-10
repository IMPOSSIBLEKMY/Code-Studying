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

ll boi_chung_nho_nhat(ll a, ll b)
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

    cout << boi_chung_nho_nhat(a, b) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}