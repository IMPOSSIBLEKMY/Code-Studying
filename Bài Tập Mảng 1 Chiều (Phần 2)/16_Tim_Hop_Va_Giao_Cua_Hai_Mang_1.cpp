#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho 2 mảng A[], B[] gồm N, M phần tử, 1 <= N, M <= 10^6. 0 <= A[i], B[i] <= 10^7
// Nhiệm vụ của bạn là:
//     Tìm hợp và giao của 2 mảng. In ra phần đó.

// VD: A[5] = 1 2 1 2 7
//     B[6] = 1 2 3 4 5 6
//     => Giao: 1 2
//        Hợp: 1 2 3 4 5 6 7

int main()
{
    int n;
    cin >> n;

    int A[n];
    s
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