#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 10^6 phần tử, -10^6 <= A[i] <= 10^6
// Nhiệm vụ của bạn là:
//      Liệt kê các số sao cho nó đứng cạnh số trái dấu theo thứ tự mảng.

// VD: A[8] = {-2, 3, 5, 7, -5, 4, -1, -6}
// => -2 3 7 -5 4 -1

void So_Trai_Dau(int n, int A[])
{
    int temp_pos = -1;

    for(int i = 0; i <= n - 2; i++)
    {
        if((A[i] >= 0 && A[i+1] <= 0) || (A[i] <= 0 && A[i+1] >= 0))
        {
            if(temp_pos != i)
            {
                cout << A[i] << " " << A[i+1] << " ";
            }
            else 
            {
                cout << A[i+1] << " ";
            }

            temp_pos = i+1;
        }
    }
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

    So_Trai_Dau(n, A);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}