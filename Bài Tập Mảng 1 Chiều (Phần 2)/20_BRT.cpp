#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng A[] gồm N phần tử, 1 <= N <= 10^6, Mỗi phần tử là một thành phố khác nhau tại tọa độ x trên trục Ox.
// -10^9 <= x_i <= 10^9
// Không có thành phố nào trùng vị trí.
// Nhiệm vụ của bạn là:
//      Tìm có bao nhiêu cặp thành phố sao cho tuyến xe bus BRT đi đường ngắn nhất.

// VD: A[4] = 6 -3 0 4
//     => Khoảng cách gần nhất là 2 và có 1 cặp thành phố (cặp tại tọa độ 6-4)

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