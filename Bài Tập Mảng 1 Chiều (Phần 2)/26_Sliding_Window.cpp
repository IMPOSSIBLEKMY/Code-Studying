#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng A[] gồm N phần tử, 1 <= K <= N <= 10^7. 1 <= A[i] <= 10^9
// Nhiệm vụ của bạn là:
//     In ra tổng lớn nhất có K phần tử liền kề nhau trong mảng. Nếu có nhiều dãy con có tổng lớn nhát bằng nhau
//     in ra dãy con đầu tiên.

// VD: A[8] = 1 2 3 4 4 5 6 7
//     => 4
//     => 4 5 6 7

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