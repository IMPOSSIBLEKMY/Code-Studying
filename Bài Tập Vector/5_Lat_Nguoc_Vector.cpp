#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho vector có N phần tử, 1 <= N <= 1000. Chỉ số L và R. 0 <= L <= R. Các phần tử thêm vào là các số thuộc int.
// Dòng 1 là N: số lượng phần tử trong vector.
// Dòng 2 là N số trong vector.
// Dòng 3 là L và R.
// Để lật ngược vector, ta dùng: reverse(V.begin(), V.end()).
// Để lật ngược vector V từ chỉ số L tới chỉ số R, ta dùng reverse(V.begin() + L, V.begin() + R + 1); 

// Nhiệm vụ của bạn là:
//     Sau khi lật ngược toàn bộ vector, bạn tiếp tục lật ngược các phần tử từ chỉ số L tới chỉ số R sau đó in ra vector.
//     Dòng 1 in ra vector sau lần lật 1, dòng 2 in ra vector sau lận lật 2.

//  VD:
//  13
//  5 3 4 1 6 3 0 3 1 4 8 4 1 
//  3 3

//  => 1 4 8 4 1 3 0 3 6 1 4 3 5
//  => 1 4 8 4 1 3 0 3 6 1 4 3 5 

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