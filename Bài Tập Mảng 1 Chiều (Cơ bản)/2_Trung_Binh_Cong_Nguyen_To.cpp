#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 0 <= N <= 1000 phần tử, -10^3 <= A[i] <= 10^3 
// Nhiệm vụ của bạn là:
//      Tính trung binh cộng các số nguyên tố xuất hiện trong dãy.
//      Kết quả lấy 3 số sau dấu phẩy.

void dem_chan_le_va_tong_chan_le(int n, int A[])
{
    int chan = 0, le = 0;
    ll tong_chan = 0, tong_le = 0;

    int i = 0;
    while(i <= n - 1)
    {
        if(A[i] % 2 == 0)
        {
            chan++;
            tong_chan += A[i];
        }
        else 
        {
            le++;
            tong_le += A[i];
        }

        i++;
    }

    cout << chan << " " << le << endl;
    cout << tong_chan << " " << tong_le << endl;

    return;
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

    dem_chan_le_va_tong_chan_le(n, A);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}