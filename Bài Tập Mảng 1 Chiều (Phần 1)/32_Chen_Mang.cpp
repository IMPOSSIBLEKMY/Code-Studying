#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[], B[] gồm N, M phần tử. 1 <= P <= N <= M <= 1000 phần tử, 0 <= A[i], B[i] <= 1000
// Nhiệm vụ của bạn là:
//     Chèn mảng B vào chỉ số P của mảng A và in ra mảng A sau khi chèn

// VD: A[10] = {64, 94, 78, 99, 50, 21, 57, 41, 68, 16}     P = 5
//     B[7]  = {73, 91, 15, 89, 2, 85, 61} 
// => 64 94 78 99 50 73 91 15 89 2 85 61 21 57 41 68 16

void Chen_Mang(int n, int A[], int m, int B[], int P)
{
    for(int i = 0; i <= P - 1; i++)
    {
        if(i >= n)
        {
            cout << 0 << " ";
            continue;
        }

        cout << A[i] << " ";
    }

    for(int i = 0; i <= m - 1; i++)
    {
        cout << B[i] << " ";
    }

    for(int i = P; i <= n - 1; i++)
    {
        cout << A[i] << " "; 
    }

    cout << endl;
}

int main()
{
    int n, m, P;
    cin >> n >> m >> P;

    int A[n], B[m];
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
    }

    for(int i = 0; i <= m - 1; i++)
    {
        cin >> B[i];
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    Chen_Mang(n, A, m, B, P);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}