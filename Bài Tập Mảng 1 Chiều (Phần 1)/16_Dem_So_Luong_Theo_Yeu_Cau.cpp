#include <bits/stdc++.h>
#include <cmath>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 100 phần tử, 0 <= A[i] <= 10000
// Nhiệm vụ của bạn là:
//      Đếm có bao nhiêu số nguyên tố, số thuận nghịch, số chính phương, số có tổng các chữ số của nó là sô nguyên tố trong mảng.

bool so_chinh_phuong(int n)
{
    int temp = int(sqrt(n));

    if(temp * temp == n)
    {
        return true;
    }

    return false;
}

bool so_nguyen_to(int n)
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

    for(int i = 5; i <= n/i; i+=6)
    {
        if(n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

void Dem_So_Luong_Theo_Yeu_Cau(int n, int A[], int N[])
{
    int count = 0;

    int count_so_chinh_phuong = 0;
    int count_so_thuan_nghich = 0;
    int count_so_nguyen_to = 0;
    int count_so_tong_chu_so_la_nguyen_to = 0;

    for(int i = 0; i <= n - 1; i++)
    {
        if(N[A[i]] >= 1)
        {
            count = N[A[i]];
            N[A[i]] = -1;

            // số chính phương
            if(so_chinh_phuong(A[i]) == true)
            {
                count_so_chinh_phuong += count;
            }
            //*******************************

            // số thuận nghịch
            int tong_chu_so = 0;
            int temp = A[i];
            int rev = 0;

            while(temp > 0)
            {
                tong_chu_so += temp%10;

                rev = rev*10 + temp%10;
                temp /= 10;
            }

            if(rev == A[i])
            {
                count_so_thuan_nghich += count;
            }
            //*******************************

            // số nguyên tố
            if(so_nguyen_to(tong_chu_so) == true)
            {
                count_so_tong_chu_so_la_nguyen_to += count;
            }

            if(so_nguyen_to(A[i]) == true)
            {
                count_so_nguyen_to += count;
            }
        }
    }

    cout << count_so_nguyen_to << " " << count_so_thuan_nghich << " " << count_so_chinh_phuong << " " << count_so_tong_chu_so_la_nguyen_to << endl;
}

int main()
{
    int n;
    cin >> n;

    int A[n], N[10001];
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
        N[A[i]]++;
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    Dem_So_Luong_Theo_Yeu_Cau(n, A, N);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}