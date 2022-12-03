#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin >> t;
	while(t--){
	    long long int n;
	    cin >> n;
	    string a,b;
	    cin >> a >> b;
	    long long int count1=0,count2=0;
	    for (int i = 0; i < n; i++) {
	        if(a[i]=='1'){
	            count1++;
	        }
	    }
	        	    for (int i = 0; i < n; i++) {
	        if(b[i]=='1'){
	            count2++;
	        }
	        	    }
	        	    long long int d = abs(count1-count2);
	        	    if(d%2==0){
	        	        cout << '1' << endl;
	        	    } else{
	        	         cout << '0' << endl;
	        	    }
	}
	return 0;
}