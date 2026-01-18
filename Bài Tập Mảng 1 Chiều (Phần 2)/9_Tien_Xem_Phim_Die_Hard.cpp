#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng A[] gồm N phần tử, 1 <= N <= 10^6, Mỗi phần tử là một người mang theo tiền mệnh giá 25 hay 50 hay 100 đồng.
// Vé xem phim "Die Hard" là 25 đồng một vé. Bạn là người bán vé và trả tiền thừa cho những người mua.
// Nhiệm vụ của bạn là:
//     Hãy kiểm tra nếu bạn có thể trả tiền thừa hết cho tất cả người mua đang xếp hàng theo thứ tự mảng.
//     Giả sử ban đầu bạn có 0 đông.
//     Nếu được thì in ra "YES", còn không thì "NO".

// VD: A[5] = 25 25 25 50 50
//     => YES

// VD: A[2] = 50 25
//     => NO

int main()
{
    int n;
    cin >> n;
    int A[n];

    bool check = true;
    int tien_cua_hang = 0;

    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];

        if(A[i] == 25)
        {
            tien_cua_hang += 25;
        }
        else if(A[i] - 25 > tien_cua_hang)
        {
            check = false;
        }
        else
        {
            tien_cua_hang -= A[i] - 25;
        }
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    if(check == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}