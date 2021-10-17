#include<iostream>
#include<iomanip>
using namespace std;
class DA_THUC3
{
	public:
	     int a;
	     int b;
	     int c;
	     int d;
	public:
	     void Nhap();
	     void In();
};
void DA_THUC3::Nhap(){
	cout<<"Nhap He So Bac 3:";
	cin>>a;
	cout<<"Nhap He So Bac 2:";
	cin>>b;
	cout<<"Nhap He So Bac 1:";
	cin>>c;
	cout<<"Nhap He So Bac 0:";
	cin>>d;
}
void DA_THUC3::In(){
	cout<<a<<"*x^3 + "<<b<<"*x^2 + "<<c<<"*x + "<<d<<endl;
}
DA_THUC3 Tong_2(DA_THUC3 DT1 , DA_THUC3 DT2){
	DA_THUC3 DT;
	DT.a = DT1.a + DT2.a;
	DT.b = DT1.b + DT2.b;
	DT.c = DT1.c + DT2.c;
	DT.d = DT1.d + DT2.d;
	return DT;
}
int main(){
	DA_THUC3 DT, DT1, DT2;
	cout<<"\nNhap Thong Tin Cho Da Thuc Thu Nhat:"<<endl;
	DT1.Nhap();
	cout<<"\nNhap Thong Tin Cho Da Thuc Thu Hai:"<<endl;
	DT2.Nhap();
	DT=Tong_2(DT1,DT2);
	cout<<"\nTong Cua Hai Da Thuc La: Q(x) = ";
	DT.In();
	return 0;
}