// NUMERICAL PYRAMID
#include <iostream>
using namespace std;

/*
    1
   212
  32123
 4321234
543212345
*/
int p1(int N)
{
     for (int i = 1; i <= N; i++)
    {
        int j;
        for (j = 1; j <= (N - i); j++)
        {
            cout << " ";
        }
        int k = i;
        for (; j <= N; j++)
        {
            cout << k--;
        }
        k = 2;
        for (; j <= N + i - 1; j++)
        {
            cout << k++;
        }
        cout << endl;
    }
    return 0;
}

/*
    1
   232
  34543
 4567654
567898765
*/
int p2(int N)
{
    int k = 0, count = 0, count1 = 0;
   for (int i = 1; i <= N; ++i) {
      for (int space = 1; space <= N - i; ++space) {
         cout << " ";
         ++count;
      }
      while (k != 2 * i - 1) {
         if (count <= N - 1) {
            cout << i + k;
            ++count;
         } else {
            ++count1;
            cout << (i + k - 2 * count1);
         }
         ++k;
      }
      count1 = count = k = 0;
    cout << endl;
   }
   return 0;
}

int main()
{
    int n;
    cout << "Enter the rows:";
    cin >> n;
    p1(n);
    cout << endl;
    p2(n);
    cout << endl;
    return 0;
}