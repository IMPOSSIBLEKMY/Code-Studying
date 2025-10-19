#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 1000 phần tử, 0 <= A[i] <= 10^6
// Nhiệm vụ của bạn là:
//     tìm giá trị có số lần xuất hiện nhiều nhất trong mảng kèm theo tần suất của nó, 
//     nếu có nhiều giá trị có cùng số lần xuất hiện thì lấy giá trị xuất hiện trước theo thứ tự trong mảng.

// VD: A[7] = {7, 2, 2, 3, 9, 7, 5}
// => 7

int N[1000001] = {0};

int Mang_Danh_Dau_5(int n, int A[])
{
    int max_so_luong = 0;
    int num = 0;

    for(int i = 0; i <= n - 1; i++)
    {
        if(max_so_luong < N[A[i]])
        {
            max_so_luong = N[A[i]];
            num = A[i];
        }
    }

    return num;
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

    cout << Mang_Danh_Dau_5(n, A) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}