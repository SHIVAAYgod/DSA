#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    bool c;
	    int A, B, C;
	    cin >> A >> B >> C;
	    int x = min(A, B);
	    int y = min(B, C);
	    int z = min(C, A);
    if((A==B && C>=A) || (B==C && A>=C) || (C==A && B>=C))
        cout<<"YES" << endl;
    else
        cout<<"NO" << endl;
	}
	return 0;
}