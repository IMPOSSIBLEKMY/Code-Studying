#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Dòng 1 là T: số test case 
// T dòng tiếp theo mỗi dòng là số nguyên N.
// 1 <= T <= 1000. 0 <= N <= 10^18.
// Các chữ số trong hệ thập lục phân:
// 		Từ 0 đến 9 được giữ nguyên.
// 		Từ 10 đến 15 được ký hiệu lần lượt là 'a', 'b', 'c', 'd', 'e', 'f'.

// Nhiệm vụ của bạn là:
//    In ra dạng thập lục phân (cơ số 16) của N. 
// 	  Bạn cần in ra kết quả và triển khai code theo mẫu sau:
//    vector<char> convert_number(long long n)
//    {  
//    }
//
//    int main()
//    {
//         int t;
//         cin>>t;
//         while(t--)
//         {
//              long long n;
//              cin >> n;
//              vector<char> res = convert_number(n);
//              for(char x : res)
//              {
//                  cout << x;
//              }
//              cout << endl;
//         } 
//         return 0;
//    }

//  VD:
//  5
//  61
//  16
//  16
//  13
//  92

//  => 3d
//     10
//     10
//     d
//     5c

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