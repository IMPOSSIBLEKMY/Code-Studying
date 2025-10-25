#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho vector có N phần tử, 1 <= N <= 1000. Các phần tử thêm vào là các số thuộc int.
// Dòng 1 là N: số lượng phần tử trong vector.
// Dòng 2 là N số trong vector.
// Với vector V bạn có thể dùng hàm:
//     max_element để tìm phần tử lớn nhất, 
//     min_element để tìm phần tử nhỏ nhất, 
//     accumulate để tính tổng.
// Cú pháp (Đối với mảng mà các bạn dùng (a, a + n)):
//     cout << *min_element(V.begin(), V.end());
//     cout << *max_element(V.begin(), V.end());
//     cout << accumulate(V.begin(), V.end(), 0);

// Nhiệm vụ của bạn là:
//     Dòng 1 in ra phần tử nhỏ nhất, dòng 2 in ra phần tử lớn nhất, dòng 3 in ra tổng các phần tử.

//  VD:
//  10
//  2 2 2 7 6 6 6 9 5 7 

//  => 2
//  => 9
//  => 52

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