#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 1000 phần tử, 0 <= A[i], X <= 10^3
// Nhiệm vụ của bạn là:
//     Xây dựng mảng F sao cho F[0] = A[0], F[i] = A[i] + F[i-1]

// VD: A[5] = {124, 577, 658, 919, 87}
// => 124 701 1359 2278 2365

void Mang_Cong_Don(int n, int A[])
{
    int prev = 0;

    for(int i = 0; i <= n - 1; i++)
    {
        prev = A[i] + prev;
        cout << prev << " ";
    }

    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    int A[n];
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    Mang_Cong_Don(n, A);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}