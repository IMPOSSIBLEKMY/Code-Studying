#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 1000 phần tử, 0 <= A[i] <= 10^3
// Nhiệm vụ của bạn là:
//      In ra số theo thứ tự của mảng sao cho nó lớn hơn so với 2 số kế bên nó.

// VD: A[5] = {3, 5, 2, 6, 0}
// => 5 6

void So_Lon_Hon_Hai_Ben(int n, int A[])
{
    for(int i = 1; i <= n - 2; i++)
    {
        if(A[i - 1] <= A[i] && A[i] >= A[i + 1])
        {
            cout << A[i] << " ";
            i += 1;
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

    So_Lon_Hon_Hai_Ben(n, A);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}