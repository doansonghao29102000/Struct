#include <iostream>
using namespace std;
struct So_Phuc
{
	int phan_thuc;
	int phan_ao;
};
void Nhap(So_Phuc	&SP){
	cout<<"Nhap phan thuc:";
	cin>>SP.phan_thuc;
	cout<<"Nhap phan ao:";
	cin>>SP.phan_ao;
}
void In(So_Phuc &SP){
	cout<<"z="<<SP.phan_thuc<<"+"<<SP.phan_ao<<"*i"<<endl;
}
So_Phuc Tong_Hai_So_Phuc(So_Phuc &SP1 , So_Phuc &SP2){
	So_Phuc SP;
	SP.phan_thuc = SP1.phan_thuc + SP2.phan_thuc;
	SP.phan_ao = SP1.phan_ao + SP2.phan_ao;
	return SP;
}
int main(){
	So_Phuc SP1,SP2,SP;
	cout<<"Nhap thong tin so phuc thu nhat:"<<endl;
	Nhap(SP1);
	cout<<"Nhap thong tin so phuc thu hai:"<<endl;
	Nhap(SP2);
	cout<<"So phuc la Tong cua hai so phuc tren la:"<<endl;
	SP=Tong_Hai_So_Phuc(SP1,SP2);
	In(SP);
	return 0;
}