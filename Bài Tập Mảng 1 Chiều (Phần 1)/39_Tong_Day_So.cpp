#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm N phần tử. 4 <= N <= 1000 phần tử, 0 <= A[i] <= 1000
// Nhiệm vụ của bạn là:
//     Tính tổng của 2 số liên tiếp, tổng của 3 số liên tiếp, tổng của 4 số liên tiếp của các phần tử trong mảng.

// VD: A[4] = {1, 2, 4, 3} 
// => Tổng 2 số liên tiếp: 1+2 = 3, 2+4 = 6, 4+3 = 7

void Tong_Day_So(int n, int A[])
{
    int sum = 0;
    for(int i = 0; i <= n - 2; i++)
    {
        sum = A[i] + A[i+1];
        cout << sum << " ";
    }
    cout << endl;

    for(int i = 0; i <= n - 3; i++)
    {
        sum = A[i] + A[i+1] + A[i+2];
        cout << sum << " ";
    }
    cout << endl;

    for(int i = 0; i <= n - 4; i++)
    {
        sum = A[i] + A[i+1] + A[i+2] + A[i+3];
        cout << sum << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    int A[n];
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    Tong_Day_So(n, A);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}