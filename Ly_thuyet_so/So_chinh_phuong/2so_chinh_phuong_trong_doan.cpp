#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll can_bac_hai_lam_tron_xuong(ll n)
{
    if (n <= 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

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
    {
        root1 = root2;

        root2 = (root1 + (n / root1)) / 2;
    }

    return root2;
}

void so_chinh_phuong_trong_doan(ll a, ll b)
{
    if (a > b)
    {
        ll temp = a;
        a = b;
        b = temp;
    }

    if (a <= 1)
    {
        a = 1;
    }

    if (a > b)
    {
        cout << "INVALID ";
        return;
    }

    ll i = can_bac_hai_lam_tron_xuong(a);
    ll can_b = can_bac_hai_lam_tron_xuong(b);

    if (i * i < a)
    {
        i++;
    }

    while (i <= can_b)
    {
        cout << i * i << " ";
        i++;
    }
}

int main()
{
    ll a, b;
    cin >> a >> b;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    so_chinh_phuong_trong_doan(a, b);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}