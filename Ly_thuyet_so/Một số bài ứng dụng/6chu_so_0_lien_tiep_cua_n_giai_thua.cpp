#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll bac_cua_thua_so_nguyen_to_trong_N_giai_thua(ll n, int p)
{
    ll so_luong = 0;

    if(n < p)
    {
        return 0;
    }

    while(n > 1)
    {
        so_luong += ((n/p) % 1000000007);
        so_luong %= 1000000007;
        n /= p;
    }
    return so_luong;
}

// Chữ số 0 của một số được tạo bởi 2 số nguyên tố là số 2 và số 5.
// VD: 10! có tám số 2 và hai số 5 => có 2 cặp => kết quả của 10! chắc chắn có 2 chữ số 0

// Đáng lẽ, chúng ta xét cả hai số lượng số 2 và số 5 để ra được cặp tạo thành bao nhiêu số lượng chữ số 0. 
// Nhưng vì, số lượng số 2 trong một số luôn nhiều hơn số lượng số 5, nên chúng ta chỉ xét số lượng số 5 để quyết
// định một số có bao nhiêu số lượng chữ số 0.

ll chu_so_0_lien_tiep_cua_n_giai_thua(ll n)
{
    ll so_luong_chu_so_5 = bac_cua_thua_so_nguyen_to_trong_N_giai_thua(n, 5);

    return so_luong_chu_so_5;
}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << chu_so_0_lien_tiep_cua_n_giai_thua(n) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}