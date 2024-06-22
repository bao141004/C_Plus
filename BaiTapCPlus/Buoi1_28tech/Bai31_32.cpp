#include <iostream>
#include <math.h>

using namespace std;

int main() {
    //Bai 31
//	float d1hso1, d2hso1, hso2, hso3;cin>>d1hso1>>d2hso1>>hso2>>hso3;
//	float tong = (d1hso1 + d2hso1 +hso2 +hso3)/4;
//	if(tong>= 8){
//		cout<<"gioi";
//	}else if(tong<8 && tong>=6.5){
//		cout<<"kha";
//	}else if(tong<6.5 && tong >=5){
//		cout<<"trung binh";
//	}else{
//		cout<<"yeu";
//	}
	//Bai 32
	int a,b,c,d,e; cin>>a>>b>>c>>d>>e;
	int smallest , second_smallest;
	if(a< b){
		smallest= a;
		second_smallest =b;
	}else{
		smallest=b;
		second_smallest =a;
	}
	if (c < smallest) {
        second_smallest = smallest;
        smallest = c;
    } else if (c < second_smallest) {
        second_smallest = c;
    }

    if (d < smallest) {
        second_smallest = smallest;
        smallest = d;
    } else if (d < second_smallest) {
        second_smallest = d;
    }

    if (e < smallest) {
        second_smallest = smallest;
        smallest = e;
    } else if (e < second_smallest) {
        second_smallest = e;
    }

    cout << "so can tim la: " << second_smallest << endl;
    return 0;
}


