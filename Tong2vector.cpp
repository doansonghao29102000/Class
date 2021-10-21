#include<iostream>
#include<iomanip>
using namespace std;
class VecTor3
{
	private:
	    int x;
	    int y;
	    int z;
      public:
          VecTor3(int x , int y , int z);
          ~VecTor3();
          void Nhap();
          void In();
          VecTor3 Tong(VecTor3 V2);
         
};
VecTor3::VecTor3(int x=0 , int y=0 , int z=0){
	this->x = x;
	this->y = y;
	this->z = z;
}
VecTor3::~VecTor3(){
	//cout<<"Doi Tuong Duoc Huy Tai Day !!!"<<endl;
}
void VecTor3::Nhap(){
	cout<<"Nhap Toa Do x Cua VecTor:";
	cin>>this->x;
	cout<<"Nhap Toa Do y Cua VecTor:";
	cin>>this->y;
	cout<<"Nhap Toa Do z Cua VecTor:";
	cin>>this->z;
}
void VecTor3::In(){
	cout<<setw(24)<<"->"<<endl;
	cout<<"Toa Do Cua VecTor La: V("<<x<<";"<<y<<";"<<z<<")"<<endl;
}
VecTor3 VecTor3::Tong(VecTor3 V2){
	VecTor3 V_Sum;
	V_Sum.x = this->x + V2.x;
	V_Sum.y = this->y + V2.y;
	V_Sum.z = this->z + V2.z;
	return V_Sum;
}
int main(){
	VecTor3 V , V1 , V2;
	cout<<setw(28)<<"->"<<endl;
	cout<<"Nhap Thong Tin Cho VecTor V1:"<<endl;
	V1.Nhap();
	cout<<setw(28)<<"->"<<endl;
	cout<<"Nhap Thong Tin Cho VecTor V2:"<<endl;
	V2.Nhap();
	V=V1.Tong(V2);
	V.In();
	return 0;
}