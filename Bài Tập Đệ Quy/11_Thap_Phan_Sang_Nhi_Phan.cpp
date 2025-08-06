#include <bits/stdc++.h>
#include <iomanip>

#define ll long long

using namespace std;

// Chuyển hệ thập phân sang nhị phân

// Không dùng hàm trả về, do số n đổi sang nhị phân mà trả về biến thì nó rất lớn
// => Dùng hàm void

void thap_phan_sang_nhi_phan(ll n)
{
    if(n == 0)
    {
        cout << 0;
        return;
    }

    if(n < 2)
    {
        cout << 1;
        return;
    }

    thap_phan_sang_nhi_phan(n/2);

    cout << n % 2;
}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    thap_phan_sang_nhi_phan(n);
    cout << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}