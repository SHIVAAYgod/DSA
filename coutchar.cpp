#include <iostream>
using namespace std;
int main()
{
    char n;
    n = cin.get();
        int count_of_characters = 0;
                int count_of_spaces = 0;
                    int count_of_digits = 0;
    while (n != '$')
    {
        if (n == ' ' || n == '\n' || n == '\t')
        {
            count_of_spaces++;
        }
        else if (n >= '0' && n <= '9' )
        {
            count_of_digits++;
        }
        else
        {
            count_of_characters++;
        }

        n = cin.get();
    }

    cout << count_of_characters << " " << count_of_digits << " " << count_of_spaces << endl;
    return 0;
}