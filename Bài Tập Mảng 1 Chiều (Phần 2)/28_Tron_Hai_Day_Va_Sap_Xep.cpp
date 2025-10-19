#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho 2 mảng A[], B[] gồm N phần tử, 1 <= N <= 10^5. 1 <= A[i], B[i] <= 10^9
// Nhiệm vụ của bạn là:
//     Trộn 2 dãy thành 1 dãy lớn. Dãy lớn ở các vị trí chẵn gồm các phần tử của mảng A sắp xếp theo giá trị tăng dần.
//     Dãy lớn ở các vị trí lẻ gồm các phần tử của mảng B sắp xếp theo giá trị giảm dần.

// VD: A[4] = 4 2 7 1
//     B[4] = 5 6 2 8
//     => 1 8 2 6 4 5 7 2

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