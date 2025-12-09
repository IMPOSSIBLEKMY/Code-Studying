#include <bits/stdc++.h>
#include <cmath>

#define ll long long

using namespace std;

// Cho số nguyên N, 1 <= N <= 10^12
// Nhiệm vụ của bạn là:
//     Liệt kê các số có đúng 3 ước số nhỏ hơn hoặc bằng N.
// 	   Sử dụng mảng đánh dấu (phương pháp Sàng Eratosthenes).

bool not_prime[1000000] = {0};

void sang_Eratosthenes()
{
    not_prime[0] = true;
    not_prime[1] = true;

    bool flag = true;
    int i = 2;
    while(i <= 999999 / i)
    {
        if(not_prime[i] == false)
        {
            for(int j = i * i; j <= 999999; j += i)
            {
                not_prime[j] = true;
            }
        }

        if(i <= 4)
        {
            i++;
        }
        else
        {
            if(flag == true)
            {
                flag = false;
                i += 2;
            }
            else
            {
                flag = true;
                i += 4;
            }
        }
    }
}

void print_T_Prime(ll n)
{
    int end_range = int(sqrt(n));

    bool flag = true;
    int i = 2;
    while(i <= end_range)
    {
        if(not_prime[i] == false)
        {
            cout << 1ll * i * i << endl;
        }

        if(i <= 4)
        {
            i++;
        }
        else
        {
            if(flag == true)
            {
                flag = false;
                i += 2;
            }
            else
            {
                flag = true;
                i += 4;
            }
        }
    }
}

int main()
{
    ll N;
    cin >> N;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    sang_Eratosthenes();

    print_T_Prime(N);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}