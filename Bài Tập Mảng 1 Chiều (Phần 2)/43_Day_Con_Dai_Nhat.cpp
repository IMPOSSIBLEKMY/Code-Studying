#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng A[] gồm N phần tử, 1 <= K <= N <= 10^6. -10^6 <= A[i] <= 10^6
// Nhiệm vụ của bạn là:
//     Tìm dãy con có các phần tử liên tiếp dài nhất, sao cho tổng của nó chia được cho K. 
//     Nếu có thì in ra độ dài của dãy con. Nếu không có thì in ra -1.

// VD: A[5] = 3 7 8 4 6    K = 5
//     => 7 8 4 6

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