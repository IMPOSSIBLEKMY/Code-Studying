#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 1000 phần tử, 0 <= A[i] <= 10^3
// Nhiệm vụ của bạn là:
//      Đảo ngược các vị trí phần tử ban đầu mảng 

// VD: A[5] = {3, 4, 5, 6, 7}
// => 7 6 5 4 3

void Lat_Nguoc_Mang(int n, int A[])
{
    for(int i = 0; i <= n/2 - 1; i++)
    {
        int temp = A[i];
        A[i] = A[n - 1 - i];
        A[n - 1 - i] = temp;

        cout << A[i] << " ";
    }

    for(int i = n/2; i <= n - 1; i++)
    {
        cout << A[i] << " ";
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

    Lat_Nguoc_Mang(n, A);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}