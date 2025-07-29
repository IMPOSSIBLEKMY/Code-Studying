#include <bits/stdc++.h>
#include <iomanip>

#define ll long long

using namespace std;

// Tính tìm chữ số lớn nhất, nhỏ nhất của số n bằng đệ quy. Viết 2 hàm đệ quy.
// VD: 1239753 => Chữ số nhỏ nhất: 1
//                Chữ số lớn nhất 9

int chu_so_nho_nhat(ll n)
{
    if(n < 10)
    {
        return (int)n;
    }

    int chu_so = chu_so_nho_nhat(n/10);

    if(chu_so > (n % 10))
    {
        return (int)(n % 10);
    }
    else 
    {
        return chu_so;
    }
}

int chu_so_lon_nhat(ll n)
{
    if(n < 10)
    {
        return (int)n;
    }

    int chu_so = chu_so_lon_nhat(n/10);

    if(chu_so < (n % 10))
    {
        return (int)(n % 10);
    }
    else 
    {
        return chu_so;
    }
}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << chu_so_lon_nhat(n) << endl;
    
    cout << chu_so_nho_nhat(n) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}