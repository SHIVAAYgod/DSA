#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double geometricSum(int k) {
    // base case
    if (k == 0)
        return 1;
 
    // calculate the sum each time
    double ans = 1 / (double)pow(2, k) + geometricSum(k - 1);
 
    // return final answer
    return ans;
}
int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}

