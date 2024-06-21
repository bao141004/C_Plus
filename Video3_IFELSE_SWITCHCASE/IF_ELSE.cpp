#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

//abs(x) : tri tuyet doi
//	int x = -100;
//	int y = abs(x);
//	cout << y<< endl;
//pow(a, b) : tinh a^b : tra ve so double(thap phan)
//	int x = 2;
//	int y = 10;
//	int res = pow(2,10);
//	cout << res << endl; 
//sqrt(n) : tinh can bac 2 : tra ve so double
//	int x = 16;
//	int res = sqrt(x);
//	cout << res << endl;
//round(x) : lam tron so
//	float a = 2.5632;
//	int b = round(a);
//	cout << b<< endl;

//0:false
//#0 : true
//int n = 100; // neu n = 0 la false thi no se k chay cau lenh dong 29 
//if( n ){
//	cout << "n khac khong"; 
//}

int main(){
	int n ;
	cin >>n;
	if(n == 1 || n == 3 || n == 5 ||n == 7 ||n == 8 ||n == 10 ||n == 12) {
		cout<<"31";
	}else if(n == 2){
		cout<<"28";
	}else if(n == 4 || n == 6|| n == 9 || n == 11){
		cout<<"30";
	}else{
		cout<<"khong hop le";
	}
	return 0;
}
