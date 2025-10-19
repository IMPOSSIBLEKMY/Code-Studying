#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm N phần tử. 1 <= N <= K <= 1000 phần tử, 0 <= A[i] <= 100
// Nhiệm vụ của bạn là:
//     Dịch các phần tử sang phải K lần của mảng A. Khi dịch, phần tử cuối của dãy chuyển sang vị trí đầu của dãy.

// VD: A[8] = {16, 66, 96, 73, 11, 13, 99, 82}     K = 6
// => 96 73 11 13 99 82 16 66

void Xoay_Phai(int n, int A[], int K)
{
    if(K > n - 1)
    {
        K = K % n;
    }

    for(int i = n - K; i <= n - 1; i++)
    {
        cout << A[i] << " ";
    }

    for(int i = 0; i <= n - K - 1; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;
}

int main()
{
    int n, K;
    cin >> n >> K;

    int A[n];
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    Xoay_Phai(n, A, K);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}