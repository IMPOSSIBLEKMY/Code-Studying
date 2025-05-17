#include <bits/stdc++.h>

// @ Long long có giới hạn từ -9223372036854775808 -> 9223372036854775807
#define ll long long

using namespace std;

// ! Tính tổ hợp chập k của n - trả về kết quả

// # ĐN         : $$\color{#fffb00}\mathrm{C}_{n}^{k}=\frac{n!}{k!(n-k)!}=\frac{n(n-1)(n-2)...(n-k+1)}{k!}$$

// # VD         : 6C3 = 20, 6C2 = 15
// # Độ phức tạp: O(k)

// $ 1. Không xét số âm, không xét k > n
// $ 2. Xét các trường hợp đặc biệt như:
// $        k = n hay k = 0
// $        k = 1 hay k = n - 1
// $ 3. Tính công thức nCk theo cách rút gọn

ll calculateCombination(int n, int k)
{
    if (k > n || n < 0 || k < 0)
    {
        return 0;
    }

    if (k == 0 || k == n)
    {
        return 1;
    }

    if (k == 1 || k == n - 1)
    {
        return n;
    }

    ll tich1 = 1;
    ll tich2 = 1;
    for (int i = 1; i <= k; i++)
    {
        tich1 *= n;
        tich2 *= i;
        n--;
    }

    return (tich1 / tich2);
}

int main()
{
    int n, k;
    cin >> n >> k;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << calculateCombination(n, k) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}