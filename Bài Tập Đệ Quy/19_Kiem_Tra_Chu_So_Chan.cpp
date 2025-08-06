#include <bits/stdc++.h>
#include <iomanip>
#include <iostream>

#define ll long long

using namespace std;

// Kiểm tra tất cả chữ số có trong số n là chẵn bằng đệ quy.

bool kiem_tra_chu_so_chan(ll n)
{
    if(n < 10)
    {
        if(n % 2 == 0)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }

    int digit = (int)(n%10);

    // Nếu giữa chừng mà ra false thì không kiểm tra đến số cuối
    if(digit % 2 != 0)
    {
        return false;
    }
    else 
    {
        return kiem_tra_chu_so_chan(n/10);
    }

}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    if(kiem_tra_chu_so_chan(n))
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}