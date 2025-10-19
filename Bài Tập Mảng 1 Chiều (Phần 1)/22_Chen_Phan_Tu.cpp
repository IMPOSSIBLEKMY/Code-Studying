#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= K, N <= 1000 phần tử, -10^3 <= A[i], X <= 10^3
// Nhiệm vụ của bạn là:
//     Chèn phần tử X vào vị trí K sau đó in ra mảng sau khi chèn.

// VD: A[5] = {3, 5, 2, 2, 0}   X = 10   K = 3
// => 3 5 2 10 2 0

void Chen_Phan_Tu(int n, int A[], int X, int K)
{
    for(int i = 0; i <= K - 1; i++)
    {
        if(i >= n)
        {
            cout << 0 << " ";
            continue;
        }

        cout << A[i] << " ";
    }

    cout << X << " ";

    for(int i = K; i <= n - 1; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;
}

int main()
{
    int n, X, K;
    cin >> n >> X >> K;

    int A[n];
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    Chen_Phan_Tu(n, A, X, K);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}