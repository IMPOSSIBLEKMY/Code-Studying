#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 10^3 phần tử, 0 <= A[i] <= 1000
// Nhiệm vụ của bạn là:
//     Liệt kê các giá trị xuất hiện trong mảng và tần suất tương ứng theo thứ tự trong mảng.
//     Liệt kê các giá trị xuất hiện trong mảng và tần suất tương ứng theo thứ tự từ nhỏ tới lớn theo giá trị.
//     Tìm số có số lần xuất hiện nhiều nhất, nếu có nhiều số có cùng số lần xuất hiện thì chọn số lớn hơn theo giá trị.
//     Tìm số có số lần xuất hiện ít nhất trong mảng, nếu có nhiều số có cùng số lần xuất hiện thì chọn số nhỏ hơn theo giá trị.

void Dem_Phan_Phoi_Mang(int n, int A[], int N1[], int N2[])
{
    for(int i = 0; i <= n-1; i++)
    {
        if(N1[A[i]] > 0)
        {
            cout << A[i] << " " << N1[A[i]] << endl;
            N1[A[i]] = -1;
        }
    }

    cout << endl;

    for(int i = 0; i <= 1001 - 1; i++)
    {
        if(N2[i] > 0)
        {
            cout << i << " " << N2[i] << endl;
        }
    }

    cout << endl;

    int large_fre = -1;
    int large_num = -1;

    for(int i = 0; i <= n - 1; i++)
    {
        if(N2[A[i]] >= large_fre)
        {
            large_fre = N2[A[i]];

            if(A[i] > large_num)
            {
                large_num = A[i];
            }
        }
    }

    cout << large_num << " " << large_fre << endl;
    cout << endl;

    int small_fre = 1001;
    int small_num = 1001;

    for(int i = 0; i <= n - 1; i++)
    {
        if(N2[A[i]] <= small_fre)
        {
            small_fre = N2[A[i]];

            if(A[i] < small_num)
            {
                small_num = A[i];
            }
        }
    }

    cout << small_num << " " << small_fre << endl;
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    int A[n], N1[1001] = {0}, N2[1001] = {0};
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
        N1[A[i]]++;
        N2[A[i]] = N1[A[i]];
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    Dem_Phan_Phoi_Mang(n, A, N1, N2);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}