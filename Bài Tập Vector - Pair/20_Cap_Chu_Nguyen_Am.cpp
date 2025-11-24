#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Dòng 1 là N: tổng số cặp dữ liệu chữ in thường - số
// N dòng tiếp theo mỗi cặp gồm: chữ in thường - số
// 1 <= N <= 1000. Số thuộc kiểu dữ liệu là số int.

// Nhiệm vụ của bạn là:
//    Lựa ra các cặp chữ - số, sao cho có chữ cái nguyên âm (vowel a, e, i, o, u).
//	  Bạn phải in các cặp theo thứ tự ngược so với thứ tự của chúng xuất hiện trong đầu vào.

//  VD:
//	5
//  a 1
//	b 2
//	o 10
// 	e 5
//	i 20

//  => i 20
//	   e 5
// 	   o 10

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