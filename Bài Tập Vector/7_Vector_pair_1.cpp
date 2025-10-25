#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho Oxy có N điểm, 1 <= N <= 1000. Tọa độ là các số nguyên có trị tuyệt đối không quá 100.
// Dòng 1 là N: số lượng điểm
// N dòng tiếp theo: mỗi dòng gồm 2 số là tung độ và hoành độ.
// Dùng vector pair<int, int>, bạn có thể lưu tọa độ các điểm này vào. 

// Nhiệm vụ của bạn là:
//     Tính khoảng cách từ các điểm này về gốc tọa độ và lưu vào vector.
//     In ra các phần tử trong vector khoảng cách này, lấy 2 số sau dấu phẩy.

//  VD:
//  13
//  5 27
//  69 84
//  92 51
//  12 70
//  26 70
//  76 47
//  36 94
//  55 2
//  26 20
//  85 97
//  17 31
//  33 88
//  10 75

//  =>  27.46 108.71 105.19 71.02 74.67 89.36 100.66 55.04 32.80 128.97 35.36 93.98 75.66 

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