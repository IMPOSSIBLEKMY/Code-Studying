#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho T testcase, 1 <= T <= 1000. Mỗi testcase nhập số nguyên chắn N, 4 <= N <= 10^6
// Nhiệm vụ của bạn là:
//     Từng testcase được tạo bởi cặp số nguyên tố p và q. Hãy in ra các cặp số của testcase đó. 
// 	   Sử dụng mảng đánh dấu (phương pháp Sàng Eratosthenes).

bool not_prime[1000001] = {0};

void sang_Eratosthenes()
{
    not_prime[0] = true;
    not_prime[1] = true;

    int flag = true;
    int i = 2;
    while(i <= 1000000 / i)
    {
        if(not_prime[i] == false)
        {
            for(int j = i * i; j <= 1000000; j += i)
            {
                not_prime[j] = true;
            }
        }

        if(i <= 4)
        {
            i++;
            continue;
        }

        switch(flag)
        {
            case true:
                {
                    flag = false;
                    i += 2;
                    break;
                }
            case false:
                {
                    flag = true;
                    i += 4;
                    break;
                }
        }
    }
}

void print_Goldbach_Conjecture(int n)
{
    int flag = true;
    int i = 2;
	// kiểm tra từ i = 2 đến n/2 tại vì số goldbach conjecture là tổng giữa 2 số nguyên tố.
    while(i <= n / 2)
    {
        if(not_prime[i] == false && not_prime[n - i] == false)
        {
            cout << i << " " << n - i << endl;
        }

        if(i <= 4)
        {
            i++;
            continue;
        }

        switch(flag)
        {
            case true:
                {
                    flag = false;
                    i += 2;
                    break;
                }
            case false:
                {
                    flag = true;
                    i += 4;
                    break;
                }
        }
    }
}

int main()
{
    int T;
    cin >> T;

    int N[T];

    for(int i = 0; i <= T - 1; i++)
    {
        cin >> N[i];
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    sang_Eratosthenes();

    for(int i = 0; i <= T - 1; i++)
    {
        print_Goldbach_Conjecture(N[i]);
		cout << endl;
    }

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}