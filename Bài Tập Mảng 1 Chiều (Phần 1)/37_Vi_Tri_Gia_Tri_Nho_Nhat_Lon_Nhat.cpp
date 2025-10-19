#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm N phần tử. 1 <= N <= 1000 phần tử, 0 <= A[i] <= 10^6
// Nhiệm vụ của bạn là:
//     Tìm giá trị phần tử nhỏ nhất và lớn nhất, cũng như vị trí của chúng trong mảng. Nếu có nhiều giá trị nhỏ, lớn thì in 
//     ra tất cả các vị trí của chúng lần lượt từ trái qua phải (giá trị nhỏ) và phải qua trái (giá trị lớn).

void Vi_Tri_Gia_Tri_Nho_Nhat_Lon_Nhat(int n, int A[], int smallest, int largest)
{
    cout << smallest << endl;
    for(int i = 0; i <= n - 1; i++)
    {
        if(A[i] == smallest)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << largest << endl;
    for(int i = n - 1; i >= 0; i--)
    {
        if(A[i] == largest)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    int A[n];

    int smallest = 1000000;
    int largest = 0;
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
        if(A[i] <= smallest)
        {
            smallest = A[i];
        }

        if(A[i] >= largest)
        {
            largest = A[i];
        }
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    Vi_Tri_Gia_Tri_Nho_Nhat_Lon_Nhat(n, A, smallest, largest);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}