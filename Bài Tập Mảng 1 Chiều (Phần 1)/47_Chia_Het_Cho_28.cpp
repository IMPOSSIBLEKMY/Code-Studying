#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm N phần tử. 1 <= N <= 10^6 phần tử, 0 <= A[i] <= 10^9
// Nhiệm vụ của bạn là:
//     Đếm có bao nhiêu cặp số A[i], A[j] với i khác j, cộng lại nhau chia hết cho 28.

long long Chia_Het_Cho_28(int N[])
{
    long long sum = 0;

    sum += (long long)(N[0]*(N[0] - 1)) / 2;

    sum += (long long)(N[14]*(N[14] - 1)) / 2;

    for(int i = 1; i <= 13; i++)
    {
        sum += (long long)(N[i] * N[28 - i]);
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;

    long long A[n];
    int N[28] = {0}; // Các số khi chia 28 dư x
    int x = 0;
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
        x = int(A[i] % 28);
        N[x]++;
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << Chia_Het_Cho_28(N) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}