#include <bits/stdc++.h>
#include <iomanip>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 1000 phần tử, -10^3 <= A[i] <= 10^3 
// Nhiệm vụ của bạn là:
//      Tính trung binh cộng các số nguyên tố xuất hiện trong dãy.
//      Kết quả lấy 3 số sau dấu phẩy.

bool kiem_tra_so_nguyen_to(int n)
{
    if(n <= 1)
    {
        return false;
    }

    if(n == 2 || n == 3)
    {
        return true;
    }

    if(n % 2 == 0)
    {
        return false;
    }

    if(n % 3 == 0)
    {
        return false;
    }

    for(int i = 5; i <= n/i; i += 6)
    {
        if(n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

void trung_binh_cong_cac_so_nguyen_to(int n, int A[])
{
    int dem = 0;
    ll tong = 0;

    for(int i = 0; i <= n - 1; i++)
    {
        if(kiem_tra_so_nguyen_to(A[i]) == true)
        {
            tong += A[i];
            dem++;
        }
    }

    float trung_binh_cong = float(tong)/dem;

    cout << fixed << setprecision(3) << trung_binh_cong << endl;
    return;
}

int main()
{
    int n;
    cin >> n;

    int A[n];
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    trung_binh_cong_cac_so_nguyen_to(n, A);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}