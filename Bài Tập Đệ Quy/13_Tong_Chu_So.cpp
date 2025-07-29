#include <bits/stdc++.h>
#include <iomanip>

#define ll long long

using namespace std;

// Tính tổng các chữ số của số n bằng đệ quy

int tong_chu_so(ll n)
{
    if(n < 10)
    {
        return (int)n;
    }

    return (int)(n % 10) + tong_chu_so(n/10);
}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << tong_chu_so(n) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}