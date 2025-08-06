#include <bits/stdc++.h>
#include <iomanip>

#define ll long long

using namespace std;

// Tính S(n) = 1/1 + 1/2 + 1/3 + ... + 1/n bằng đệ quy, lấy kết quả 3 số sau dấu phẩy.

// double result = 123.45678
// - Nếu không kèm theo fixed, dùng setprecision(4):
//   Cho ra kết quả: 123.4

// - Nếu kèm theo fixed, dùng setprecision(4):
//   Cho ra kết quả: 123.4567

double tong_5(int n)
{
    if(n == 1)
    {
        return 1;
    }

    return 1/double(n) + tong_5(n-1);
}

int main()
{
    int n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << fixed << setprecision(3) << tong_5(n) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}