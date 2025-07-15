#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool so_nguyen_to(int n)
{
    if(n <= 1)
    {
        return false;
    }

    if(n == 2)
    {
        return true;
    }

    if(n % 2 == 0)
    {
        return false;
    }

    int i = 3;

    while(i <= n / i)
    {
        if(n % i == 0)
        {
            return false;
        }

        i += 2;
    }

    return true;
}

ll bac_cua_thua_so_nguyen_to_trong_N_giai_thua(ll n, int p)
{
    ll so_luong = 0;

    if(n < p)
    {
        return so_luong;
    }

    // có 1 cách khác, nhưng cách này p1 càng lớn: 
    // ll p1 = 1;
    // while(n/p1 > 1) //tránh tràn số
    // {
    //     p1 *= p;   //để phép tính dưới tính được bước nhảy tiếp theo
    //     so_luong += (n/p1);
    // }

    while(n > 1)
    {
        so_luong += (n/p);
        n /= p;
    }
    return so_luong;
}

// n = (p1^e1) * (p2^e2) * ...
// VD: 28 = 2^2 * 7^1
// so_luong_uoc = (e1 + 1) * (e2 + 1) * ....

ll so_luong_uoc_cua_n_giai_thua(int n)
{
    ll so_luong = 1;

    for(int i = 2; i <= n; i++)
    {
        if(so_nguyen_to(i))
        {
            ll so_mu = bac_cua_thua_so_nguyen_to_trong_N_giai_thua(n, i);

            so_luong *= (so_mu + 1) % 1000000007;

            so_luong %= 1000000007;
        }
    }

    return so_luong;
}

int main()
{
    int n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << so_luong_uoc_cua_n_giai_thua(n) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}