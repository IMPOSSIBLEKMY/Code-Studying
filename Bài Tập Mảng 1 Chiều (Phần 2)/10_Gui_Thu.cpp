#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng A[] gồm N phần tử, 2 <= N <= 10^6, Mỗi phần tử là một thành phố khác nhau tại tọa độ x trên trục Ox.
// -10^9 <= x_i <= 10^9
// Không có thành phố nào trùng vị trí. Các thành phố xếp trong mảng theo thứ tự vị trí x trên Ox từ nhỏ dến lớn.
// Chi phí gửi thư từ thành phố này sang thành phố khác là khoảng cách giữa 2 thành phố.
// Nhiệm vụ của bạn là:
//     Hãy tính chi phí rẻ nhất và mắc nhất khi gửi thư của từng thành phố trong mảng.

// VD: A[4] = -5 -2 2 7
//     => 3 12
//        3 9
//        4 7
//        5 12

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

    cout << A[1] - A[0] << " ";
    cout << A[n - 1] - A[0] << endl;

    for(int i = 1; i <= n - 2; i++)
    {
        if(A[i] - A[i - 1] < A[i + 1] - A[i])
        {
            cout << A[i] - A[i - 1] << " ";
        }
        else
        {
            cout << A[i + 1] - A[i] << " ";
        }

        if(A[i] - A[0] < A[n - 1] - A[i])
        {
            cout << A[n - 1] - A[i] << " ";
        }
        else
        {
            cout << A[i] - A[0] << " ";
        }

        cout << endl;
    }

    cout << A[n - 1] - A[n - 2] << " ";
    cout << A[n - 1] - A[0] << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}