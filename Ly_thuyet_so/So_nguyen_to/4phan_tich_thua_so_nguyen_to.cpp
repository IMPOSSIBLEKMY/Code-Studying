#include <bits/stdc++.h>
#define ll long long //? -9223372036854775808 <= x <= 9223372036854775807

using namespace std;

//! Phân tích thừa số nguyên tố lớn nhất theo long long: 9223372036854775807 = 7^2 * 73^1 * 127^1 * 337^1 * 92737^1 * 649657^1

void phan_tich_thua_so_nguyen_to_1(ll n)
//! Prime factorization
//! Thời gian giải thuật: O(sqrt(n)/2)
//? Liệt kê thừa số nguyên tố theo dạng 90 => 2 3 3 5
//? Liệt kê thừa số nguyên tố theo dạng 70 => 7 11
{
    if (n < 2)
    {
        cout << "INVALID";
        return;
    }

    ll i = 2;

    while (i * i <= n)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
        else
        {
            if (i == 2)
            {
                i++;
            }
            else
            {
                i += 2;
            }
        }
    }

    //! Liệt kê ra thừa số cuối cùng
    cout << n << " ";
}

void phan_tich_thua_so_nguyen_to_2(ll n)
//? Liệt kê thừa số nguyên tố theo dạng 90 => 2^1 * 3^2 * 5^1
//? Liệt kê thừa số nguyên tố theo dạng 70 => 7^1 * 11^1
{
    if (n < 2)
    {
        cout << "INVALID";
        return;
    }

    ll i = 2;
    int dem = 0;

    while (i * i <= n)
    {
        if (n % i == 0)
        {
            dem++;
            n /= i;
            if (n % i != 0)
            {
                cout << i << "^" << dem << " * ";
                dem = 0;
            }
        }
        else
        {
            if (i == 2)
            {
                i++;
            }
            else
            {
                i += 2;
            }
        }
    }

    //! Liệt kê ra thừa số cuối cùng
    dem++;
    cout << n << "^" << dem << " ";
}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    phan_tich_thua_so_nguyen_to_2(n);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}