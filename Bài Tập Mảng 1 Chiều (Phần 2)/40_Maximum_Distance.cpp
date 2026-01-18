#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng A[] gồm N phần tử, 1 <= K <= N <= 10^6. -10^6 <= A[i] <= 10^6
// Nhiệm vụ của bạn là:
//     Tìm khoảng cách lớn nhất giữa 2 chỉ số i và j, sao cho trị tuyệt đối của hiệu A[i] và A[j] bằng K
//     In ra -1 nếu không có số như vậy.

// VD: A[14] = 0 1 3 0 4 0 0 3 3 -4 1 0 -4 3    K = 2
//     => 12

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