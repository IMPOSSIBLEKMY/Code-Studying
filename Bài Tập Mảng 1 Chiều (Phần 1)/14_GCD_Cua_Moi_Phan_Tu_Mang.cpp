#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 10^6 phần tử, 0 <= A[i] <= 10^6 
// Nhiệm vụ của bạn là:
//      Tìm 1 số lớn nhất sao cho mọi số trong mảng đều chia hết cho nó.

// VD: A[5] = {2, 3, 5, 7, 5}
// => 1

int gcd(int a, int b)
{
    int r;

    if(a == 0 || b == 0)
    {
        return a + b;
    }

    while(b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int GCD_Cua_Moi_Phan_Tu_Mang(int n, int A[])
{
    int res = A[0];
    for(int i = 1; i <= n - 1; i++)
    {
        res = gcd(res, A[i+1]);
    }

    return res;
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

    cout << GCD_Cua_Moi_Phan_Tu_Mang(n, A) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}