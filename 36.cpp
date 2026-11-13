#include <iostream>
#include <cmath>
using namespace std;

bool laNguyenTo(int n){
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return false;
	return true;
}

int main(){
	const int N = 100;
	int dem = 0;
	
	cout << "Cac so nguyen to trong " << N << " so dau tien (1..100):" << endl;
	for (int i = 1; i <= N; i++){
		if (laNguyenTo(i)){
			cout << i << "  ";
			dem++;
		}
	}
	cout << endl << "Co " << dem << " so nguyen to." << endl;
	return 0;
}
