#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 10^6 phần tử, 1 <= A[i] <= 10^6 
// Nhiệm vụ của bạn là:
//      In ra thứ tự cuối cùng của số nhỏ nhất trong mảng (nếu có nhiều số nhỏ nhất giống nhau thì in ra thứ tự cuối cùng của chúng).
//      In ra thứ tự đầu tiên của số lớn nhất trong mảng.

// VD: A[6] = {1, 1, 5, 3, 5, 4}
// => 1 2

void Thu_Tu_So_Nho_Nhat_Lon_Nhat(int n, int A[])
{
    int small_index = 0;
    int large_index = 0;

    int small = 1000000;
    int large = 1;

    bool check = false;

    for(int i = 0; i <= n - 1; i++)
    {
        if(A[i] <= small)
        {
            small = A[i];
            small_index = i;
        }

        // Không dùng >= bởi vì nó sẽ lấy các số lớn nhất giống nhau.
        if(A[i] > large)
        {
            large = A[i];
            large_index = i;
        }
    }

    if(small == large)
    {
        cout << "ALL NUMBERS ARE EQUAL." << endl;
        return;
    }

    cout << small_index << " " << large_index << endl;
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

    Thu_Tu_So_Nho_Nhat_Lon_Nhat(n, A);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}