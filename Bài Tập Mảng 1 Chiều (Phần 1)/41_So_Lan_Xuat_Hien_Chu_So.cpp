#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm N phần tử. 1 <= N <= 10^6 phần tử, -10^7 <= A[i] <= 10^7
// Mảng A[] có thể có số âm
// Nhiệm vụ của bạn là:
//     Tách từng chữ số của mỗi phần tử, đếm xem có bao nhiêu chữ số 0, chữ số 1,..., chữ số 8, chứ số 9 trong mảng đó.

// VD: A[3] = {1, 29, -10} 
// => 0: 1
//    1: 2
//    2: 1
//    3: 0
//    4: 0
//    ...
//    9: 1

int main()
{
    int n;
    cin >> n;

    int A[n];
    int N[10] = {0};
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
        if(A[i] < 0)
        {
            A[i] = -A[i];
        }

        while(A[i] >= 10)
        {
            int digit = A[i] % 10;
            N[digit]++;

            A[i] /= 10;
        }
        N[A[i]]++;
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    for(int i = 0; i <= 9; i++)
    {
        cout << i << " " << N[i] << endl;
    }

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}