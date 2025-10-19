#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 1000 phần tử, 0 <= A[i] <= 10^3 
// Nhiệm vụ của bạn là:
//      Tìm độ chêch lệch nhỏ nhất giữa 2 phần tử bất kì trong mảng.

// VD: A[8] = {96, 69, 93, 27, 84, 32, 78, 56}
// => Chênh lệch nhỏ nhất bằng 3 (Số 96 và 93)

int do_chenh_lech(int n, int A[])
{
    int smallest_gap = 10000;

    for(int i = 0; i <= n - 1; i++)
    {
        for(int j = i + 1; j <= n - 1; j++)
        {
            int gap = A[i] - A[j];
            if(gap < 0)
            {
                gap = -gap;
            }

            if(gap <= smallest_gap)
            {
                smallest_gap = gap;
            }
        }
    }

    return smallest_gap;
}

int main()
{
    int n;
    cin >> n;

    int A[n];
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << do_chenh_lech(n, A) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}