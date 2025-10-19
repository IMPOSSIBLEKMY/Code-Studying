#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng A[] gồm N phần tử, 1 <= K <= N <= 10^6. -10^6 <= A[i] <= 10^6
// Nhiệm vụ của bạn là:
//     Tìm độ dài ngắn nhất của mảng con có các phần tử liên tiếp mà tổng của chúng bằng K. Nếu không thì in ra -1.

// VD: A[9] = 1 1 3 1 2 4 1 1 2     K = 6
//     => 2 (Mảng (2 4))

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