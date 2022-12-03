/*
Given a decimal number (integer N),
convert it into binary and print.
The binary number should be in the
form of an integer.
*/
#include <iostream>
#include <cmath>
using namespace std;
 
// function to convert decimal to binary
void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];
 
    // counter for binary array
    int i = 0;
    while (n > 0) 
    {
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
      {  
          cout << binaryNum[j];
      }

      cout << endl;

}
 
// Driver program to test above function
int main()
{
    int n;
    cin >> n;
    decToBinary(n);
    return 0;
}

// int main() {
//   int decimal, binary = 0, remainder, product = 1;
//   cin >> decimal;
//   while (decimal != 0) {
//     remainder = decimal % 2;
//     binary = binary + (remainder * product);
//     decimal = decimal / 2;
//     product = product * 10;
//   }
//   cout << "The number in the binary form is: " << binary << endl;
//   return 0;
// }
 
// convert decimal to binary

// long long convert(int);

// int main() 
// {
//   int n, bin;
//   cin >> n;
//   bin = convert(n);
//   cout << bin << endl ;
//   return 0;
// }

// long long convert(int n) 
// {
//   long long bin = 0;
//   int rem, i = 1;

//   while (n!=0) 
//   {
//     rem = n % 2;
//     n /= 2;
//     bin += rem * i;
//     i *= 10;
//   }

//   return bin;
// }