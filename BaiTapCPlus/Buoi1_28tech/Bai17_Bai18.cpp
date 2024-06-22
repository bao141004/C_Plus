#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	//Bai 17
//	int t,n; cin >>t>>n;
//	if(n <= 0 || t<1 || t>12){
//		cout << "INVALID";
//	}else if (t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 ||t == 12 ){
//		cout <<"31" << " " << n<< endl;
//	} else if (t==4||t == 6 ||t == 9 ||t == 11 ){
//		cout <<"30" << " " << n<< endl;
//	} else if(t== 2 ){
//		if((n %400 == 0) || ( n%4==0 && n%100 !=0)){
//			cout << "29" << " " << n<< endl;
//		} else{
//			cout<< "28" << " " << n<< endl;
//		}
//	return 0;
//	}

	//Bai 18
	char check ;
	cin >> check;
	if(check >=97 && check <=122){
		cout<<"YES";
	}else{
		cout<< "NO";
	}
}
