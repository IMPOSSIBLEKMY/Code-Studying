#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng A[] gồm N phần tử, 1 <= K <= N <= 10^5. 0 <= A[i] <= 10^7
// Nhiệm vụ của bạn là:
//     Chia mảng A thành 2 mảng có K phần tử và N - K phần tử. Các phần tử có thể không liên tiếp.
//     Chia sao cho hiệu của tổng các phần tử trong 2 mảng là lớn nhất

// VD: A[5] = 8 4 5 2 10  K = 2
//     => 17 (Chia thành (4 2) và (8 5 10). Hiệu là 23 - 6 = 17)

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