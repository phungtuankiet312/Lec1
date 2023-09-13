#include <iostream>
using namespace std;

int main() {
	int n=5;
	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	int MIN, MAX, tmp;
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			if (a[i]>a[j]) {
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;		
			}
	}
}
	MIN=a[0], MAX=a[n-1];
	cout << MIN + MAX;	
	return 0;
}
