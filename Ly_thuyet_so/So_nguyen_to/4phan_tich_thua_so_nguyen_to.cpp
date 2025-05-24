#include <bits/stdc++.h>

#define ll long long

using namespace std;

void phan_tich_thua_so_nguyen_to_1(ll n)
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
    
    if(i*i > n)
    {
        cout << n << " ";
    }

}

void phan_tich_thua_so_nguyen_to_2(ll n)
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

    dem++;
    if(i*i > n)
    {
        cout << n << "^" << dem << " ";
    }

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