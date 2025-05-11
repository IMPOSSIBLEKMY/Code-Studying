#include <bits/stdc++.h>
#define ll long long

using namespace std;

//! so fibonacci lon nhat theo long long: 7540113804746346429 (so thu 93)
//! max cua long long:                    9223372036854775807 = 2^63 - 1

bool check_fibonacci(ll n)
{
    ll a = 0, b = 1, c;

    if (n < 0)
    {
        return 0;
    }

    if (n == a)
    {
        return 1;
    }

    if (n == b)
    {
        return 1;
    }

    int i = 3;

    while (i <= 93)
    //! khong the xet dieu kien c < n, boi vi fibonacci tang nhanh, dan den viec tran so long long
    //! chi xet trong dieu kien 3 <= i <= 93
    {
        c = a + b;
        a = b;
        b = c;

        if (c == n)
        {
            return 1;
        }

        if (c > n)
        {
            return 0;
        }

        i++;
    }

    //! gia tri n vuot qua so fibonacci thu 93
    return 0;
}

ll so_fibonacci_thu_n(int n)
{
    ll a = 0, b = 1, c;

    if (n <= 0)
    {
        cout << "OUT OF LIMIT" << endl;
        return -1;
    }

    if (n > 93)
    {
        cout << "OUT OF LIMIT" << endl;
        return -1;
    }

    if (n == 1)
    {
        return a;
    }

    if (n == 2)
    {
        return b;
    }

    int i = 3;

    while (i <= n)
    {
        c = a + b;
        a = b;
        b = c;

        i++;
    }

    return c;
}

void n_so_fibonacci(int n)
{
    ll a = 0, b = 1, c;

    if (n <= 0)
    {
        cout << "OUT OF LIMIT" << endl;
        return;
    }

    if (n > 93)
    {
        cout << "OUT OF LIMIT" << endl;
        return;
    }

    if (n == 1)
    {
        cout << a << endl;
        return;
    }

    if (n == 2)
    {
        cout << a << endl;
        cout << b << endl;
        return;
    }

    if (n >= 3)
    {
        cout << a << endl;
        cout << b << endl;
        int i = 3;

        while (i <= n)
        {
            c = a + b;
            a = b;
            b = c;
            cout << c << endl;
            i++;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    n_so_fibonacci(n);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}