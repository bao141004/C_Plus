#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	//Bai 29
//	double a, b;
//    cout << "Nhap a va b: ";
//    cin >> a >> b;
//
//    float start = ceil(min(a, b));
//    float end = floor(max(a, b));
//
//    if (start > end) {
//        cout << 0 << endl;
//    } else {
//        cout << end - start + 1 << endl;
//    }

	//Bai 30
	int a,b,c; cin>>a>>b>>c;
	if(a/b == c || b/c==a ||c/a==b){
		cout<<"/";
	}else{
		cout<<"NOSOL";
	} 
	return 0;
}


