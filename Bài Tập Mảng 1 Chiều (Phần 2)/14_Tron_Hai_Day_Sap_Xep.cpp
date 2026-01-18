#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho 2 mảng A[], B[] gồm N, M phần tử, 1 <= N, M <= 10^7. 1 <= A[i], B[i] <= 10^9
// 2 Mảng đều có các phần tử sắp xếp theo chiều tăng dần.
// Nhiệm vụ của bạn là:
//     Trộn 2 mảng và các phần tử tăng dần. In ra mảng vửa trộn.

void merge(int N, int M, int A[], int B[])
{
    int i_A = 0, i_B = 0;

    while(i_A <= N - 1 && i_B <= M - 1)
    {
        if(A[i_A] <= B[i_B])
        {
            cout << A[i_A] << " ";
            i_A++;
        }
        else 
        {
            cout << B[i_B] << " ";
            i_B++;
        }
    }

    while(i_A <= N - 1)
    {
        cout << A[i_A] << " ";
        i_A++;
    }

    while(i_B <= M - 1)
    {
        cout << B[i_B] << " ";
        i_B++;
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

    int m;
    cin >> m;

    int B[m];
    for(int i = 0; i <= m - 1; i++)
    {
        cin >> B[i];
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    merge(n, m, A, B);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}