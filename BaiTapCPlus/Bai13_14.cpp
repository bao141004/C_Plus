#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	//Bai 13
//	int a,b;
//	cin >> a >>b;
//	int res = (a/b)*b;
//	cout<<res<<endl;
	//Bai 14
	int a , b;
	cin >> a>> b;
	int du = a%b;
	if(du == 0){
		cout << a;
	}else{
		cout << a +(b-du);
	}
	return 0;
}
