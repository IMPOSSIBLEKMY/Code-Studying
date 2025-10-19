#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= K <= N <= 1000 phần tử, 0 <= A[i] <= 10^3
// Nhiệm vụ của bạn là:
//     Tìm tổng của các phần tử của các dãy con K. Dãy K có K phần tử và chứa các phần tử liên tiếp nhau của dãy A.

// VD: A[7] = {5, 9, 4, 5, 5, 8, 7}     K = 5
// => 28 31 29 (Vì 5+9+4+5+5 = 28, 9+4+5+5+8 = 31, 4+4+4+8+7 = 29)

void Day_Con_K(int n, int A[], int K)
{
    for(int x = 0; x <= n - K; x++)
    {
        int sum = 0;
        for(int i = x; i <= x + K - 1; i++)
        {
            sum += A[i];
        }
        cout << sum << " ";
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

    Day_Con_K(n, A, K);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}