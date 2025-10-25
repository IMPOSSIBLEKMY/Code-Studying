#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho vector có N phần tử, 1 <= N <= 1000. Chỉ số L và R. 0 <= L <= R. Các phần tử thêm vào là các số thuộc int.
// Dòng 1 là N: số lượng phần tử trong vector.
// Dòng 2 là N số trong vector.
// Dòng 3 là L và R.

// Nhiệm vụ của bạn là:
//     Dòng 1 in ra vector từ L tới R, dòng 2 in ra vector từ R tới L bằng cách dùng iterator.

//  VD:
//  10
//  8 1 8 3 8 5 3 5 9 7
//  3 6

//  => 3 8 5 3
//  => 3 5 8 3 

int main()
{
    int n;
    cin >> n;

    int A[n];
    int N[2] = {0};
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];

        A[i] %= 2;

        N[A[i]]++;
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << (long long)(N[0] * (N[0] - 1)) / 2 + (long long)(N[1] * (N[1] - 1)) / 2 << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}