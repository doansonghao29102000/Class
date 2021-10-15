#include<iostream>
#include<iomanip>
using namespace std;
class DA_THUC3
{
	private:
	     int a;
	     int b;
	     int c;
	     int d;
	public:
	     DA_THUC3(int a, int b, int c, int d);
	     void Nhap();
	     void In();
	     DA_THUC3 Tong_1(DA_THUC3 DT);  
	     ~DA_THUC3();
};
DA_THUC3::DA_THUC3(int a=0, int b=0, int c=0, int d=0){
	this->a=a;
	this->b=b;
	this->c=c;
	this->d=d;
}
DA_THUC3::~DA_THUC3(){
	cout<<"Doi Tuong Da Duoc Huy Tai Day !!!"<<endl;
}
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
DA_THUC3 DA_THUC3::Tong_1(DA_THUC3 DT2){
	DA_THUC3 DT_SUM;
	DT_SUM.a = this->a + DT2.a;
	DT_SUM.b = this->b + DT2.b;
	DT_SUM.c = this->c + DT2.c;
	DT_SUM.d = this->d + DT2.d;
	return DT_SUM;
}
int main(){
	DA_THUC3 DT3;
	cout<<"\nDT Co Ham Khoi Tao Voi Tham So Ngam Dinh Bang 0 La: Q(x) =  ";
	DT3.In();
	DA_THUC3 DT, DT1, DT2;
	cout<<"\nNhap Thong Tin Cho Da Thuc Thu Nhat:"<<endl;
	DT1.Nhap();
	cout<<"\nNhap Thong Tin Cho Da Thuc Thu Hai:"<<endl;
	DT2.Nhap();
	DT=DT1.Tong_1(DT2);
	cout<<"\nTong Cua Hai Da Thuc La: P(x) = ";
	DT.In();
	return 0;
}
