#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool so_thuan_nghich(ll n)
{
    ll n1 = n;
    ll tong = 0;

    while (n)
    {
        tong = tong * 10 + n % 10;
        n /= 10;
    }

    if (tong == n1)
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

    if (so_thuan_nghich(n))
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