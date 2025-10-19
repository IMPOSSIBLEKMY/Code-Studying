#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm N phần tử. 1 <= N <= 10^6 phần tử, 0 <= A[i] <= 10^6
// Nhiệm vụ của bạn là:
//     Tìm 1 dãy con dài nhất sao cho nó có các phần tử liên tiếp trong mảng đều là số nguyên tố. In ra độ dài và 
//     các phần tử của dãy con.
//     Nếu nhiều dãy có cùng độ dài dài nhất, thì cho ra dãy có tổng lớn nhất.
//     Nếu nhiều dãy có cùng độ dài dài nhất, có cùng tổng, thì lấy cái dãy đầu tiên thấy được.
//     Nếu không tìm được thì in ra NOT FOUND.

// VD: A[10] = {3, 1, 1, 11, 7, 13, 5, 0, 10, 5} 
// => Độ dài dãy con dài nhất thỏa đề là 4, gồm: 11 7 13 5

bool so_nguyen_to(int n)
{
    if(n <= 1)
    {
        return false;
    }

    if(n == 2 || n == 3)
    {
        return true;
    }

    if(n % 2 == 0)
    {
        return false;
    }

    if(n % 3 == 0)
    {
        return false;
    }

    for(int i = 5; i <= n / i; i += 6)
    {
        if(n % i == 0 || n % (i+2) == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    int A[n];

    int d = 0;
    int max_d = 0;

    int sum = 0;
    int max_sum = 0;

    int index = -1;

    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];

        if(so_nguyen_to(A[i]) == true)
        {
            d++;
            sum += A[i];
        }
        else 
        {
            if(d > max_d)
            {
                max_d = d;
                max_sum = sum;

                index = i - d;
            }

            if(d == max_d)
            {
                if(sum > max_sum)
                {
                    max_sum = sum;

                    index = i - d;
                }
            }

            d = 0;
            sum = 0;
        }

        if(i == n - 1)
        {
            if(d > max_d)
            {
                max_d = d;
                max_sum = sum;

                index = i - d + 1;
            }

            if(d == max_d)
            {
                if(sum > max_sum)
                {
                    max_sum = sum;

                    index = i - d + 1;
                }
            }

            d = 0;
            sum = 0;
        }
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    if(max_d == 0)
    {
        cout << "NOT FOUND" << endl;
    }
    else 
    {
        cout << max_d << endl;
        for(int i = index; i <= index + max_d - 1; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}