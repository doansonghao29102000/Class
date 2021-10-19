#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int UCLN(int a, int b){
	int n = abs(a);
	int m = abs(b);
	while(n!=m){
		if(n>m) n=n-m;
		else m=m-n;
	}
	return n;
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
          Phan_So Hieu(Phan_So PS2);
          int getTu_So();
          int getMau_So();
          ~Phan_So();
};
Phan_So::Phan_So(int Tu_So=1, int Mau_So=1){
	this->Tu_So = Tu_So;
	this->Mau_So = Mau_So;
}
Phan_So::~Phan_So(){
	cout<<"\nDoi Tuong Da Duoc Huy Tai Day !!!"<<endl;
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
	if(PS_SUM.Tu_So == 0) return PS_SUM;
	else{
		Uoc_CLN = UCLN(PS_SUM.Tu_So,PS_SUM.Mau_So);
		PS_SUM.Tu_So = PS_SUM.Tu_So/Uoc_CLN;
		PS_SUM.Mau_So = PS_SUM.Mau_So/Uoc_CLN;
		return PS_SUM;
	}
}
Phan_So Phan_So::Hieu(Phan_So PS2){
	Phan_So PS_SUB;
	int Uoc_CLN;
	PS_SUB.Tu_So = this->Tu_So*PS2.Mau_So - this->Mau_So*PS2.Tu_So;
	PS_SUB.Mau_So = this->Mau_So*PS2.Mau_So;
	if(PS_SUB.Tu_So == 0) return PS_SUB;
	else{
		Uoc_CLN = UCLN(PS_SUB.Tu_So,PS_SUB.Mau_So);
		PS_SUB.Tu_So = PS_SUB.Tu_So/Uoc_CLN;
		PS_SUB.Mau_So = PS_SUB.Mau_So/Uoc_CLN;
		return PS_SUB;
	}
}	
int Phan_So::getTu_So(){
	return Tu_So;
}
int Phan_So::getMau_So(){
	return Mau_So;
}
int main(){
	Phan_So PS1, PS2;
	cout<<"\nNhap Thong Tin Cho Phan So Thu Nhat:"<<endl;
	PS1.Nhap();
	cout<<"\nNhap Thong Tin Cho Phan So Thu Hai:"<<endl;
	PS2.Nhap();
	if(PS1.getMau_So()==0 || PS2.getMau_So()==0){
		cout<<"\nKhong Thuc Hien Phep Cong !!!"<<endl;
	}
	else{
		Phan_So PS_SUM;
		PS_SUM=PS1.Tong(PS2);
		if(PS_SUM.getTu_So()%PS_SUM.getMau_So()==0){
			cout<<"\nTong Cua Hai Phan So La: Q(x) = ";
			cout<<PS_SUM.getTu_So()/PS_SUM.getMau_So()<<endl;
		}
		else{
			if(PS_SUM.getTu_So()<0 && PS_SUM.getMau_So()<0){
				cout<<"\nTong Cua Hai Phan So La: Q(x) = ";
				cout<<(-1)*PS_SUM.getTu_So()<<"/";
				cout<<(-1)*PS_SUM.getMau_So()<<endl;
			}
			else{
				if(PS_SUM.getTu_So()>0 && PS_SUM.getMau_So()<0){
					cout<<"\nTong Cua Hai Phan So La: Q(x) = ";
					cout<<(-1)*PS_SUM.getTu_So()<<"/";
					cout<<(-1)*PS_SUM.getMau_So()<<endl;
				}
				else{
					cout<<"\nTong Cua Hai Phan So La: Q(x) = ";
					PS_SUM.In();
				}
			}
		}
	}
	if(PS1.getMau_So()==0 || PS2.getMau_So()==0){
		cout<<"\nKhong Thuc Hien Phep Tru !!!"<<endl;
	}
	else{
		Phan_So PS_SUB;
		PS_SUB=PS1.Hieu(PS2);
		if(PS_SUB.getTu_So()%PS_SUB.getMau_So()==0){
			cout<<"\nHieu Cua Hai Phan So La: P(x) = ";
			cout<<PS_SUB.getTu_So()/PS_SUB.getMau_So()<<endl;
		}
		else{
			if(PS_SUB.getTu_So()<0 && PS_SUB.getMau_So()<0){
				cout<<"\nHieu Cua Hai Phan So La: P(x) = ";
				cout<<(-1)*PS_SUB.getTu_So()<<"/";
				cout<<(-1)*PS_SUB.getMau_So()<<endl;
			}
			else{
				if(PS_SUB.getTu_So()>0 && PS_SUB.getMau_So()<0){
					cout<<"\nHieu Cua Hai Phan So La: P(x) = ";
					cout<<(-1)*PS_SUB.getTu_So()<<"/";
					cout<<(-1)*PS_SUB.getMau_So()<<endl;
				}
				else{
					cout<<"\nHieu Cua Hai Phan So La: P(x) = ";
					PS_SUB.In();
				}
			}
		}
	}
	return 0;
}