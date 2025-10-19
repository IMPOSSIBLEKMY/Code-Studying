#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 0 <= N <= 1000 phần tử, 0 <= A[i] <= 10^6
// Nhiệm vụ của bạn là:
//     Liệt kê các giá trị xuất hiện trong mảng theo thứ tự xuất hiện trong mảng kèm theo tần suất của nó,
//     mỗi giá trị chỉ liệt kê một lần.

int N[1000001] = {0};

void Mang_Danh_Dau_3(int n, int A[])
{
    for(int i = 0; i <= n - 1; i++)
    {
        if(N[A[i]] > 0)
        {
            cout << A[i] << " " << N[A[i]] << endl;
            N[A[i]] = -1;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int A[n];
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
        N[A[i]]++;
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    Mang_Danh_Dau_3(n, A);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}