#include <bits/stdc++.h>
#define ll long long //? -9223372036854775808 <= x <= 9223372036854775807

using namespace std;

//! Số chính phương lớn nhất theo long long: 9223372030926249001 = 3037000499^2

ll can_bac_hai_lam_tron_xuong(ll n)
//! Công thức Newton (Newton's method) cho hàm số x^2−n=0 (căn bậc hai của n).
{
    if (n <= 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    //? a*b*c là số nguyên gần nhất khi khai căn bậc hai của một số bất kỳ
    //? VD: căn 9000 gần bằng căn 9 * căn 10 * căn 100 và nó gần bằng 3 * 3 * 10
    int a = 1;
    int dem = 0;
    ll n1 = n;

    while (n1 > 0)
    {
        a = int(n1 % 10);
        dem++;
        n1 /= 10;
    }

    if (a <= 3)
    {
        a = 1;
    }
    else if (a <= 8)
    {
        a = 2;
    }
    else
    {
        a = 3;
    }

    dem--;
    int b = 1;
    if (dem % 2 != 0)
    {
        b = 3;
    }

    dem /= 2;
    ll c = 1;
    while (dem)
    {
        c *= 10;
        dem--;
    }

    ll root1 = (n) / (a * b * c);
    ll root2 = (root1 + (n / root1)) / 2;

    while (root1 - root2 > 1)
    //? Nếu 2 kết quả làm tròn xuống sai lệch 1 đơn vị thì cho ra kết quả nhỏ hơn
    {
        root1 = root2;

        root2 = (root1 + (n / root1)) / 2;
    }

    return root2;
}

bool so_chinh_phuong(ll n)
{
    //? Có thể dùng hàm sqrt() cũng được, nhưng nó không nhanh bằng Newton's method
    //? ll can = sqrt(n);

    ll can = can_bac_hai_lam_tron_xuong(n);

    if (can * can == n)
    {
        return 1;
    }
    else
    {
        return 0;
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
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}