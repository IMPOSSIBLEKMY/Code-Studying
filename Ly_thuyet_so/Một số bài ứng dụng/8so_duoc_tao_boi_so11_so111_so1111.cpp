#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool so_duoc_tao_boi_cac_so_11_111_1111_van_van(ll n)
{
    // các số được tạo ra bởi 11, 111, 1111, 11111,... thật ra đều tạo ra bởi 2 số chính: 11, 111 = 11*10 + 1
    // VD: 1111 = 11*101, 
    //     11111 = 11*1010 + 1 = 111 + 11*1000 = 11*10 + 1 + 11*1000,
    //     33444 = 11*3040 + 4 = 4*(11*10 + 1) + 11*3000

    ll thuong = n / 11;
    ll so_du = n % 11;

    if(thuong >= so_du * 10)
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

    if (so_duoc_tao_boi_cac_so_11_111_1111_van_van(n))
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