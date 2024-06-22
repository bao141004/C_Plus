#include <iostream>
#include <math.h>

using namespace std;

int main(){
	//Bai 23
//	char check ; cin >> check;
//	if(check >=97 && check <=122){
//		check = check -32;
//		cout<<check;
//	}else{
//		cout<<check;
//	}
	//Bai 24
	char check ; cin >> check;
	if(check >= 65 && check <90){
		check = check +33;
		cout<< check;
	}else if(check == 90){
		check = check + 7;
		cout<<check;
	}else if(check >=97 && check <=122){
		check = check +1;
		cout<<check;
	}else{
		cout<< "INVALID";
	}
	return 0;
}
