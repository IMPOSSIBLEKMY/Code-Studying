#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 0 <= N <= 1000 phần tử, 0 <= A[i] <= 10^6
// Nhiệm vụ của bạn là:
//     Liệt kê có bao nhiêu giá trị phần tử xuất hiện trong mảng từ nhỏ đến lớn, kèm theo tần suất của chúng.

int N[1000001] = {0};

void Mang_Danh_Dau_2(int n, int max)
{
    for(int i = 0; i <= max; i++)
    {
        if(N[i] > 0)
        {
            cout << i << " " << N[i] << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int max = 0;
    int A[n];
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
        N[A[i]]++;
        if(max <= A[i])
        {
            max = A[i];
        }
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    Mang_Danh_Dau_2(n, max);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}