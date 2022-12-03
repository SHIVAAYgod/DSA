// ALL TYPES OF SQUARE PATTERN
// star pattern
#include <iostream>
using namespace std;

/*
  ****
  ****
  ****
  ****
*/
int p4(int n)
{
    for (int i = 1; i <= n; i++)
    {
       for (int j = 1; j <= n; j++)
       {
           cout << "*";
       }
       
       cout << endl;
    }
    
    return 0;
}

/*  
4444
4444
4444
4444
*/
int p3(int n)
{
    for (int i = 1; i <= n; i++)
    {
       for (int j = 1; j <= n; j++)
       {
           cout << n;
       }
       
       cout << endl;
    }
    
    return 0;
}

/* 
   1 1 1 1
   2 2 2 2
   3 3 3 3
   4 4 4 4
*/
int p1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i;
        }
        
        cout << endl;
    }
    
    return 0;
}
/*  
 1 2 3 4
 1 2 3 4
 1 2 3 4
 1 2 3 4
 */
int p2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        
        cout << endl;
    }
    
    return 0;
}


/* 4 3 2 1
   4 3 2 1
   4 3 2 1
   4 3 2 1 
*/
int p5(int n)
{
    for (int i = 1; i <= n; i++)
    {
       for (int j = n; j >= 1; j--)
       {
           cout << j;
       }
       
       cout << endl;
    }
    
    return 0;
}
// int p5(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << n-j+1;
//         }

//         cout << endl;
//     }

//     return 0;
// }

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
    return 0;
}