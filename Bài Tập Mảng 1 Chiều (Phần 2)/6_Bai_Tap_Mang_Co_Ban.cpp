#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm N phần tử. 1 <= N <= 1000 phần tử, -10^6 <= A[i] <= 10^6
// Nhiệm vụ của bạn là:
//     Tìm giá trị lớn nhất và vị trí đầu tiên của nó.
//     Tìm giá trị nhỏ nhất và vị trí cuối cùng của nó.
//     Đếm số lượng số nguyên tố có mặt trong mảng.
//     Tìm tích lớn nhất có thể tạo ra từ việc nhân hai phần tử khác nhau bất kỳ trong mảng.
//     Kiểm tra xem mảng có phải là mảng đối xứng.
//     Tính tích tất cả các phần tử trong mảng A và lấy kết quả theo modulo 10^9 + 7.

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