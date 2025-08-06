#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Tính Fibonacci bắt đầu từ 0 bằng đệ quy

// Số lượng hàm đệ quy fibonacci được gọi tăng theo dãy Leonardo khi cho n tương ứng vào: 
//      fibonacci(1) gọi được 1 lần hàm đệ quy
//      fibonacci(2) gọi được 1 lần hàm đệ quy
//      fibonacci(3) gọi được 3 lần hàm đệ quy 3 = (1 + 1) + 1
//      fibonacci(4) gọi được 5 lần hàm đệ quy 5 = (3 + 1) + 1
//      fibonacci(5) gọi được 9 lần hàm đệ quy 9 = (5 + 3) + 1

// Do số lượng hàm đệ quy fibonacci tăng rất nhanh nên hàm đệ quy fibonacci chỉ tính được một số n nhỏ nhất định
// Time complexity là O(2^n)

int fibonacci(int n)
{
    if(n == 1)
    {
        return 0;
    }
    
    if(n == 2)
    {
        return 1;
    }

    if(n <= 93)
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
    else 
    {
        return -1;
    }

}

int main()
{
    int n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << fibonacci(n) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}