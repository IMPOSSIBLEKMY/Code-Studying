#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho nhiều dòng, mỗi dòng có nhiều ký tự (không quá 1 triệu kí tự), các ký tự là 
// chữ in hoa, in thường, số cách nhau 1 dấu cách.

// Nhiệm vụ của bạn là:
//    Lưu các ký tự này vào vector.
//    Những ký tự là in hoa thì đổi thành in thường, in thường thì đổi thành in hoa, chữ số thì giữ nguyên 
//    và in ra màn hình.
//    Bạn phải cài đặt theo khuôn mẫu sau:
//    vector<char> nhap()
//    {  
//    }
//    
//    vector<char> thaydoi(vector<char>)
//    {
//    }
//
//    void in(vector<char>)
//    {
//    }
//
//    int main()
//    {
//         vector<char> v = nhap(); 
//         vector<char> res = thaydoi(v);
//         in(res); 
//    }

//  VD:
//  D
//  W D 4 8 
//  w u w 
//  2 
//  3 A e 3  
//  A u
//  2 e
//  A W W 

//  =>    d w d 4 8 W U W 2 3 a E 3 a U 2 E a w w 

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