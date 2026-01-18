#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng A[] gồm N phần tử, 1 <= N <= 10^6. 1 <= A[i] <= 10^9
// Nhiệm vụ của bạn là:
//     Sắp xếp các phần tử chẵn đứng sau tăng dần, phần tử lẻ đứng trước giảm dần. In ra.

// VD: A[10] = 1 2 3 9 7 4 8 6 10 5
//     => 9 7 5 3 1 2 4 6 8 10

void merge_large_to_small(int l, int m, int r, int A[])
{
    int index_arr_l, index_arr_r, index_arr_main;

    int n1 = m - l + 1;
    int left[n1];

    index_arr_l = 0, index_arr_main = l;
    while(index_arr_l <= n1 - 1 && index_arr_main <= m)
    {
        left[index_arr_l] = A[index_arr_main];
        index_arr_l++, index_arr_main++;
    }

    int n2 = r - (m + 1) + 1;
    int right[n2];

    index_arr_r = 0, index_arr_main = m + 1;
    while(index_arr_r <= n2 - 1 && index_arr_main <= r)
    {
        right[index_arr_r] = A[index_arr_main];
        index_arr_r++, index_arr_main++;
    }

    index_arr_l = 0, index_arr_r = 0, index_arr_main = l;
    while(index_arr_l <= n1 - 1 && index_arr_r <= n2 - 1)
    {
        if(left[index_arr_l] >= right[index_arr_r])
        {
            A[index_arr_main] = left[index_arr_l];
            index_arr_l++;
        }
        else
        {
            A[index_arr_main] = right[index_arr_r];
            index_arr_r++;
        }

        index_arr_main++;
    }

    while(index_arr_l <= n1 - 1 && index_arr_main <= r)
    {
        A[index_arr_main] = left[index_arr_l];
        index_arr_l++;
        index_arr_main++;
    }

    while(index_arr_r <= n2 - 1 && index_arr_main <= r)
    {
        A[index_arr_main] = right[index_arr_r];
        index_arr_r++;
        index_arr_main++;
    }
}

void merge_sort_conquer_large_to_small(int l, int r, int A[])
{
    if(l == r)
    {
        return;
    }

    int m = (l + r) / 2; // chia

    merge_sort_conquer_large_to_small(l, m, A); // trị

    merge_sort_conquer_large_to_small(m + 1, r, A); // trị

    merge_large_to_small(l, m, r, A); // trộn
}

void merge_small_to_large(int l, int m, int r, int A[])
{
    int index_arr_l, index_arr_r, index_arr_main;

    int n1 = m - l + 1;
    int left[n1];

    index_arr_l = 0, index_arr_main = l;
    while(index_arr_l <= n1 - 1 && index_arr_main <= m)
    {
        left[index_arr_l] = A[index_arr_main];
        index_arr_l++, index_arr_main++;
    }

    int n2 = r - (m + 1) + 1;
    int right[n2];

    index_arr_r = 0, index_arr_main = m + 1;
    while(index_arr_r <= n2 - 1 && index_arr_main <= r)
    {
        right[index_arr_r] = A[index_arr_main];
        index_arr_r++, index_arr_main++;
    }

    index_arr_l = 0, index_arr_r = 0, index_arr_main = l;
    while(index_arr_l <= n1 - 1 && index_arr_r <= n2 - 1)
    {
        if(left[index_arr_l] <= right[index_arr_r])
        {
            A[index_arr_main] = left[index_arr_l];
            index_arr_l++;
        }
        else
        {
            A[index_arr_main] = right[index_arr_r];
            index_arr_r++;
        }

        index_arr_main++;
    }

    while(index_arr_l <= n1 - 1 && index_arr_main <= r)
    {
        A[index_arr_main] = left[index_arr_l];
        index_arr_l++;
        index_arr_main++;
    }

    while(index_arr_r <= n2 - 1 && index_arr_main <= r)
    {
        A[index_arr_main] = right[index_arr_r];
        index_arr_r++;
        index_arr_main++;
    }
}

void merge_sort_conquer_small_to_large(int l, int r, int A[])
{
    if(l == r)
    {
        return;
    }

    int m = (l + r) / 2; // chia

    merge_sort_conquer_small_to_large(l, m, A); // trị

    merge_sort_conquer_small_to_large(m + 1, r, A); // trị

    merge_small_to_large(l, m, r, A); // trộn
}

int chan[1000000], le[1000000];

void sort(int n, int A[])
{
    int index_chan = 0, index_le = 0;
    for(int i = 0; i <= n - 1; i++)
    {
        if(A[i] % 2 == 0)
        {
            chan[index_chan] = A[i];
            index_chan++;
        }
        else
        {
            le[index_le] = A[i];
            index_le++;
        }
    }

    int n_le = index_le;
    if(n_le != 0)
    {
        merge_sort_conquer_large_to_small(0, n_le - 1, le);
    }

    for(int i = 0; i <= n_le - 1; i++)
    {
        cout << le[i] << " ";
    }
    
    int n_chan = index_chan;
    if(index_chan != 0)
    {
        merge_sort_conquer_small_to_large(0, n_chan - 1, chan);
    }

    for(int i = 0; i <= n_chan - 1; i++)
    {
        cout << chan[i] << " ";
    }

    cout << endl;
}

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

    sort(n, A);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}