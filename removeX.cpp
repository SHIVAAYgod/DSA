#include <iostream>
using namespace std;

int length(char input[])
{
    int len = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        len++;
    }

    return len;
}

void removeXhelper(char input[], int start)
{
    if (input[start] == '\0')
    {
        return;
    }

    removeXhelper(input, start + 1);

    if (input[start] == 'x')
    {
        int n = length(input);
        int i;
        for (i = start + 1; i < n; i++)
        {
            input[i - 1] = input[i];
        }
        input[i - 1] = '\0';
    }
}

void removeX(char input[])
{
    int len = length(input);
    removeXhelper(input, 0);
}

int main()
{
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
