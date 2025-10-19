#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= K <= N <= 10000 phần tử, 0 <= A[i] <= 1000
// Nhiệm vụ của bạn là:
//     Xác định xem mảng là mảng chẵn hay mảng lẻ, in ra "CHAN" nếu mảng chẵn, "LE" nếu mảng lẻ, "CHANLE" nếu mảng chẵn lẻ.
//     Mảng chẵn được định nghĩa là mảng mà số lượng số chẵn nhiều hơn số lượng số lẻ, ngược lại. 
//     Trong trường hợp số lượng số chẵn bằng số lượng số lẻ thì mảng được gọi là mảng chẵn lẻ.

void Mang_Chan_Le(int n, int A[])
{
    int count_chan = 0;
    int count_le = 0;
    for(int i = 0; i <= n - 1; i++)
    {
        if(A[i] % 2 == 0)
        {
            count_chan++;
        }
        else
        {
            count_le++;
        }
    }

    if(count_chan > count_le)
    {
        cout << "CHAN" << endl;
        return;
    }

    if(count_chan < count_le)
    {
        cout << "LE" << endl;
        return;
    }

    cout << "CHANLE" << endl;
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

    Mang_Chan_Le(n, A);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}