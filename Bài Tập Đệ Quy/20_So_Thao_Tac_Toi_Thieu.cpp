#include <bits/stdc++.h>
#include <iomanip>
#include <iostream>

#define ll long long

using namespace std;

// Số thao tác tối thiểu để cho n về 1 bằng đệ quy. Ba thao tác cơ bản để cho n về 1 là: chia cho 2 nếu chia được cho 2. 
// Chia cho 3 nếu chia được cho 3. Trừ n cho 1 đơn vị.

// Khúc cuối không tính +1 vào số thao tác

int min(int a, int b)
{
    if(a > b)
    {
        return b;
    }
    else 
    {
        return a;
    }
}

int thao_tac(ll n)
{
    if(n == 1)
    {
        // không tính +1
        return 0;
    }

    /* Tư duy này sai.
    Nếu theo tư duy này, ta xếp thứ tự thao tác theo nhỏ dần: chia cho 3, chia cho 2, trừ 1 đơn vị

    if(n % 3 == 0)
    {
        return 1 + thao_tac(n/3);
    }
    else if(n % 2 == 0)
    {
        return 1 + thao_tac(n/2);
    }
    else 
    {
        return 1 + thao_tac(n - 1);
    }

    Giả sử số 11 thì chỉ cần 4 thao tác: 11-10-9-3-1. Không theo cái quy tắc xếp thứ tự thao tác theo nhỏ dần.

    Chúng ta phải kiểm tra 3 trường hợp thao tác cùng 1 lúc. Không như tư duy trên, chọn 1 trong 3.
    Có nhiều cách ra 1, nhưng có vài cách sử dụng ít thao tác nhất. Truy hết các cách rồi mới kết luận.
    Giống như cây rẽ nhánh: so sánh 3 nhánh trong 1 tầng, từ tầng dưới cùng lên. 
    => Có cách nào ít thao tác nhất, chọn cách đó. Các cách bằng nhau thì chọn 1 trong các cách.
    => Dùng hàm min.
    */

    int thao_tac_1 = 999, thao_tac_2 = 999, thao_tac_3 = 999;

    if(n % 3 == 0)
    {
        thao_tac_1 = 1 + thao_tac(n/3);
    }

    if(n % 2 == 0)
    {
        thao_tac_2 = 1 + thao_tac(n/2);
    }
    
    thao_tac_3 = 1 + thao_tac(n - 1);

    return min(thao_tac_1 , min(thao_tac_2, thao_tac_3));
}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << thao_tac(n) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}