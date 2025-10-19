#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho 2 mảng A[], B[] gồm N, M phần tử, 1 <= N, M <= 10^7. 1 <= A[i], B[i] <= 10^9
// 2 Mảng đều có các phần tử sắp xếp theo chiều tăng dần.
// Nhiệm vụ của bạn là:
//     Trộn 2 mảng và các phần tử phải tăng dần. In ra mảng vửa trộn.

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