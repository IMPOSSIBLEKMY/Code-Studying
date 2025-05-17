#include <bits/stdc++.h>
#define ll long long

using namespace std;

void goldbach_conjecture(ll n)
{
    if (n < 4)
    {
        cout << "INVALID" << endl;
        return;
    }

    if (n == 4)
    {
        cout << 2 << " " << 2 << endl;
    }

    ll a = 3;
    ll b = n - a;

    ll i = 3;

    while (a <= b)
    {
        while (i * i <= b)
        {
            if (i * i <= a)
            {
                if (a % i == 0)
                {
                    break;
                }
            }

            if (b % i == 0)
            {
                break;
            }

            i += 2;
        }

        if (i * i > b)
        {
            cout << a << " " << b << endl;
        }

        a += 2;
        b = n - a;
        i = 3;
    }
}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    goldbach_conjecture(n);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}