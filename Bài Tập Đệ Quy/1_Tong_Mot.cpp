#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Tính tổng S(n) = 1 + 2 + ... + n bằng đệ quy

// B1: Xác định bài toán con nhỏ nhất làm điểm dừng đệ quy
// B2: Tìm công thức truy hồi

// S(1) = 1 ---- điểm dừng đệ quy
// S(2) = 2 + S(1) = 2 + 1 = 3
// => S(n) = n + S(n - 1) ---- công thức truy hồi

// Số n càng lớn thì số lượng hàm đang gọi trong stack frame ("khung" chứa các hàm đang gọi) lớn dần:
// => Dẫn đến tình trạng stack overflow.

// Trong bài tập này, giá trị n dừng lại ở 43321 nếu hàm trả về int => Gọi 43321 hàm.
// Nếu đặt hàm trả về long long, giá trị n dừng lại ở 32493 => Gọi 32493 hàm:
// => Do hàm có dung lượng bộ nhớ khác nhau, hàm nào dung lượng bộ nhớ ít thì số lượng hàm đang gọi trong stack frame nhiều.

// => Hiện tượng stack overflow trong đệ quy xảy ra nhanh hơn hiện tượng tràn số trong vòng lặp.

int tong_1(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else 
    {
        return n + tong_1(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << tong_1(n) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}