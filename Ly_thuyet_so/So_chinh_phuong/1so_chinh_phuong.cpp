#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool so_chinh_phuong(ll n)
{
    if(n < 0)
    {
        return false;
    }

    ll can = (long long)sqrt(n);

    if(can * can == n)
    {
        return true;
    }
    else 
    {
        return false;
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
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}