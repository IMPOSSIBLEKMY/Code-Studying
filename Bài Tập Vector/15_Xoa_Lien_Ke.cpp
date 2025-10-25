#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho vector gồm N số, 1 <= N <= 1000. Các phần tử trong vector là số int.
// chữ in hoa, in thường, số cách nhau 1 dấu cách.

// Nhiệm vụ của bạn là:
//    Viết 1 hàm trả về 1 vector bằng cách xóa đi các phần tử đứng cạnh giống nhau,
//    và in ra màn hình.
//    Bạn phải cài đặt theo khuôn mẫu sau:
//    vector<int> unique_vector (vector<int> v)
//    {  
//    }
//    
//    vector<int> nhap()
//    {
//    }
//
//    void in(vector<int> v)
//    {
//    }
//
//    int main()
//    {
//         vector<int> v = nhap();
//         vector<char> res = unique_vector(v);
//         in(res); 
//    }

//  VD:
//  15
//  1 1 4 4 2 4 2 1 3 4 2 3 3 2 3

//  =>     1 4 2 4 2 1 3 4 2 3 2 3

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