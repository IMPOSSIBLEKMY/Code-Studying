#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho một bảng số có N dòng và M cột, 1 <= N, M <= 1000. Các phần tử trong vector là số int.
// Dòng 1 là N và M.
// N dòng tiếp theo mỗi dòng là M số

// Nhiệm vụ của bạn là:
//    Lưu bảng số này vào một vector các vector dạng <vector>, trong đó mỗi hàng của bảng số bạn lưu vào 1 vector.
//    Hãy lật ngược từng dòng của bảng số sau đó in ra màn hình.
//    Bạn phải cài đặt theo khuôn mẫu sau:
//    void nhap(vector<vector<int>> &v, int n, int m)
//    {  
//    }
//    
//    void xuat(vector<vector<int>> v, int n, int m)
//    {
//    }
//
//    void lat_nguoc(vector<vector<int>> &v, int n, int m)
//    {
//    }
//
//    int main()
//    {
//         int n, m; 
//         cin >> n >> m;  
//         vector<vector<int>> v;  
//         nhap(v, n, m); 
//         lat(v, n, m);  
//         xuat(v, n, m); 
//    }

//  VD:
//  5 5
//  7 5 6 1 6
//  7 4 2 3 9 
//  5 0 4 1 9 
//  2 0 1 5 4 
//  7 5 6 7 3 

//  =>   6 1 6 5 7 
//       9 3 2 4 7 
//       9 1 4 0 5 
//       4 5 1 0 2 
//       3 7 6 5 7 

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