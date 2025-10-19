#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 1000 phần tử, 0 <= A[i] <= 10^6
// Nhiệm vụ của bạn là:
//     Đếm xem có bao nhiêu giá trị phần tử khác nhau trong mảng.

int N[1000001] = {0}; // Mảng có số lượng phần tử >= 10^6 + 1 để tránh bị tràn khi bỏ trong local. mảng đặt ngoài là mảng global.

int Mang_Danh_Dau_1(int n, int A[])
{
    int count = 0;
    for(int i = 0; i <= n - 1; i++)
    {
        if(N[A[i]] > 0)
        {
            count++;
            N[A[i]] = -1;
        }
    }

    return count;
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

    cout << Mang_Danh_Dau_1(n, A) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}