#include <iostream>
#include <strings.h>
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

void helper(char str[], int start){

    if (str[start] == '\0' || str[start + 1] == '\0') {
        return;
    }
 
    helper(str, start + 1);
 
    if (str[start] == 'p' && str[start + 1] == 'i') {
 
        for (int i = strlen(str); i >= start + 2; i--) {
            str[i + 2] = str[i];
        }
 
        str[start] = '3';
        str[start + 1] = '.';
        str[start + 2] = '1';
        str[start + 3] = '4';
    }
}

void replacePi(char input[]) {
    int n = length(input);
    helper(input, 0);
}


int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}