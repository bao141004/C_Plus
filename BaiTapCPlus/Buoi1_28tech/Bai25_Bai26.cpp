#include <iostream>
#include <math.h>

using namespace std;

int main(){
	//Bai 25
//	int a,b,c ; cin >>a>>b>>c;
//	if(a+b>c && a+c>b && b+c > a){
//		cout<<"YES";
//	} else{
//		cout<<"NO";
//	}
	//Bai 26
	int a ,b,c ; cin>> a>> b>>c;
	 if(a == b && a == c && b== c ){
	 	cout << "day la tam giac deu";
	 }else if(a == b || a==c){
	 	cout << "day la tam giac can";
	 }else if(a*a+b*b==c*c){
	 	cout<< "day la tam giac vuong";
	 }else{
	 	cout<<"day la tam giac thuong";
	 }
	return 0;
}
