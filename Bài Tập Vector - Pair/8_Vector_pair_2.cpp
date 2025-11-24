#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho Oxy có N điểm, 1 <= N <= 1000. Tọa độ là các số nguyên có trị tuyệt đối không quá 100.
// Dòng 1 là N: số lượng điểm
// N dòng tiếp theo: mỗi dòng gồm 3 số là tung độ, hoành độ, cao độ.
// Dùng vector pair<pair<int, int>, int>>, bạn có thể lưu tọa độ các điểm này vào. 

// Nhiệm vụ của bạn là:
//     Tính tổng của tung độ, hoành độ, cao độ và lưu vào vector.
//     In ra các phần tử trong vector tổng này.

//  VD:
//  12
//  65 91 53
//  64 70 15
//  50 9 57
//  69 37 11
//  31 35 66
//  73 55 50
//  63 40 38
//  33 5 41
//  67 39 29
//  85 78 6
//  67 49 83
//  41 34 88

//  =>   209 149 116 117 132 178 141 79 135 169 199 163  

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