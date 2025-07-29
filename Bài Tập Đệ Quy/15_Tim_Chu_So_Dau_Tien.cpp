#include <bits/stdc++.h>
#include <iomanip>

#define ll long long

using namespace std;

// Tính tìm chữ số đầu tiên của số n bằng đệ quy
// VD: 123 => Chữ số đầu tiên: 1

int chu_so_dau_tien(ll n)
{
    if(n < 10)
    {
        return (int)n;
    }

    return chu_so_dau_tien(n/10);
}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << chu_so_dau_tien(n) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}