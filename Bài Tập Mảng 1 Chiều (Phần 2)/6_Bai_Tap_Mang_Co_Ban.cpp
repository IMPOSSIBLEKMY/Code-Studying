#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm N phần tử. 1 <= N <= 1000 phần tử, -10^6 <= A[i] <= 10^6
// Nhiệm vụ của bạn là:
//     Tìm giá trị lớn nhất và vị trí đầu tiên của nó.
//     Tìm giá trị nhỏ nhất và vị trí cuối cùng của nó.
//     Đếm số lượng số nguyên tố có mặt trong mảng.
//     Tìm tích lớn nhất có thể tạo ra từ việc nhân hai phần tử khác nhau bất kỳ trong mảng.
//     Kiểm tra xem mảng có phải là mảng đối xứng.
//     Tính tích tất cả các phần tử trong mảng A và lấy kết quả theo modulo 10^9 + 7.

int MOD = 1000000007;

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

int main()
{
    int n;
    cin >> n;
    int A[n];

    int max = -1000000;
    int close_to_max = 0;
    int max_index = 0;

    int min = 1000000;
    int min_index = 0;

    sang_Eratosthenes();
    int count = 0;

    ll tich = 1;

    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];

        if(A[i] > max)
        {
            close_to_max = max;
            max = A[i];
            max_index = i;
        }

        if(A[i] <= min)
        {
            min = A[i];
            min_index = i;
        }

        if(A[i] >= 2)
        {
            if(not_prime[A[i]] == false)
            {
                count++;
            }
        }

        ll temp = 0;
        if(A[i] < 0)
        {
            temp = ((A[i] % MOD) + MOD) % MOD;

            tich *= temp;
            if(tich >= MOD)
            {
                tich %= MOD;
            }
        }
        else
        {
            tich *= A[i];
            if(tich >= MOD)
            {
                tich %= MOD;
            }
        }
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << max << " " << max_index << endl;

    cout << min << " " << min_index << endl;

    cout << count << endl;

    if(n >= 2)
    {
        cout << "MAXIMUM MULTIPLICATION OF TWO NUMBERS: " << max * close_to_max << endl;
    }
    else
    {
        cout << "NO MAXIMUM MULTIPLICATION OF TWO NUMBERS." << endl;
    }

    for(int i = 0; i <= (n - 1) / 2; i++)
    {
        if(A[i] != A[n - 1 - i])
        {
            cout << "NOT PALINDROME ARRAY." << endl;
            break;
        }

        if(i == (n - 1) / 2)
        {
            cout << "PALINDROME ARRAY." << endl;
            break;
        }
    }

    cout << tich << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}