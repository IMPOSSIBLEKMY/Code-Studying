#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Tính tổng S(n) = 1^2 + 2^2 + ... + n^2 bằng đệ quy

int tong_2(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else 
    {
        return n*n + tong_2(n-1);
    }
}

int main()
{
    int n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << tong_2(n) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}