#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm N phần tử. 1 <= N <= 1000 phần tử, 0 <= A[i] <= 1000
// Nhiệm vụ của bạn là:
//     In ra các số lớn hơn đầu tiên nằm ở bên phải số đang xét. Nếu không có thì in ra -1.

// VD: A[7] = {5, 7, 1, 9, 3, 4, 0} 
// => 7 9 9 -1 4 -1 -1

void Next_Greater_Element(int n, int A[])
{
    for(int i = 0; i <= n - 1; i++)
    {
        for(int j = i + 1; j <= n - 1; j++)
        {
            if(A[j] > A[i])
            {
                cout << A[j] << " ";
                break;
            }

            if(j == n - 1)
            {
                cout << -1 << " ";
                break;
            }
        }

        if(i == n - 1)
        {
            cout << -1 << " ";
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

    Next_Greater_Element(n, A);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}