#include <iostream>
using namespace std;


int main() {
	int m, n;
	cin >> m >> n;
	if (m<n) {
		for ( int i=m; i>0; i--) {
			if (m%i==0 && n%i==0) {
				cout << i;
				break;
			}
		}
	}
	else {
		for ( int i=n; i>0; i--) {
			if (m%i==0 && n%i==0) {
				cout << i;
				break;
			}
		}
	}
	return 0;
}
