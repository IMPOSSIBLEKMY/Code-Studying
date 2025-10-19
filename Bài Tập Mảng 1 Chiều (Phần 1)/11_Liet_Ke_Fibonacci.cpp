#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 10^6 phần tử, 0 <= A[i] <= 10^18 
// Nhiệm vụ của bạn là:
//      Liệt kê các số trong mảng là số Fibonacci theo thứ tự của mảng. Nếu không có thì in "NONE".

// VD: A[5] = {1597, 9, 0, 12, 5}
// => 1597 0 5

bool fibonacci(ll n)
{
    ll a = 0;
    ll b = 1;
    ll c;

    if(n == a)
    {
        return true;
    }

    if(n == b)
    {
        return true;
    }

    for(int i = 3; i <= 93; i++)
    {
        c = a + b;

        if(n == c)
        {
            return true;
        }

        if(c > n)
        {
            return false;
        }

        a = b;
        b = c;
    }

    return false;
}

void liet_ke_fibonacci(int n, ll A[])
{
    for(int i = 0; i <= n - 1; i++)
    {
        if(fibonacci(A[i]) == true)
        {
            cout << A[i] << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;

    ll A[n];
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    liet_ke_fibonacci(n, A);

    cout << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}