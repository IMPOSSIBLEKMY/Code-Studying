#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng gồm N số, 1 <= N <= 1000. Các phần tử trong vector là số int.

// Nhiệm vụ của bạn là:
//    In ra theo đề bài như sau:
//			Dòng 1: Các số nguyên tố, in theo thứ tự đảo ngược.
//			Dòng 2: Các số không phải là số nguyên tố, in theo thứ tự trong mảng.

// Gợi ý: Chia làm 2 loại vector.

//  VD:
//	8
//  10 7 2 5 1 4 3 9

//  => 3 5 2 7
//	   10 1 4 9

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