#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng A[] gồm N phần tử, 1 <= N <= 10^5. 0 <= A[i] < 10^10
// Nhiệm vụ của bạn là:
//     Hãy tìm các số không giảm (các số có các chữ số không giảm dần) và in ra giá trị, tần suất của 
//     chúng theo thứ tự tần suất giảm dần. Nếu các số có số tần suất giống nhau, số có giá trị nhỏ hơn xếp trước.

// VD: A[5] = 888 289 123 321 54 888
//     => 888 2
//        123 1
//        289 1

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