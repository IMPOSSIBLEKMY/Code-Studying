#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Tại ngân hàng có các tờ tiền mệnh giá như sau:
// 1 2 5 10 20 50 100 200 500 1000
// Một người muốn đổi N đồng của mình thành các tờ tiền có mệnh giá như trên. 
// Nhiệm vụ của bạn là:
//     Xác định số lượng tờ tiền nhỏ nhất khi đổi từ N đồng ra các tờ tiền có mệnh giá như trên.

// VD: 121
//     => 3 tờ tiền (100 20 1)

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