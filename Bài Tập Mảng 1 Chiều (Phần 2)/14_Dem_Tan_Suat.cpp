#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng A[] gồm N phần tử, 2 <= N<= 10^6. 0 <= A[i] <= 10^7
// Nhiệm vụ của bạn là:
//     In ra các giá trị của mảng theo giá trị từ nhỏ đến lớn và kèm theo tần suất của nó. Mỗi giá trị in ra 1 lần.
//     In ra các giá trị của mảng theo thứ tự mảng và kèm theo tần suất của nó. Mỗi giá trị in ra 1 lần.

// VD: A[8] = 2 1 2 3 4 8 2 3
//     => 1 1
//     => 2 3
//     => 3 2
//     => 4 1
//     => 8 1

//     => 2 3
//     => 1 1
//     => 3 2
//     => 4 1
//     => 8 1

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