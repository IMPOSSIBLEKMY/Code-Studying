#include <bits/stdc++.h>
#include <iomanip>
#include <iostream>

#define ll long long

using namespace std;

// Tính tổng chữ số chẳn và tổng chữ số lẻ trong số n bằng đệ quy.

int tong_chu_so_chan(ll n)
{
    if(n < 10)
    {
        if(n % 2 == 0)
        {
            return (int)n;
        }
        else 
        {
            return 0;
        }
    }

    int sum = tong_chu_so_chan(n/10);

    int digit = int(n%10);

    if(digit % 2 == 0)
    {
        return digit + sum;
    }
    else 
    {
        return sum;
    }
}

int tong_chu_so_le(ll n)
{
    if(n < 10)
    {
        if(n % 2 != 0)
        {
            return (int)n;
        }
        else 
        {
            return 0;
        }
    }

    int sum = tong_chu_so_le(n/10);

    int digit = int(n%10);

    if(digit % 2 != 0)
    {
        return digit + sum;
    }
    else 
    {
        return sum;
    }
}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << tong_chu_so_chan(n) << endl;
    cout << tong_chu_so_le(n) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}