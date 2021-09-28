#include <iostream>
using namespace std;
struct Phan_So
{
	int Tu_So;
	int Mau_So;
};
void Nhap(Phan_So PS[] , int n){
	for(int i=1;i<=n;i++){
		cout<<"Nhap thong tin cua phan so thu "<<i<<":"<<endl;
		cout<<"Nhap tu so:";
      	cin>>PS[i].Tu_So;
	      cout<<"Nhap mau so:";
	      cin>>PS[i].Mau_So;
	}
}
void In(Phan_So PS[] , int n){
	for(int i=1;i<n;i++){
		cout<<PS[i].Tu_So<<"/"<<PS[i].Mau_So<<" + ";
	}
	cout<<PS[n].Tu_So<<"/"<<PS[n].Mau_So<<" = ";
}
int Uoc_TLN(int a , int b){
	int r;
	while(a%b!=0){
	      r=a%b;
		a=b;
		b=r;
	}
	return b;
}
Phan_So Tinh_Tong(Phan_So PS[] , int n){
	Phan_So Temp=PS[1];
	for(int i=2;i<=n;i++){
		Temp.Tu_So=Temp.Tu_So*PS[i].Mau_So+Temp.Mau_So*PS[i].Tu_So;
		Temp.Mau_So=Temp.Mau_So*PS[i].Mau_So;
		int z=Uoc_TLN(Temp.Tu_So,Temp.Mau_So);
		Temp.Tu_So=Temp.Tu_So/z;
		Temp.Mau_So=Temp.Mau_So/z;
	}
	return Temp;
}
void Ket_Qua(Phan_So PS[] , int n){
	Phan_So SUM;
	SUM=Tinh_Tong(PS,n);
	cout<<SUM.Tu_So<<"/"<<SUM.Mau_So<<endl;
}
int main(){
	int n;
	cout<<"So Phan So Can Tinh Tong La :";
	cin>>n;
	Phan_So SP[n];
	Nhap(SP,n);
	cout<<"----Tong Cua Cac Phan So la ----"<<endl;
	In(SP,n);
	Ket_Qua(SP,n);
	return 0;
}