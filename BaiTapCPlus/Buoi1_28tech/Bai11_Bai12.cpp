#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	//Bai 11
//	int n;
//	cout << "moi nhap n: ";
//	cin >> n;
//	long long S = (long long)pow(n,2)+n;
//	cout << S << endl; 
	
	//Bai 12
	long long n;
	cin >> n;
	if(n%2 == 0){
		cout << n/2 << endl;
	}else{
		cout << (n-1)/2 -n;
	}
	return 0;
}
