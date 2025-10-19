#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho Q lần truy vấn, mỗi lần truy vấn là số nguyên L và R. 1 <= Q <= 10^4, 1 <= L, R <= 10^6
// Nhiệm vụ của bạn là:
//     Mỗi truy vấn in ra số lượng số nguyên tố tử L đến R.

// VD: Q = 3
//     L = 3, R = 17
//     L = 1, R = 11
//     L = 2, R = 18
//     => 6
//        5
//        7

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