#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho vector có N phần tử, 1 <= N <= 1000. Các phần tử thêm vào là các số thuộc int.
// Dòng 1 là N: số lượng phần tử trong vector.
// Dòng 2 là N số trong vector.

// Nhiệm vụ của bạn là:
//     Sắp xếp các phần tử trong vector. Để sắp xếp vector bạn dùng hàm sort trong thư viện algorithm.
//     Dòng 1 in ra vector tăng dần, dòng 2 in ra vector giảm dần.
//     Gợi ý code:
//     #include <algorithm>
//
//     sort(v.begin(), v.end()); // Tăng dần
//
//     sort(v.begin(), v.end(), greater<int>()); // Giảm dần

//  VD:
//  8
//  992 763 670 344 67 268 298 852 

//  => 67 268 298 344 670 763 852 992
//  => 992 852 763 670 344 298 268 67 

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