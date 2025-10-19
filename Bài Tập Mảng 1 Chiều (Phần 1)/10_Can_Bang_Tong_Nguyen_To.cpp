#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 1000 phần tử, 0 <= A[i] <= 10^3 
// Nhiệm vụ của bạn là:
//      In ra thứ tự i của mảng sao cho tổng các phần tử bên trái của A[i] là số nguyên tố 
//      và tổng các phần tử bên phải của A[i] cũng là số nguyên tố. 

// VD: A[5] = {53, 5, 69, 47, 19}
// => i = 3 (Vì bên trái của 47 là: 53 + 3 + 69 = 127 là số nguyên tố. Bên phải của 47 là: 19 là số nguyên tố)

bool so_nguyen_to(int n)
{
    if(n <= 1)
    {
        return false;
    }

    if(n == 2 || n == 3)
    {
        return true;
    }

    if(n % 2 == 0)
    {
        return false;
    }

    if(n % 3 == 0)
    {
        return false;
    }

    for(int i = 5; i <= n/i; i+=6)
    {
        if(n % i == 0 || n % (i+2) == 0)
        {
            return false;
        }
    }

    return true;
}

void can_bang_tong_nguyen_to(int n, int A[])
{
    for(int i = 1; i <= n - 2; i++)
    {
        int trai = 0;
        int phai = 0;

        for(int j = 0; j <= i - 1; j++)
        {
            trai += A[j];
        }

        for(int k = i + 1; k <= n - 1; k++)
        {
            phai += A[k];
        }

        if(so_nguyen_to(trai) == true)
        {
            if(so_nguyen_to(phai) == true)
            {
                cout << i << endl;
                return;
            }
        }
    }

    cout << "NONE" << endl;
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

    can_bang_tong_nguyen_to(n, A);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}