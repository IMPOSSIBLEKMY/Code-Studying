#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho 2 mảng A[], B[] gồm N, M phần tử, 1 <= N, M <= 10^6. 1 <= A[i], B[i] <= 10^6
// Nhiệm vụ của bạn là:
//     Xác định B có phải là mảng con của mảng A hay không (không cần liên tiếp nhưng cần đúng các thứ tự mảng)
//     Có thì in "YES", không thì "NO".

// VD: A[7] = 1 1 2 8 9 3 4
//     B[4] = 1 2 9 4
//     => YES

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