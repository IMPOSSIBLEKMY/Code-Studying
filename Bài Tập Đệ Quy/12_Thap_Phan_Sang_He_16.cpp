#include <bits/stdc++.h>
#include <iomanip>

#define ll long long

using namespace std;

// Chuyển hệ thập phân sang hệ 16

void thap_phan_sang_16(ll n)
{
    if(n < 16)
    {
        if(n >= 0 && n <= 9)
        {
            cout << n;
        }
        else 
        {
            cout << char(n + 55);
        }
        
        return;
    }

    thap_phan_sang_16(n/16);

    if(n % 16 >= 0 && n % 16 <= 9)
    {
        cout << n % 16;
    }
    else 
    {
        cout << char((n % 16) + 55);
    }

    return;
}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    thap_phan_sang_16(n);
    cout << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}