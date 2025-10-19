#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 10^6 phần tử, 1 <= A[i] <= 10^6 
// Nhiệm vụ của bạn là:
//      In tổng và tích các phần tử và lấy dư cho 10^9 + 7

void Tong_Tich_Cac_Phan_Tu(int n, int A[])
{
    int sum = 0;
    int tich = 1;

    for(int i = 0; i <= n - 1; i++)
    {
        sum += A[i];
        sum %= MOD;

        tich *= A[i];
        tich %= MOD;
    }

    cout << sum << " " << tich << endl;
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

    Tong_Tich_Cac_Phan_Tu(n, A);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}