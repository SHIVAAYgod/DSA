#include <iostream>
using namespace std;

void parenthesis_printing(int i, int j, int n, int* bracket, char& name)
{
    if (i == j)
    {
        cout << name++;
    }
    else
    {
        cout << "(";
        parenthesis_printing(i, *((bracket + i * n) + j), n, bracket, name);
        parenthesis_printing(*((bracket + i * n) + j) + 1, j, n, bracket, name);
        cout << ")";
    }
}
void matrix_order(int p[], int n)
{
    int m[n][n];
    int bracket[n][n];
    for (int i = 1; i < n; i++)
    {
        m[i][i] = 0;
    }
    for (int L = 2; L < n; L++)
    {
        for (int i = 1; i < n - L + 1; i++)
        {
            int j = i + L - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k <= j - 1; k++) 
            {
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j]) 
                {
                    m[i][j] = q;
                    bracket[i][j] = k;
                }
            }
        }
    }
    char name = 'A';
    cout<<m[1][n - 1]<<endl;
    parenthesis_printing(1, n - 1, n, (int*)bracket, name);
}
int main()
{
    int arr[] = {12,21,65,18,24,93,121,16,41,31,47,5,47,29,76,18,72,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    matrix_order(arr, n);
    return 0;
}
