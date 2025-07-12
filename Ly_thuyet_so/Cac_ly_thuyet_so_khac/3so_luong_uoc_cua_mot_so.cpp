#include <bits/stdc++.h>

#define ll long long

using namespace std;

int so_luong_uoc_cua_mot_so_cach_thuong(ll n)
{
    if(n < 0)
    {
        cout << "Invalid." << endl;
    }

    if(n == 0)
    {
        cout << "Every number except 0." << endl;
    }

    ll i = 1;
    
    int so_luong_uoc = 0;

    while(i * i <= n)
    {
        if(n % i == 0)
        {
            if(n / i == i)
            {
                so_luong_uoc++;
            }
            else 
            {
                so_luong_uoc += 2;
            }
        }

        i++;
    }

    return so_luong_uoc;
}

// n = (p1^e1) * (p2^e2) * ...
// VD: 28 = 2^2 * 7^1
// so_luong_uoc = (e1 + 1) * (e2 + 1) * ....

int so_luong_uoc_cua_mot_so_cach_phan_tich_so_nguyen_to(ll n)
{
    if(n < 0)
    {
        cout << "Invalid." << endl;
    }

    if(n == 0)
    {
        cout << "Every number except 0." << endl;
    }

    int i = 2;
    int so_mu = 0;
    int so_luong_uoc = 1;

    while(i * i <= n)
    {
        if(n % i == 0)
        {
            n /= i;

            so_mu++;

            if(n % i != 0)
            {
                so_luong_uoc *= (so_mu + 1);
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

    so_luong_uoc *= (so_mu + 1);

    return so_luong_uoc;
}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << so_luong_uoc_cua_mot_so_cach_phan_tich_so_nguyen_to(n) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}