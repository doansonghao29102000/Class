#include<iostream>
#include<iomanip>
using namespace std;
int UCLN(int a, int b){
	while(a!=b){
		if(a>b) a=a-b;
		else b=b-a;
	}
	return a;
}
class Phan_So
{
	private:
	    int Tu_So;
	    int Mau_So;
      public:
          Phan_So(int Tu_So, int Mau_So);
          void Nhap();
          void In();
          Phan_So Tong(Phan_So PS2);
          int getTu_So();
          int getMau_So();
          ~Phan_So();
};
Phan_So::Phan_So(int Tu_So=1, int Mau_So=1){
	this->Tu_So = Tu_So;
	this->Mau_So = Mau_So;
}
Phan_So::~Phan_So(){
	cout<<"Doi Tuong Da Duoc Huy Tai Day !!!"<<endl;
}
void Phan_So::Nhap(){
	cout<<"Nhap Thong Tin Cho Tu So:";
	cin>>this->Tu_So;
	cout<<"Nhap Thong Tin Cho Mau So:";
	cin>>this->Mau_So;
}
void Phan_So::In(){
	cout<<this->Tu_So<<"/"<<this->Mau_So<<endl;
}
Phan_So Phan_So::Tong(Phan_So PS2){
	Phan_So PS_SUM;
	int Uoc_CLN;
	PS_SUM.Tu_So = this->Tu_So*PS2.Mau_So + this->Mau_So*PS2.Tu_So;
	PS_SUM.Mau_So = this->Mau_So*PS2.Mau_So;
	Uoc_CLN=UCLN(PS_SUM.Tu_So, PS_SUM.Mau_So);
	PS_SUM.Tu_So = PS_SUM.Tu_So/Uoc_CLN;
	PS_SUM.Mau_So = PS_SUM.Mau_So/Uoc_CLN;
      return PS_SUM;
}
int Phan_So::getTu_So(){
	return Tu_So;
}
int Phan_So::getMau_So(){
	return Mau_So;
}
int main(){
	Phan_So PS, PS1, PS2;
	cout<<"\nNhap Thong Tin Cho Phan So Thu Nhat:"<<endl;
	PS1.Nhap();
	cout<<"\nNhap Thong Tin Cho Phan So Thu Hai:"<<endl;
	PS2.Nhap();
	PS=PS1.Tong(PS2);
	cout<<"\nTong Cua Hai Phan So La : Q(x) = ";
	if(PS.getTu_So() == PS.getMau_So()) cout<<1<<endl;
	else {
		PS.In();
	}
	return 0;
}