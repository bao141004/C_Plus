#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	//Bai 3
//	int a, b, c;
//	cin >> a>> b>>c;
//	int S = a*(b+c) + b*(a+c);
//	cout << "ket qua la: ";
//	cout << S << endl;	

	
	//Bai 4
	int a, b ;
	cin >> a >>b;
	int tong = a+b ;
	int hieu = a-b;
	long long tich = (long long)a*b;
	float thuong = (float)a/b;
	cout << tong << " " << hieu << " " << tich << " " <<fixed << setprecision(2)<< thuong << endl; 
		return 0;
}


