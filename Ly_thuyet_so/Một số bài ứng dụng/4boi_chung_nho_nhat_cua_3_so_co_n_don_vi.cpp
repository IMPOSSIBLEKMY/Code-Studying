#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll GCD(ll a, ll b)
{
    if(a < 0 || b < 0 || (a == 0 && b == 0))
    {
        return -1;
    }

    // swap a và b nếu a nhỏ hơn
    if(a < b)
    {
        ll temp = a;
        a = b;
        b = temp;
    }

    if(b == 0)
    {
        return a;
    }

    ll r;
    while(b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

ll LCD(ll a, ll b)
{
    return (a / GCD(a, b)) * b;
}

ll boi_chung_nho_nhat_cua_3_so_co_n_don_vi(ll x, ll y, ll z, ll n)
{
    ll temp_result = LCD(LCD(x, y), z);

    ll smallest_n_digit = (long long)pow(10, n - 1);

    if(temp_result > smallest_n_digit)
    {
        return -1;
    }

    if(temp_result * (smallest_n_digit/temp_result) < smallest_n_digit)
    {
        return temp_result * ((smallest_n_digit/temp_result) + 1);
    }
    else 
    {
        return smallest_n_digit;
    }

}

int main()
{
    ll x, y, z, n;
    cin >> x >> y >> z >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << boi_chung_nho_nhat_cua_3_so_co_n_don_vi(x, y, z, n) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}