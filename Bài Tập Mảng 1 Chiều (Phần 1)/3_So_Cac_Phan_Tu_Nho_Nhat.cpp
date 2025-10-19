#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 1000 phần tử, -10^3 <= A[i] <= 10^3 
// Nhiệm vụ của bạn là:
//      Đếm số phần tử mà chúng có giá trị nhỏ nhất trong dãy.

// VD: A[5] = {1, 2, 1, 3, 5}   
// => Hai lần xuất hiện phần tử nhỏ nhất là 1.

int so_cac_phan_tu_nho_nhat(int n, int A[])
{
    int smallest = 10000;
    int count = 0;

    for(int i = 0; i <= n - 1; i++)
    {
        if(A[i] < smallest)
        {
            smallest = A[i];
            count = 0;
        }

        if(smallest == A[i])
        {
            count++;
        }
    }

    return count;
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

    cout << so_cac_phan_tu_nho_nhat(n, A) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}