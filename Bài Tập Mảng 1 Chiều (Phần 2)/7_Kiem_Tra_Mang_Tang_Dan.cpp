#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng A[] gồm N phần tử, 1 <= N <= 10^6, 1 <= A[i] <= 10^9
// Nhiệm vụ của bạn là:
//     Kiểm tra mảng sao cho các phần tử đều tăng chặt. In ra "YES" nếu thỏa, còn không thì "NO".

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

    for(int i = 0; i <= n - 1; i++)
    {
        if(i >= 1)
        {
            if(A[i] <= A[i - 1])
            {
                cout << "NO" << endl;
                break;
            }
        }

        if(i == n - 1)
        {
            cout << "YES" << endl;
        }
    }

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}