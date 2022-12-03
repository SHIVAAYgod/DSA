// TRIANGLE PATTERN
#include <iostream>
using namespace std;

/* 1
   2 3
   3 4 5
   4 5 6 7  */
// int p1(int N)
// {
//     int i, j, k;
//     i = 1;
//     while (i <= N)
//     {
//         j = 1;
//         k = i;
//         while (j <= i)
//         {
//             cout << k;
//             j = j + 1;
//             k = k + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }
int p1(int N)
{
    for (int i = 1; i <= N; i++)
    {
        int k = i;
        for (int j = 1; j <= i; j++)
        {
            cout << k;
            k++;
        }

        cout << endl;
    }

    return 0;
}

/*
  1
  12
  123
  1234
*/
int p2(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}

/*
  1
  2 3
  4 5 6
  7 8 9 10
*/
int p3(int N)
{
    int k = 1;
    for (int i = 1; i <= N; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << k;
            k++;
        }

        cout << endl;
    }

    return 0;
}

/*
 *
 **
 ***
 ****
 */

int p4(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

/*
  1
  22
  333
  4444
*/
int p5(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }

        cout << endl;
    }

    return 0;
}

/*
  1
  21
  321
  4321
*/
int p6(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i - j + 1;
        }

        cout << endl;
    }

    return 0;
}

/*
    1
   12
  123
 1234
12345
*/
int p7(int N)
{
    int i = 1;
    while (i <= N)
    {
        int j = 1;
        int k = i;
        // for spacing
        while (k < N)
        {
            cout << " ";
            k++;
        }

        // For Pattern printing
        while (j <= i)
        {
            cout << j;
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}

/*
55555
4444
333
22
1
*/
int p8(int N)
{
   for (int i = N; i >= 1; --i) {
      for (int j = 1; j <= i; ++j) {
         cout << i;
      }
      cout << endl;
   }
   return 0;
}


    int main()
    {
        int n;
        cout << "Enter  the number of rows: " << endl;
        cin >> n;
        p1(n);
        cout << endl;
        p2(n);
        cout << endl;
        p3(n);
        cout << endl;
        p4(n);
        cout << endl;
        p5(n);
        cout << endl;
        p6(n);
        cout << endl;
        p7(n);
        cout << endl;
        p8(n);
        cout << endl;
        return 0;
    }
