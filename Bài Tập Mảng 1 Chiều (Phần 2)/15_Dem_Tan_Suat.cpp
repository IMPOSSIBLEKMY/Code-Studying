#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng A[] gồm N phần tử, 2 <= N <= 10^6. 0 <= A[i] <= 10^7
// Nhiệm vụ của bạn là:
//     In ra các giá trị của mảng theo giá trị từ nhỏ đến lớn và kèm theo tần suất của nó. Mỗi giá trị in ra 1 lần.
//     In ra các giá trị của mảng theo thứ tự mảng và kèm theo tần suất của nó. Mỗi giá trị in ra 1 lần.

// VD: A[8] = 2 1 2 3 4 8 2 3
//     => 1 1
//     => 2 3
//     => 3 2
//     => 4 1
//     => 8 1

//     => 2 3
//     => 1 1
//     => 3 2
//     => 4 1
//     => 8 1

int N[10000001] = {0};

void sort1(int min, int max)
{
    for(int i = min; i <= max; i++)
    {
        if(N[i] != 0)
        {
            cout << i << " " << N[i] << endl;
        }
    }
}

void sort2(int n, int A[])
{
    for(int i = 0; i <= n; i++)
    {
        if(N[A[i]] != 0)
        {
            cout << A[i] << " " << N[A[i]] << endl;
            N[A[i]] = 0;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int A[n];
    int max = 0, min = 10000000;
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];

        if(A[i] >= max)
        {
            max = A[i];
        }

        if(A[i] <= min)
        {
            min = A[i];
        }

        N[A[i]]++;
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    sort1(min, max);

    sort2(n, A);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}