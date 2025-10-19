#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 1000 phần tử, 0 <= A[i], X <= 10^3 
// Nhiệm vụ của bạn là:
//      Có bao nhiêu cặp A[i], A[j] với i khác j, sao cho tổng cặp đó bằng số X.

// VD: A[5] = {1, 2, 3, 1, 2}   X = 3
// => Có 4 cặp tổng bằng X

// Cách 1:
int tong_hai_so_1(int n, int X, int A[])
{
    int count = 0;

    for(int i = 0; i <= n - 1; i++)
    {
        for(int j = i + 1; j <= n - 1; j++)
        {
            if(A[i] + A[j] == X)
            {
                count++;
            }
        }
    }

    return count;
}

// Cách 2 (dùng mảng đánh dấu - dành cho số dương):
int tong_hai_so_2(int n, int X, int N[])
{
    int count = 0;
    for(int x = 0; x <= X - x; x++)
    {
        if(x != X - x)
        {
            if(N[x] != 0 && N[X - x] != 0)
            {
                // Số cách chọn 2 phần tử khác vị trí, khác giá trị và 2 phần tử đó cộng lại ra X.
                // Tích của các cách chọn số thứ nhất, các cách chọn số thứ hai.
                count += N[x] * N[X - x];
            }
        }
        else 
        {
            if(N[x] > 2)
            {
                // Số cách chọn 2 phần tử khác vị trí, cùng giá trị và 2 phần tử đó cộng lại ra X.
                // Tổ hợp chập 2 của n
                count += n*(n - 1) / 2;
            }
        }
    }

    return count;
}

int main()
{
    int n, X;
    cin >> n >> X;

    int A[n];
    // mảng N dùng để chứa số lần xuất hiện của các số tự nhiên từ 0 đến 10000. Sô lần xuất hiện các số đó bằng 0 lúc ban đầu.
    int N[10001] = {0};

    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
        // Nhập số gì vào là sẽ đếm ngay số đó. Nhập 3 thì mảng A có chứa 1 số 3. Nhập 3 lần nữa thì mảng A lúc này có 2 số 3. 
        N[A[i]]++; 
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    //cout << tong_hai_so_1(n, X, A) << endl;

    cout << tong_hai_so_2(n, X, N) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}