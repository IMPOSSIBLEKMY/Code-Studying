#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng A[] gồm N phần tử, 1 <= N <= 10^6. 1 <= A[i] <= 10^9, 1 <= Q <= 1000, 1 <= l <= r <= N
// Nhiệm vụ của bạn là:
//     Tính tổng các số trong dãy từ vị trí l tới r của từng số lần truy vấn Q.
//     Mỗi lần truy vấn là chỉ số l, r khác biệt.

// VD: A[5] = 1 2 3 4 5   Q = 1   l = 1, r = 3
//     => 6

int main()
{
    int n;
    cin >> n;

    int A[n];
    int N[2] = {0};
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];

        A[i] %= 2;

        N[A[i]]++;
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << (long long)(N[0] * (N[0] - 1)) / 2 + (long long)(N[1] * (N[1] - 1)) / 2 << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}