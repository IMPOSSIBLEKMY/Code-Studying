#include <bits/stdc++.h>
#include <iomanip>
#include <iostream>

#define ll long long

using namespace std;

// In các chữ số có trong số n bằng đệ quy. Hàm thứ nhất in từ trái sang phải. Hàm thứ hai in theo chiều ngược lại.
// VD: 28734 => Hàm đầu in ra    : 2 8 7 3 4
//              Hàm thứ hai in ra: 4 3 7 8 2

void in_trai_sang_phai(ll n)
{
    if(n < 10)
    {
        cout << n << " ";
        return;
    }

    in_trai_sang_phai(n/10);

    cout << n % 10 << " ";
    return;
}

void in_phai_sang_trai(ll n)
{
    if(n < 10)
    {
        cout << n << " ";
        return;
    }

    cout << n % 10 << " ";

    in_phai_sang_trai(n/10);
    return;
}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    in_trai_sang_phai(n);
    cout << endl;

    in_phai_sang_trai(n);
    cout << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}