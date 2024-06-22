#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
	//Bai 27
//	int n ; cin>>n;
//	
//	int nam = n / 365;
//	n = n % 365;
//	int tuan = n / 7;
//	int ngay = n % 7;
//	cout << nam << " " << tuan << " " << ngay << endl;
	
	//Bai28
	int a , b ,c ;
	cin >>a>>b>>c;
	if(a==0){
		if(b != 0){
			double x = -c/b; //tinh nghiem don
			cout<< fixed << setprecision(2)<<x<<endl;
		}else{
			if(c == 0) {
				cout <<"INF"; // a=0,b=0,c=0 vo so nghiem
			}else{
				cout<<"NO"; // vo nghiem
			}
		}
	} else{
		 double delta = b * b - 4 * a * c;
        if (delta > 0) { // tinh 2 nghiem phan biet delta >0
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
           	cout << fixed << setprecision(2) << x1 << " " << x2 << endl;
        } else if (delta == 0) {
            double x = -b / (2 * a); // nghiem kep 
            cout << fixed << setprecision(2) << x << endl;
        } else {
            cout << "NO" << endl; // vo nghiem
        }
	}
	return 0;
}
