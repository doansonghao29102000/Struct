#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct Hang_Hoa
{
 	string MaHH;
 	string TenHH;
 	int SoLuong;
 	long DonGia;
 	long ThanhTien;
};
void Nhap(Hang_Hoa HH[] , int n){
	cout<<"------NHAP VAO DANH SACH HANG HOA------"<<endl;
	for(int i=0;i<n;i++){
		cout<<"Nhap Thong Tin Cua Mat Hang Thu :"<<i+1<<endl;
		cout<<"Nhap Ma Hang Hoa :";cin>>HH[i].MaHH;
		cout<<"Nhap Ten Hang Hoa :";
		cin.ignore();
		getline(cin,HH[i].TenHH);
		cout<<"Nhap So Luong Hang Hoa :";cin>>HH[i].SoLuong;
		cout<<"Nhap Don Gia Cua Hang Hoa :";cin>>HH[i].DonGia;	
	}
}
void Thanh_Tien(Hang_Hoa HH[] , int n){
	for(int i=0;i<n;i++){
		HH[i].ThanhTien = HH[i].SoLuong*HH[i].DonGia;
	}
}
void Ins(Hang_Hoa HH[] , int n){
	cout<<"------Danh Sach Mat Hang Co Don Gia Lon Hon 5000------"<<endl;
	cout<<"Ma Hang Hoa"<<setw(15)<<"Ten Hang Hoa"<<setw(15)<<"So Luong"<<setw(15)
	<<"Don Gia"<<setw(15)<<"Thanh Tien"<<endl;
	for(int i=0;i<n;i++){
		if(HH[i].DonGia>5000){
		cout<<"   "<<HH[i].MaHH<<setw(15)<<HH[i].TenHH<<setw(15)<<HH[i].SoLuong
		<<setw(18)<<HH[i].DonGia<<setw(15)<<HH[i].ThanhTien<<endl;
		}
	}
}
int main(){
	int n;
	cout<<"Nhap So Luong Mat Hang :";cin>>n;
	Hang_Hoa HH[n];
	Nhap(HH,n);
	Thanh_Tien(HH,n);
	Ins(HH,n);
	return 0;
}
