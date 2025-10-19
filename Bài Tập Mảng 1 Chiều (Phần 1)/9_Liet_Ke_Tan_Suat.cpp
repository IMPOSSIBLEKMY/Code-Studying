#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 1000 phần tử, 0 <= A[i] <= 10^3 
// Nhiệm vụ của bạn là:
//      Liệt kê số lần xuất hiện các giá trị khác nhau theo thứ tự của mảng.

// VD: A[8] = {1, 3, 2, 4, 1, 2, 3, 5}
// => 1 2
//    3 2
//    2 2
//    4 1
//    5 1

void liet_ke_tan_suat(int n, int A[], int N[])
{
    for(int i = 0; i <= n - 1; i++)
    {
        if(N[A[i]] >= 1)
        {
            cout << A[i] << " " <<  N[A[i]] << endl;
            N[A[i]] = -1;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int A[n];
    int N[10001];
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
        N[A[i]]++;
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    liet_ke_tan_suat(n, A, N);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}