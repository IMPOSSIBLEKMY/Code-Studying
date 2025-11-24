#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Dòng 1 là N: số dòng và Q: số truy vấn. 
// N dòng tiếp theo: mỗi dòng bao gồm số đầu tiên là M (là số lượng số của dòng đó), theo sau là M số của dòng này.
// Q dòng tiếp theo: mỗi dòng là một truy vấn gồm: dòng x và cột y (dòng x và cột y được đánh số từ 1).
// 1 <= N,M <= 10^5. 1 <= Q <= 1000. x, y đảm bảo dữ liệu hợp lệ.

// Nhiệm vụ của bạn là:
//    In ra giá trị nằm ở dòng x, cột y trong bảng số mỗi lần truy vấn.
//    Bài này bạn sử dụng 1 mảng vector vector a[N].
//    với N là số dòng, hoặc bạn có thể dùng vector các vector để lưu. Mỗi dòng sẽ dùng 1 vector để lưu.

//  VD:
//  5 5
//  8 29 20 78 68 62 92 71 37 
//  6 8 35 67 26 6 97 
//  9 81 50 15 93 62 33 28 87 28 
//  5 51 22 72 57 29 
//  8 0 76 49 71 23 41 22 92 
//  5 1
//  1 6
//  2 5
//  1 7
//  1 5

//  =>     0
//         92
//         6
//         71
//         62

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