#include <bits/stdc++.h>

#define ll long long

using namespace std;

// long long prime: 9223372036854775783

bool so_nguyen_to(ll n)
{
    if (n <= 1)
    {
        return false;
    }

    if (n == 2)
    {
        return true;
    }

    if (n % 2 == 0)
    {
        return false;
    }

    ll i = 3;

    // i * i <= n sẽ bị tràn số vì i * i bằng một số rất lớn, vượt xa long long nếu n là số cận của max long long
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

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    if (so_nguyen_to(n))
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