#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 0 <= N <= 1000 phần tử, nhiệm vụ của bạn là:
//      Đếm xem trong mảng có bao nhiêu số chẵn, bao nhiêu số lẻ.
//      Tính tổng các phần tử là số chẵn, tổng các phần tử là số lẻ.

// Khi khai báo A[n] và n là giá trị chuẩn bị nhập vào:
//      Vài trình biên dịch hiển thị lỗi không xác định n, vì tưởng n giá trị rác. 
//      Một số trình biên dịch thông minh hơn thì không hiển thị lỗi đó. Do nó biết n sẽ nhập vào giá trị dương.
//      Còn nhập sai thành số âm hoặc không nhập thì n ra giá trị rác.

// Nếu không nhập từng giá trị phần tử trong mảng, trình biên dịch sẽ gán từng giá trị rác hoặc là giá trị 0.
// Nếu nhập quá số lượng phần tử thì sẽ ra lỗi segmentation fault

// Kiểu dữ liệu của mảng chính là kiểu dữ liệu các phần tử trong mảng. 
// Nếu nhập sai kiểu dữ liệu các phần tử thì bị ép kiểu các phần tử đó.
//      VD: int a[5] = {1, 2, 3, 4, 5}; 
//          => 1, 2, 3, 4, 5 đều thuộc int.

//          double a[4] = {1.5, 2.3, 3.76, 5}; 
//          => 5 sẽ bị ép thành 5.0. Và các phần tử đều thuộc double.

//          int a[3] = {1.5, 'A', 5}; 
//          => 1.5 sẽ bị ép thành 1. 'A' sẽ bị ép thành 65 theo ASCII. Và các phần tử đều thuộc int.

void dem_chan_le_va_tong_chan_le(int n, int A[])
{
    int chan = 0, le = 0;
    ll tong_chan = 0, tong_le = 0;

    int i = 0;
    while(i <= n - 1)
    {
        if(A[i] % 2 == 0)
        {
            chan++;
            tong_chan += A[i];
        }
        else 
        {
            le++;
            tong_le += A[i];
        }

        i++;
    }

    cout << chan << " " << le << endl;
    cout << tong_chan << " " << tong_le << endl;

    return;
}

int main()
{
    int n;
    cin >> n;
    int A[n];

    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    dem_chan_le_va_tong_chan_le(n, A);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}