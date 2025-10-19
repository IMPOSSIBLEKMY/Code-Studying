#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm N phần tử. 1 <= N <= 1000 phần tử, A[i] là các chữ cái in thường hoặc là số.
// Nhiệm vụ của bạn là:
//     Kiểm tra các vị trí chẵn trong mảng. Ghép lại các chữ và số ở các vị trí chẵn đó thành "28tech" hoặc chữ ngược "hcet82".
//     Nếu không có thì in ra "NONE".

void t_e_TECH(int n, char A[])
{
    int count = 0;
    int count_rev = 0;

    for(int i = 0; i <= n - 1; i += 2)
    {
        switch(count)
        {
            case 0:
                if(A[i] == '2')
                {
                    count++;
                }
                break;
            case 1:
                if(A[i] == '8')
                {
                    count++;
                }
                break;
            case 2:
                if(A[i] == 't')
                {
                    count++;
                }
                break;
            case 3:
                if(A[i] == 'e')
                {
                    count++;
                }
                break;
            case 4:
                if(A[i] == 'c')
                {
                    count++;
                }
                break;
            case 5:
                if(A[i] == 'h')
                {
                    count++;
                    i = n - 1;
                }
                break;
        }

        switch(count_rev)
        {
            case 0:
                if(A[i] == 'h')
                {
                    count_rev++;
                }
                break;
            case 1:
                if(A[i] == 'c')
                {
                    count_rev++;
                }
                break;
            case 2:
                if(A[i] == 'e')
                {
                    count_rev++;
                }
                break;
            case 3:
                if(A[i] == 't')
                {
                    count_rev++;
                }
                break;
            case 4:
                if(A[i] == '8')
                {
                    count_rev++;
                }
                break;
            case 5:
                if(A[i] == '2')
                {
                    count_rev++;
                    i = n - 1;
                }
                break;
        }
    }

    if(count == 6)
    {
        cout << "28tech" << endl;
        return;
    }

    if(count_rev == 6)
    {
        cout << "hcet82" << endl;
        return;
    }

    cout << "NONE" << endl;
}

int main()
{
    int n;
    cin >> n;

    char A[n];
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    t_e_TECH(n, A);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}