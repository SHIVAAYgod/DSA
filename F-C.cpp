// Given three values - Start Fahrenheit Value (S),
// End Fahrenheit value (E) and Step Size (W),
// you need to convert all Fahrenheit values from Start to End at the gap of W,
// into their corresponding Celsius values and print the table.
// #include <iostream>
// using namespace std;

// int main()
// {
//     int S, E, W, C;
//     cin >> S >> E >> W;
//     while (S <= E)
//     {

//         C = 5 * (S - 32) / 9;

//         cout << S << "\t" << C << endl;
//         S = S + W;
//     }
// }

#include <iostream>
using namespace std;

void printTable(int x, int y, int z)
{
    int C;
    while (x <= y)
    {
        C = 5 * (x - 32) / 9;

        cout << x << "\t" << C << endl;
        x = x + z;
    }
} 


int main()
{
    int S, E, W, B;
    cin >> S >> E >> W;
    printTable(S, E, W);
}