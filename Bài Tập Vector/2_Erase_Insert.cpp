#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho số nguyên N là thao tác, vector có M phần tử, 1 <= N, M <= 200. Các phần tử thêm vào là các số thuộc int.
// Dòng 1 là M: số lượng phần tử trong vector. Dòng 2 là M số trong vector. Dòng 3 là N: số thao tác được thực hiện.
// N dòng tiếp theo là mỗi thao tác:
// Có 2 thao tác:
//     Chèn phần tử vào vị trí bất kì trong vector.
//     Xóa phần tử ở vị trí bất kì trong vector.
// Đối với thao tác thứ 1, giả sử vector đang có N phần tử, chỉ số chèn hợp lệ sẽ là từ 0 tới N, 
// ngoài ra các vị trí không hợp lệ sẽ không thực hiện chèn.
// Đối với thao tác thứ 2, giả sử vector đang có N phần tử, chỉ số xóa hợp lệ sẽ là từ 0 tới N - 1, 
// ngoài ra các vị trí không hợp lệ sẽ không thực hiện xóa.

// Nhiệm vụ của bạn là:
//     Thực hiện một loạt các thao tác này và in ra mảng sau khi thực hiện xong mọi thao tác.
//     Nếu vector rỗng in ra "EMPTY", ngược lại in ra các phần tử trong vector trên 1 dòng.

//  VD:
//  5
//  40 87 73 47 22
//  5
//  1 3 21
//  2 3
//  2 0
//  2 1
//  1 0 70
//  => 70 87 47 22

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