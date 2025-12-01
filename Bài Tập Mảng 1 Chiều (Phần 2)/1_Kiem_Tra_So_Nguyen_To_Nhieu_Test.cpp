#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho T testcase, 1 <= T <= 1000. Mỗi testcase nhập số nguyên N, 0 <= N <= 10^6
// Nhiệm vụ của bạn là:
//     Kiểm tra từng testcase có phải là số nguyên tố không. Sử dụng phương pháp Sàng Eratosthenes.
//     Đúng thì in ra "YES", ngược lại thì "NO".

bool prime[1000001] = {false};
void sang_Eratosthenes_1()
{
	for(int i = 2; i <= 1000000; i++)
	{
		prime[i] = true;
	}

	for(int i = 2; i <= 1000000/i; i++)
	{
		if(prime[i] == true)
		{
			for(int j = i*i; j <= 1000000; j += i)
			{
				prime[j] = false;
			}
		}
	}
}

bool not_prime[1000001] = {false};
void sang_Eratosthenes_2()
{
	not_prime[0] = true;
	not_prime[1] = true;

	int i = 2;
	int flag = true;
	while(i <= 1000000/i)
	{
		if(not_prime[i] == false)
		{
			for(int j = i*i; j <= 1000000; j += i)
			{
				not_prime[j] = true;
			}
		}

		if(i < 5)
		{
			i += 1;
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

	sang_Eratosthenes_2();

	for(int i = 0; i <= T - 1; i++)
	{
		if(not_prime[N[i]] == true)
		{
			cout << "NO" << endl;
		}
		else 
		{
			cout << "YES" << endl;
		}
	}

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}