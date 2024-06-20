#include <iostream> //thu vien nay de cung cap ham in ra man hinh va nhap tu ban phim
#include <iomanip>
//neu k khai bao namespace std thi se phai viet
//std::cout (std la namespace , :: la toan tu pham vi )
using namespace std;

//                                kieu du lieu:
//so nguyen 
// int : -2^31 -> 2^31 - 1       (4byte = 32bit)
// long long : -2^63 -> 2^63 -1  (8byte = 64bit)
//so thuc
// float : 4byte (bieu dien dc 6 so thap phan 2.000000) 
// double : 8byte (bieu dien dc 12 so thap phan)
//ki tu
//char : 1byte : 256 gia tri chay tu 0 -> 255 (trong bang ma ASCII)

//bool: true , false : 1byte



//                                Bien
//Kieu_Du_Lieu Ten_Bien
//int DienTich;
//float BanKinh;
//double ChuVi;

// 3 quy tac dat ten bien:
// khong duoc bat dau = chu so (int 1DienTich)
// khong duoc co dau cach (int Dien Tich)
// khong duoc trung voi cac keyword (int char, main , int ,return ,...)
int main(){
	
//	cout << INT_MIN << " " << INT_MAX << endl;
//	cout << LLONG_MIN << " " << LLONG_MAX << endl;  

//	float a  ;//khai bao
//	cin >> a ; //nhap gia tri tu ban phim cho a
//	//muon in ra so chinh xac cua float thi bo xung fixed va setprecision + thu vien (iomanip)
//	cout << fixed << setprecision(2) << a<< endl;//endl xuong dong

//char kitu;
//cin >> kitu;
//cout << kitu;

bool ok = false ; // false in ra la 0 , con true la 1
cout << ok <<endl;
	return 0;
}
