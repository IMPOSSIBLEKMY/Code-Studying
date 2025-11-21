#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho số nguyên N là thao tác, 1 <= N <= 200. Các phần tử thêm vào là các số thuộc int.
// Thực hiện một loạt các thao tác này vô mảng.
// N dòng tiếp theo là mỗi thao tác:
// Có 2 thao tác:
//     Thêm 1 phần tử vào cuối vector.
//     Xóa phần tử khỏi cuối vector nếu vector không rỗng.

// Nhiệm vụ của bạn là:
//     Nếu vector rỗng in ra "EMPTY", ngược lại in ra các phần tử trong vector trên 1 dòng sau khi thực hiện thao tác.
//     Gợi ý code:
//     vector<int> v;
//     int n; 
//     cin >> n;
//     for(int i = 0; i < n; i++)
//     {
//          //Xử lý thao tác
//     }
//     //In ra vector

//  VD:
//  7
//  1 58
//  2
//  2
//  1 52
//  1 81
//  1 12
//  1 2
//  => 52 81 12 2

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

        N[A[i]]++; //them
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