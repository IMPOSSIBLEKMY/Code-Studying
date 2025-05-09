#include <bits/stdc++.h>
#define ll long long

using namespace std;

//! so chinh phuong lon nhat theo long long: 9223372030926249001 = 3037000499^2
//! max cua long long:                       9223372036854775807 = 2^63 - 1

ll can_bac_hai_lam_tron_xuong(ll n)
//? cong thuc Newton (Newton's method) cho ham so x^2 - n = 0 (can bac hai cua n)
{
    if (n <= 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    //? a * b * c la so gan nhat khi can bac hai cua so bat ki
    int a = 1;
    int dem = 0;
    ll n1 = n;

    while (n1 > 0)
    {
        a = int(n1 % 10);
        dem++;
        n1 /= 10;
    }

    if (a <= 3)
    {
        a = 1;
    }
    else if (a <= 8)
    {
        a = 2;
    }
    else
    {
        a = 3;
    }

    dem--;
    int b = 1;
    if (dem % 2 != 0)
    {
        b = 3;
    }

    dem /= 2;
    ll c = 1;
    while (dem)
    {
        c *= 10;
        dem--;
    }

    ll root1 = (n) / (a * b * c);
    ll root2 = (root1 + (n / root1)) / 2;

    while (root1 - root2 > 1)
    //? neu 2 kq lam tron xuong sai lech 1 don vi thi cho ra kq nho hon
    {
        root1 = root2;

        root2 = (root1 + (n / root1)) / 2;
    }

    return root2;
}

bool so_chinh_phuong(ll n)
{
    //? co the dung ham sqrt() cung duoc nhung no khong nhanh bang Newton method
    //? ll can = sqrt(n);

    ll can = can_bac_hai_lam_tron_xuong(n);

    if (can * can == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    if (so_chinh_phuong(n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}