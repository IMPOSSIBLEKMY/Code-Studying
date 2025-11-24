#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng A gồm N phần tử, 1 <= N <= 10000. A[i] là các chữ cái in thường.
// Các bạn sử dụng 1 vector rỗng để lưu pair, trong đó first của pair lưu kí tự, second thì lưu tần suất.
// Mỗi khi gặp 1 phần tử trong mảng A, bạn hãy duyệt vector đã có và kiểm tra xem kí tự này đã xuất hiện chưa.
// Nếu đã xuất hiện, bạn tăng second của nó lên. 
// Nếu chưa xuất hiện, bạn push_back một cặp pair mới vào vector, pair này sẽ lưu kí tự đang xét và tần suất là 1.

// Nhiệm vụ của bạn là:
//     In ra số lượng kí tự khác nhau trong mảng.
//     Đếm xem mỗi phần tử trong mảng A xuất hiện bao nhiêu lần. 
//     In kí tự và tần suất theo thứ tự xuất hiện trong mảng A.

//  VD:
//  11
//  e g e h j e c g g g d 

//  =>  6
//      e 3
//      g 4
//      h 1 
//      j 1
//      c 1
//      d 1

int main()
{
    int n;
    cin >> n;

    int A[n];
    int N[2] = {0};
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];

        A[i] %= 2;

        N[A[i]]++;
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << (long long)(N[0] * (N[0] - 1)) / 2 + (long long)(N[1] * (N[1] - 1)) / 2 << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}