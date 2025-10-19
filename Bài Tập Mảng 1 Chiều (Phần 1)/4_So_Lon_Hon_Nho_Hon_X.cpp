#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 1000 phần tử, -10^3 <= A[i], X <= 10^3 
// Nhiệm vụ của bạn là:
//      Đếm số phần tử mà chúng có giá trị lớn hơn hoặc bằng X trong dãy.
//      Đếm số phần tử mà chúng có giá trị nhỏ hơn X trong dãy.

// VD: A[5] = {1, 2, 1, 3, 5}   X = 4
// => 4 số nhỏ hơn X, 1 số lớn hơn X.

void so_lon_hon_nho_hon_X(int n, int X, int A[])
{
    int count_lon_hon = 0;
    int count_nho_hon = 0;

    for(int i = 0; i <= n - 1; i++)
    {
        if(A[i] < X)
        {
            count_nho_hon++;
        }

        if(A[i] >= X)
        {
            count_lon_hon++;
        }
    }

    cout << count_lon_hon << " " << count_nho_hon << endl;
    return;

}

int main()
{
    int n, X;
    cin >> n >> X;

    int A[n];
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    so_lon_hon_nho_hon_X(n, X, A)

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}