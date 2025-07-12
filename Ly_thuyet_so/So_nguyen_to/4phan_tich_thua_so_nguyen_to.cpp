#include <bits/stdc++.h>

#define ll long long

using namespace std;

void phan_tich_thua_so_nguyen_to_print_style_1(ll n)
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
            n /= i;
            cout << i << " ";
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

    cout << n << endl;

}

void phan_tich_thua_so_nguyen_to_print_style_2(ll n)
{
    if (n < 2)
    {
        cout << "INVALID";
        return;
    }

    ll i = 2;
    int so_mu = 0;

    while (i * i <= n)
    {
        if (n % i == 0)
        {
            so_mu++;
            n /= i;

            if(n % i != 0)
            {
                cout << i << "^" << so_mu << " * ";
                so_mu = 0;
            }
        }
        else
        {            
            if(i == 2)
            {
                i++;
            }
            else
            {
                i += 2;
            }
        }
    }

    if(n == i)
    {
        so_mu++;
    }
    else 
    {
        so_mu = 1;
    }

    cout << n << "^" << so_mu << endl;
}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    phan_tich_thua_so_nguyen_to_print_style_2(n);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}