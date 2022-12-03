#include <iostream>
using namespace std;

int lengthChar(char arr[])
{
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] != '\0')
        {
            count++;
        }
        
    }
    return count;
}

int main()
{
    char arr[10];

    cout << "Enter your name: " << endl;
    cin >> arr;

    cout << "The name you entered is: " << arr;
    cout << endl;

    cout << "The length of the string is: " << lengthChar(arr);
    cout << endl;

    return 0;
}