#include <iostream>
using namespace std;

int main() {
// bai4
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	int tmp;
	for (int i=0; i<n; i++ ) {
		for (int j=i+1; j<n; j++) {
			if (a[i]>a[j]) {
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;		
			}
	}
}
	for (int i=0; i<n; i++) {
		cout << a[i] << " ";
	}
return 0;
}
