#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho T testcase, 1 <= T <= 1000. Mỗi testcase nhập số nguyên chắn N, 4 <= N <= 10^6
// Nhiệm vụ của bạn là:
//     Từng testcase được tạo bởi cặp số nguyên tố p và q. Hãy in ra các cặp số của testcase đó. Sử dụng mảng đánh dấu.

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