#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct SV
{
	string tensv;
	int diem_toan;
	int diem_ly;
	int diem_C;
};
void nhap(SV sv[] ,int n){
	for(int i=0;i<n;i++){
		getline(cin,sv[i].tensv);
	}
}
void in(SV sv[] , int n){
	cout<<"---DANH SACH TEN CAC SINH VIEN---"<<endl;
	for(int i=0;i<n;i++){
		cout<<sv[i].tensv<<endl;
	}
}
void nhapdiem(SV sv[] ,int n){
	cout<<"Nhap diem Toan cua "<<n<<" ban "<<endl;
	for(int i=0;i<n;i++){
		cin>>sv[i].diem_toan;
	}
	cout<<"Nhap diem LY cua "<<n<<" ban "<<endl;
	for(int i=0;i<n;i++){
		cin>>sv[i].diem_ly;
	}
	cout<<"Nhap diem C cua "<<n<<" ban "<<endl;
	for(int i=0;i<n;i++){
		cin>>sv[i].diem_C;
	}

}
void in_diem(SV sv[],int n){
	cout<<"---DANH SACH DIEM CUA CAC SINH VIEN---"<<endl;
	for(int i=0;i<n;i++) cout<<sv[i].diem_toan<<" ";
	cout<<endl;
	for(int i=0;i<n;i++) cout<<sv[i].diem_ly<<" ";
	cout<<endl;
	for(int i=0;i<n;i++) cout<<sv[i].diem_C<<" ";
	cout<<endl;
}
void Tong_diem(SV sv[], int a[], int n){
	for(int i=0;i<n;i++){
		a[i]= sv[i].diem_toan + sv[i].diem_ly + sv[i].diem_C;
	}
}
int SLN(int a[], int n){
	int MAX=a[0];
	for(int i=1;i<n;i++){
		if(MAX<a[i]) MAX=a[i];
	}
	return MAX;
}
int main(){
	int n;
	cin>>n;
	SV sv[n];
	int a[n];
	cin.ignore();
	cout<<"---NHAP DANH SACH TEN SINH VIEN---"<<endl;
	nhap(sv,n);
	cout<<"---NHAP DANH SACH DIEM CUA SINH VIEN---"<<endl;
	nhapdiem(sv,n);
	in(sv,n);
	in_diem(sv,n);
	Tong_diem(sv,a,n);
	cout<<"---DANH SACH NHUNG THI SINH THU KHOA----"<<endl;
	for(int i=0;i<n;i++){
		if(SLN(a,n)==a[i]){
			cout<<sv[i].tensv<<" "<<sv[i].diem_toan<<" "<<sv[i].diem_ly
			<<" "<<sv[i].diem_C<<endl;
		}
	}
	return 0;

}