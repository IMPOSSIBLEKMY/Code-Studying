#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng A[] gồm N phần tử, 1 <= N <= 10^6. 1 <= A[i] <= 10^9
// Nhiệm vụ của bạn là:
//     Hãy thiết lập các kĩ thuật sắp xếp từ nhỏ đến lớn như Selection Sort, Bubble Sort, Insertion Sort, 
// 	   Counting Sort, Merge Sort, Quick Sort.

// VD: A[10] = 1 2 3 9 7 4 8 6 10 5
//     => 9 7 5 3 1 2 4 6 8 10

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Sắp xếp chọn (Selection Sort)
// Chọn số nhỏ nhất trong các phần tử đứng sau còn lại để thế vào 1 phần tử phía trước
// Phần chọn sẽ thu hẹp dần (n - 1 lần)
void sap_xep_chon(int A[], int n)
{
    for(int i = 0; i <= n - 2; i++)
    {
        int index = i;

        for(int j = i + 1; j <= n - 1; j++)
        {
            if(A[i] > A[j])
            {
                index = j;
            }
        }

        swap(A[i], A[index]);
    }
}

// Sắp xếp nổi bọt (Bubble Sort)
// Dời số lớn hơn sang trái khi so sánh giữa 2 số liên tiếp trong dãy (số lớn nhất sẽ ở cuối dãy)
// Cần n - 1 lần thực hiện
void sap_xep_noi_bot(int A[], int n)
{
    // Số bước từ 1 đến n - 1
    for(int i = 1; i <= n - 1; i++)
    {
        for(int j = 0; j <= n - 1 - i; j++)
        {
            if(A[j] > A[j + 1])
            {
                swap(A[j], A[j + 1]);
            }
        }
    }
}

// Sắp xếp chèn (Insertion Sort)
// Thay thế số nhỏ nhất cho phần tử đầu dãy và dời các số kế bên nó lên trên dãy
void sap_xep_chen(int A[], int n)
{
    for(int i = 1; i <= n - 1; i++)
    {
        int value = A[i];
        int j = i - 1;

        while(j >= 0 && value < A[j])
        {
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = value;
    }
}

// Sắp xếp đếm phân phối (Counting Sort)
// Điểm yếu: Giới hạn chỉ nằm trong số nhỏ hơn 10^7 + 1 do dùng mảng đánh dấu.
// 			 Không được có số âm để sắp xếp do dùng mảng đánh dấu.
int cnt[10000001] = {0};

void sap_xep_dem_phan_phoi(int A[], int n)
{
    int min = 10000001;
    int max = 0;
    for(int i = 0; i <= n - 1; i++)
    {
        if(max < A[i])
        {
            max = A[i];
        }

        if(min > A[i])
        {
            min = A[i];
        }

        cnt[A[i]]++;
    }

    int j = 0;
    for(int i = min; i <= max; i++)
    {
        while(cnt[i] > 0 && j <= n - 1)
        {
            A[j] = i;

            cnt[i]--;
            j++;
        }
    }
}

// Sắp xếp trộn (Merge Sort)
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
    if(l >= r)
    {
        return;
    }

    int m = (l + r) / 2; // chia

    merge_sort_conquer_small_to_large(l, m, A); // trị (conquer)

    merge_sort_conquer_small_to_large(m + 1, r, A); // trị (conquer)

    merge_small_to_large(l, m, r, A); // trộn
}

// Sắp xếp phân hoạch (Quick Sort)
// Chọn giá trị pivot là phần tử cuối array.
// Sắp xếp các giá trị nhỏ hơn pivot về phía trái và lớn hơn pivot về phía phải của array.
// Chọn vị trí để tách array thành 2 array nhỏ hơn.
// Tiếp tục chọn giá trị pivot mới ở 2 array con.

int partition(int A[], int l, int r)
{
    int i = l + 1, j = r;

    while(i <= j)
    {
        if(A[i] >= A[l] && A[j] <= A[l])
        {
            swap(A[i], A[j]);
            i++;
            j--;
        }

        if(A[i] < A[l] && i <= j)
        {
            i++;
        }

        if(A[j] > A[l] && i <= j)
        {
            j--;
        }
    }

    swap(A[j], A[l]);

    return j;
}

void sap_xep_partition(int A[], int l, int r)
{
    if(l >= r)
    {
        return;
    }

    int p = partition(A, l, r);

    sap_xep_partition(A, l, p - 1);

    sap_xep_partition(A, p + 1, r);
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

    sap_xep_partition(A, 0, n - 1);

    for(int i = 0; i <= n - 1; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}