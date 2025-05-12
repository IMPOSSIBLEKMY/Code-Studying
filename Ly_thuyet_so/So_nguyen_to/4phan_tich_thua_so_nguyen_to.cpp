#include <bits/stdc++.h>
#define ll long long

using namespace std;
//! 9223372036854775807 = 7^2 * 73^1 * 127^1 * 337^1 * 92737^1 * 649657^1
//! max cua long long:                    9223372036854775807 = 2^63 - 1

void phan_tich_thua_so_nguyen_to_1(ll n)
//? prime factorization
//? liet ke thua so nguyen to theo dang 90 => 2 3 3 5
//? liet ke thua so nguyen to theo dang 70 => 7 11
{
    if (n < 2)
    {
        cout << "INVALID";
        return;
    }

    ll i = 2;

    while (i * i <= n)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
        else
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
    }

    // so nguyen to cuoi cung
    cout << n << " ";
}

void phan_tich_thua_so_nguyen_to_2(ll n)
//? liet ke thua so nguyen to theo dang 90 => 2^1 * 3^2 * 5^1
//? liet ke thua so nguyen to theo dang 70 => 7^1 * 11^1
{
    if (n < 2)
    {
        cout << "INVALID";
        return;
    }

    ll i = 2;
    int dem = 0;

    while (i * i <= n)
    {
        if (n % i == 0)
        {
            dem++;
            n /= i;
            if (n % i != 0)
            {
                cout << i << "^" << dem << " * ";
                dem = 0;
            }
        }
        else
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
    }

    // so nguyen to cuoi cung
    dem++;
    cout << n << "^" << dem << " ";
}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    phan_tich_thua_so_nguyen_to_2(n);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}