#include <iostream>
#include<limits.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for (int j = 0; j < t; j++) {
	    /* code */
	    long long int n,m;
	    std::cin >> n >> m;
	    long long int ans1, ans2;
	    
	    if(m < 2*n){
	        std::cout << m << " " << m << std::endl;
	    } else if(m >= 2*n && m % n == 0){
	        std::cout << m << " " << n << std::endl;
	    } else{
	        long long int x = m / 2;
	        if(m >= 2*n){
	            x = 2*n;
	        }
	        int difference = INT_MIN;
	        for (int i = n; i < x; i++) {
	            /* code */
	            long long d = m / i;
	            long long int currentdiff = (i*d) - i;
	            if(currentdiff > difference){
	                ans1 = i;
	                ans2 = i*d;
	                difference = currentdiff;
	            }
	        }
	        std::cout << ans1 << " " << ans2 << std::endl;
	    }
	}
	return 0;
}
