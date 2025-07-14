#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool so_nguyen_to(ll p)
{
    if (p <= 1)
    {
        return false;
    }

    if (p == 2)
    {
        return true;
    }

    if (p % 2 == 0)
    {
        return 0;
    }

    ll i = 3;

    while (i <= p / i)
    {
        if (p % i == 0)
        {
            return false;
        }

        i += 2;
    }

    return true;
}

// Bài toán Legendre
// n! chia được cho p^k với k là số lớn nhất có thể, p là số nguyên tố

// VD: 9! = 1.2.3.4.5.6.7.8.9 và p = 2

//     Hướng đi ban đầu cho bài toán này:
//     2 = 2^1
//     4 = 2^2     
//     6 = 2^1 . 3
//     8 = 2^3
//     => k lớn nhất có thể là 7

//     Hướng đi khác cho bài toán này (hướng đi của Legendre):
//          + Các số nhảy bậc 2: 2 - 4 - 6 - 8   => 4 số
//          + Các số nhảy bậc 4:     4   -   8   => 2 số
//          + Các số nhảy bậc 8:             8   => 1 số
//     Tổng cộng có 7 số nên k lớn nhất có thể là 7


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

int main()
{
    ll n;
    int p;
    cin >> n >> p;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    if(so_nguyen_to(p))
    {
        if(bac_cua_thua_so_nguyen_to_trong_N_giai_thua(n, p) > 0)
            cout << bac_cua_thua_so_nguyen_to_trong_N_giai_thua(n, p) << endl;
        else
            cout << "Result is none." << endl;
    }
    else {
        cout << "p isn't a prime number." << endl;
    }

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}