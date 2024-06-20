#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	//Bai 9
//	int n;
//	cin >>n;
//	long long S = ((long long) n*(n+1)*(2*n+1))/6;
//	cout << S << endl;
	//Bai 10 
	int n ;
	cin >> n;
	float S = 1-(1/((float)n+1));
	cout << fixed << setprecision(2)<< S <<endl; 
	return 0;


}
