#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std ;

int main() {
	int month;
	cin>>month;
	switch (month) {
	 	case 1: case 3 : case 5: case 7 : case 8: case 10: case 12:
	 		cout<< "31";
	 		break;
	 	case 2: 
	 		cout<< "28";
	 		break;
	 	case 4: case 6: case 9 : case 11:
	 		cout<<"30";
	 		break;
	   default:
	   	cout<<"du lieu khong hop le !!";
	   	break;
}
	return 0;
}
