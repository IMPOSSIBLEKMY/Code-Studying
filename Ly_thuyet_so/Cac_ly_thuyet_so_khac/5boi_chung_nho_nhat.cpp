#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll findLeastCommonMultiple(ll a, ll b)
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

    ll i = 2;
    ll tich = 1;

    while (i <= a / i)
    {
        if (b % i != 0 && a % i != 0)
        {
            if (i == 2)
            {
                i++;
            }
            else
            {
                i += 2;
            }
        }
        else
        {
            tich *= i;

            if (a % i == 0)
                a /= i;

            if (b % i == 0)
                b /= i;
        }
    }

    tich *= a * b;

    return tich;
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

ll findLeastCommonMultipleEuclid(ll a, ll b)
{
    // a*b trước sẽ bị tràn
    return (a / findGreatestCommonDivisorEuclid(a, b)) * b;
}

int main()
{
    ll a, b;
    cin >> a >> b;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << findLeastCommonMultipleEuclid(a, b) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}