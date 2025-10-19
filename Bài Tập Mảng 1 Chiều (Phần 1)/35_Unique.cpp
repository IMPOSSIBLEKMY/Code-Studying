#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm N phần tử. 1 <= N <= 1000 phần tử, 0 <= A[i] <= 100
// Nhiệm vụ của bạn là:
//     In lại mảng A sao cho không còn các giá trị bằng nhau nằm liền kề nhau.

// VD: A[7] = {1, 2, 2, 3, 4, 4, 4}
// => 1 2 3 4

void Unique(int n, int A[])
{
    cout << A[0] << " ";

    for(int i = 1; i <= n - 1; i++)
    {
        if(A[i] != A[i - 1])
        {
            cout << A[i] << " ";
        }
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

    Unique(n, A);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}