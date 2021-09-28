#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;
struct Hoc_Sinh
{
 	string MaHS;
 	string TenHS;
 	string QueQuan;
 	float TongDiem;
};
void Nhaps(Hoc_Sinh HS[] , int n){
	cout<<"-------NHAP THONG TIN DANH SACH HOC SINH-------"<<endl;
	for(int i=0;i<n;i++){
		cout<<"Nhap Thong Tin Hoc Sinh Thu :"<<i+1<<endl;
		cout<<"Nhap Ma Hoc Sinh :";cin>>HS[i].MaHS;
		cout<<"Nhap Ten Hoc Sinh :";
		cin.ignore();
		getline(cin,HS[i].TenHS);
		cout<<"Nhap Que Quan Cua Hoc Sinh :";
		getline(cin,HS[i].QueQuan);
		cout<<"Nhap GPA(He 10) Cua Hoc Sinh :";
		cin>>HS[i].TongDiem;
	}
}
void Ins(Hoc_Sinh HS[] , int n){
	cout<<"-------DANH SACH THONG TIN HOC SINH--------"<<endl;
	cout<<"Ma Hoc Sinh"<<setw(20)<<"Ten Hoc Sinh"<<setw(15)<<"Que Quan"<<setw(20)
	<<"GPA(He so 10)"<<endl;
	for(int i=0;i<n;i++){
		cout<<"   "<<HS[i].MaHS<<setw(27)<<HS[i].TenHS<<setw(14)<<HS[i].QueQuan
		<<setw(14)<<HS[i].TongDiem<<endl;
	}
}
void Sap_Xep_GPA(Hoc_Sinh HS[] , int n){
	Hoc_Sinh Temp;
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if(HS[i].TongDiem<HS[j].TongDiem) {
				Temp  = HS[i];
				HS[i] = HS[j];
				HS[j] = Temp;
				//swap(HS[i],HS[j])
				
			}
		}
	}
}
//bool Xet(Hoc_Sinh	x , Hoc_Sinh y){
//	return x.TongDiem > y.TongDiem;
//}
//sort(HS,HS+n,Xet);
void Tim_Kiem(Hoc_Sinh HS[] , int n){
	cout<<"\n______DANH SACH SINH VIEN NAM DINH______"<<endl;
	cout<<"Ma Hoc Sinh"<<setw(20)<<"Ten Hoc Sinh"<<setw(15)<<"Que Quan"<<setw(20)
	<<"GPA(He so 10)"<<endl;
	string str = "Nam Dinh";
	for(int i=0;i<n;i++){
		if(HS[i].QueQuan == str) {
			cout<<"   "<<HS[i].MaHS<<setw(27)<<HS[i].TenHS<<setw(14)
			<<HS[i].QueQuan<<setw(14)<<HS[i].TongDiem<<endl;
		}
	}
}
int main(){
	int n;
	cout<<"Nhap So Hoc Sinh Cua Truong:";
	cin>>n;
	Hoc_Sinh HS[n];
	Nhaps(HS,n);
	Sap_Xep_GPA(HS,n);
	Ins(HS,n);
	cout<<endl;
	Tim_Kiem(HS,n);
	return 0;
}
