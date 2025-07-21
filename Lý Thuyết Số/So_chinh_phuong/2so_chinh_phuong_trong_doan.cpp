#include <bits/stdc++.h>

#define ll long long

using namespace std;

void so_chinh_phuong_trong_doan(ll a, ll b)
{
    if(a < 0 || b < 0)
    {
        cout << "INVALID." << endl;
    }

    if (a > b)
    {
        ll temp = a;
        a = b;
        b = temp;
    }

    ll i = (long long)sqrt(a);
    ll can_b = (long long)sqrt(b);

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
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}