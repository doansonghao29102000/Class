#include<iostream>
#include<iomanip>
using namespace std;
class Hoa_Don
{
	private:
          string maVT;
          string TenVT;
          long ThanhTien;
      public:
          void Nhap();
          void In();
          bool operator > (Hoa_Don &HD2){
          	if(this->ThanhTien > HD2.ThanhTien) return true;
	      return false;
          };
};
void Hoa_Don::Nhap(){
	cout<<"Nhap ma vat tu:";
	getline(cin,maVT);
	cout<<"Nhap ten vat tu:";
	getline(cin,TenVT);
	cout<<"Nhap thanh tien:";
	cin>>ThanhTien;
	cin.ignore();
}
void Hoa_Don::In(){
	cout<<maVT<<"   "<<TenVT<<"  "<<ThanhTien<<endl;
}
void SWAP(Hoa_Don &a , Hoa_Don &b){
	Hoa_Don temp = a;
	a = b;
	b = temp;
}
int main(){
	Hoa_Don HD[3];
	for(int i=0;i<3;i++){
		HD[i].Nhap();
	}
	for(int i=0;i<2;i++){
		for(int j=i;j<3;j++){
			if(HD[i]>HD[j]) SWAP(HD[i],HD[j]);
		}
	}
	for(int i=0;i<3;i++){
		HD[i].In();
	}
	return 0;
}