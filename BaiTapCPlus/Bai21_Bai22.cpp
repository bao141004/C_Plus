#include <iostream>
#include <math.h>

using namespace std;

int main(){
	//Bai 21
//	char check ; cin >> check;
//	if(check >= 48 && check <=57){
//		cout<< "YES";
//	}else{
//		cout<<"NO";
//	}
	//Bai 22
	char check ; cin >> check;
	if(check >= 65 && check <=90){
		check = check +32;
		cout<< check;
	}else{
		cout<<check;
	}
	return 0;
} 
