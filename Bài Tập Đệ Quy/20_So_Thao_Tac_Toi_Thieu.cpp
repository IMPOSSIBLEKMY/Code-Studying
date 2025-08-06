#include <bits/stdc++.h>
#include <iomanip>
#include <iostream>

#define ll long long

using namespace std;

// Số thao tác tối thiểu để cho n về 1 bằng đệ quy. Ba thao tác cơ bản để cho n về 1 là: chia cho 2 nếu chia được cho 2. 
// Chia cho 3 nếu chia được cho 3. Trừ n cho 1 đơn vị.

// Ta nên xếp thứ tự thao tác theo nhỏ dần: chia cho 3, chia cho 2, trừ 1 đơn vị
// Khúc cuối không tính +1 vào số thao tác

int thao_tac(ll n)
{
    if(n == 1)
    {
        // không tính +1
        return 0;
    }

    /* Tư duy chỉ áp dụng cho bài trên thôi:

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

    *Tư duy trên chỉ đúng cho bài chia 3, chia 2 hoặc -1. Chứ không áp dụng cho mọi bài.
    Chúng ta phải kiểm tra 3 trường hợp thao tác cùng 1 lúc. Không như tư duy trên, chọn 1 trong 3.
    
    Có nhiều cách ra 1, nhưng có vài cách sử dụng ít thao tác nhất. Truy hết các cách rồi mới kết luận.
    Giống như cây rẽ nhánh, so sánh trong 1 tầng có cách nào ít thao tác nhất, chọn cách đó. 
    Các cách bằng nhau thì chọn 1 trong các cách.
    */
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