#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
struct Ngay_Sinh
{
	int Ngay;
	int Thang;
	int Nam;
};
class Khach_Hang
{
	private:
	    string Ho_Ten;
	    Ngay_Sinh Birth_Date;
	    string So_CMT;
	    string Ho_Khau;
      public:
          void Nhap();
          void In();
          string getName();
          bool Month_KH();	
};
void Khach_Hang::Nhap(){
	cout<<"Nhap Ho Ten Cua Khac Hang:";
	getline(cin,Ho_Ten);
	cout<<"Nhap Ngay Sinh Cua Khac Hang:";
	cin>>Birth_Date.Ngay>>Birth_Date.Thang>>Birth_Date.Nam;
	cout<<"Nhap So Chung Minh Thu Cua Khac Hang:";
	cin.ignore();
	getline(cin,So_CMT);
	cout<<"Nhap Ho Khau Cua Khach Hang:";
	getline(cin,Ho_Khau);
}


void Khach_Hang::In(){
	cout<<setw(21)<<left<<Ho_Ten<<"|";
	if(Birth_Date.Ngay<10){
		
		cout<<left<<"0"<<Birth_Date.Ngay<<"/";
	}
	else{
		cout<<setw(2)<<left<<Birth_Date.Ngay<<"/";
	}
	if(Birth_Date.Thang<10){
		cout<<left<<"0"<<Birth_Date.Thang<<"/";
	}
	else{
		cout<<setw(2)<<left<<Birth_Date.Thang<<"/";
	}
	cout<<setw(10)<<left<<Birth_Date.Nam<<"|";
	cout<<setw(15)<<left<<So_CMT<<"|";
	cout<<setw(15)<<left<<Ho_Khau<<"|";
	cout<<endl;
}

string Khach_Hang::getName(){
	int x=0;
	for(int i=Ho_Ten.length()-1;i>=0;i--){
		if(Ho_Ten[i]==' '){
			x=i;
			break;
		}
	}
	return Ho_Ten.substr(x+1);
}


bool Khach_Hang::Month_KH(){
	if(this->Birth_Date.Thang == 12) return true;
	return false;
}

int main(){
	int n;
	cout<<"Nhap Vao So Luong Khach Hang:";
	cin>>n;
	cin.ignore();
	Khach_Hang x[n];
	for(int i=0;i<n;i++){
		cout<<"_______Nhap Thong Tin Cho Khach Hang Thu "<<i+1<<":_______"<<endl;
		x[i].Nhap();
	}
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if(x[i].getName()[0]>=x[j].getName()[0]) swap(x[i],x[j]);
		}
	}
	for(int i=0;i<n-1;i++){
		if(x[i].getName()[0]==x[i+1].getName()[0]){
			if(x[i].getName().length()>x[i+1].getName().length()) swap(x[i],x[i+1]);
		}
	}
	cout<<"\n___________DANH SACH THONG TIN KHAC HANG SAP XEP THEO TEN______________"<<endl;
	cout<<"_______________________________________________________________________"<<endl;
	cout<<"Ho va Ten  "<<setw(21)<<"|Ngay Sinh "<<setw(14)<<"|So CMT "<<setw(16);
	cout<<"|Ho Khau"<<setw(9)<<"|"<<endl;
	cout<<"-----------------------------------------------------------------------"<<endl;
	for(int i=0;i<n;i++){
		x[i].In();
		cout<<"-----------------------------------------------------------------------"<<endl;
	}
	cout<<endl;
	cout<<"\n___________DANH SACH THONG TIN KHAC HANG CO SINH NHAT THANG 12_________"<<endl;
	cout<<"_______________________________________________________________________"<<endl;
	cout<<setw(21)<<"Ho va Ten"<<setw(17)<<"|Ngay Sinh "<<setw(16)<<"|So CMT "<<setw(16);
	cout<<"|Ho Khau"<<setw(9)<<"|"<<endl;
	cout<<"-----------------------------------------------------------------------"<<endl;
	for(int i=0;i<n;i++){
		if(x[i].Month_KH()==true){
			x[i].In();
			cout<<"-----------------------------------------------------------------------"<<endl;
		}
	}
	return 0;
}