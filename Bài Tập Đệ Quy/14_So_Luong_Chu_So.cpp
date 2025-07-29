#include <bits/stdc++.h>
#include <iomanip>

#define ll long long

using namespace std;

// Tính số lượng chữ số của số n bằng đệ quy

int so_luong_chu_so(ll n)
{
    if(n < 10)
    {
        return 1;
    }

    return 1 + so_luong_chu_so(n/10);
}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << so_luong_chu_so(n) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}