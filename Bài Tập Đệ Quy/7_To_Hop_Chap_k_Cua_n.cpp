#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Tính tổ hợp chập k của n bằng đệ quy

// Tổng cộng có 4 trường hợp dừng
// Tính công thức truy hồi bằng công thức pascal: nCk = (n-1)Ck + (n-1)C(k-1)

int nCk(int n, int k)
{
    if(k == 0 || k == n)
    {
        return 1;
    }

    if(k == 1 || k == n - 1)
    {
        return n;
    }

    // Duy trì k nhỏ nhất có thể
    if(k > n - k)
    {
        k = n - k;
    }

    return nCk(n-1, k-1) + nCk(n-1,k);
}

int main()
{
    int n, k;
    cin >> n >> k;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << nCk(n, k) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}