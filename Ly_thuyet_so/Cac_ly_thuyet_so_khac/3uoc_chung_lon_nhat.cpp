#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll findGreatestCommonDivisor(ll a, ll b)
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

    ll i = b;

    while (i != 1)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }

        i--;
    }

    return i;
}

ll findGreatestCommonDivisorEuclid(ll a, ll b)
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

    ll r;

    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main()
{
    ll a, b;
    cin >> a >> b;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << findGreatestCommonDivisorEuclid(a, b) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}