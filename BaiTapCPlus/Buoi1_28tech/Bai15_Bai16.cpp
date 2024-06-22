#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	//Bai 15
//	int n;
//	cin >> n;
//	if(n % 3 == 0 && n % 5 ==0){
//		cout << 1;
//	}else{
//		cout << 0;
//	}
	//Bai 16
	int nam;
	cin >> nam;
	if(nam % 400 == 0){
		cout<< "day la nam nhuan";
	} else if(nam % 4 ==0 && nam % 100 != 0){
		cout <<"day la nam nhuan";
	}else{
		cout<<"khong phai nam nhuan";
	}
	return 0;
}
