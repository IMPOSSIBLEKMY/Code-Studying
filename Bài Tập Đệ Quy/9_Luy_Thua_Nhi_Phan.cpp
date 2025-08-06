#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007 

using namespace std;

// Tính lũy thừa a^b theo Binary Exponentiation

ll luy_thua(int a, int b)
{
    if(b == 0)
    {
        return 1;
    }

    if(b == 1)
    {
        return (long long)a;
    }

    ll result = luy_thua(a, b/2) % MOD;
    // Nên gọi 1 hàm đệ quy, đừng gọi 2 hàm như: result = luy_thua(a, b/2) * luy_thua(a, b/2).
    // => Tốn dung lượng stack frame.
    // Thay vào đó lưu vào 1 biến rồi nhân với chính biến đó.
    result *= result;

    if(b % 2 == 0)
    {
        return result % MOD;
    }
    else 
    {
        return ( (result % MOD) * (a % MOD) ) % MOD;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << luy_thua(a, b) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}