#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho số nguyên N, 1 <= N <= 10^5
// Nhiệm vụ của bạn là:
//     In ra ước nguyên tố nhỏ nhất của các số nguyên từ 1 dến N. Uớc của số nguyên tố là chính nó.
// 	   Sử dụng mảng đánh dấu (phương pháp Sàng Eratosthenes).

int USNTNN[100001] = {0};

void sang_Eratosthenes()
{
    for(int i = 1; i <= 100000; i++)
    {
        USNTNN[i] = i;
    }

    bool flag = true;
    int i = 2;
    while(i <= 100000 / i)
    {
        if(USNTNN[i] == i)
        {
            for(int j = i * i; j <= 100000; j += i)
            {
                if(USNTNN[j] == j)
                {
                    USNTNN[j] = i;
                }
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

int main()
{
    int n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    sang_Eratosthenes();

    for(int i = 1; i <= n; i++)
    {
        cout << USNTNN[i] << endl;
    }

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}