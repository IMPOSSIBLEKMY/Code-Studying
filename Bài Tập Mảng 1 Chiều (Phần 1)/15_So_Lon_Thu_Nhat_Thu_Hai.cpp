#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 2 <= N <= 10^6 phần tử, 0 <= A[i] <= 10^6 
// Nhiệm vụ của bạn là:
//      Tìm số lớn thứ nhất và số lớn thứ hai trong mảng. Nó có thể bằng nhau.

// VD: A[5] = {3, 2, 5, 7, 5}
// => 5 7

void So_Lon_Thu_Nhat_Thu_Hai(int n, int A[])
{
    int so_lon_1 = 0;
    int so_lon_2 = 0;

    for(int i = 0; i <= n - 1; i++)
    {
        if(A[i] > so_lon_2)
        {
            int temp = so_lon_2;
            so_lon_2 = A[i];
            so_lon_1 = temp;
            continue;
        }

        if(A[i] == so_lon_2)
        {
            so_lon_1 = A[i];
            continue;
        }

        // Trường hợp A[i] < so_lon_2
        if(A[i] > so_lon_1)
        {
            so_lon_1 = A[i];
        }
    }

    cout << so_lon_1 << " " << so_lon_2 << endl;
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

    So_Lon_Thu_Nhat_Thu_Hai(n, A);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}