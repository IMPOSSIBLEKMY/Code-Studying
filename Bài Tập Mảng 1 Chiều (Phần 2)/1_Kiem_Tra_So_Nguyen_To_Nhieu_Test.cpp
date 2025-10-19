#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho T testcase, 1 <= T <= 1000. Mỗi testcase nhập số nguyên N, 0 <= N <= 10^6
// Nhiệm vụ của bạn là:
//     Kiểm tra từng testcase có phải là số nguyên tố không. Sử dụng phương pháp Sàng Eratosthenes.
//     Đúng thì in ra "YES", ngược lại thì "NO".

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