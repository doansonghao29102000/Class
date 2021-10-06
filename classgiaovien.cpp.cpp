#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
class Giao_Vien{
	private:
	    string Ho_Ten;
	    int Tuoi;
	    string Bang_Cap;
	    string Chuyen_Nganh;
	    float Bac_Luong;
      public:
          void Nhap();
	    void In();
	    long double Tien_Luong();
	    string getCN();
};
void Giao_Vien::Nhap(){
	cout<<"Nhap Ho Ten Cua Giao Vien:";
	cin.ignore();
	getline(cin,Ho_Ten);
	cout<<"Nhap Tuoi Cua Giao Vien:";
	cin>>Tuoi;
	cout<<"Nhap Bang Cap Cua Giao Vien:";
	cin.ignore();
	getline(cin,Bang_Cap);
	cout<<"Nhap Chuyen Nganh Cua Giao Vien:";
	getline(cin,Chuyen_Nganh);
	cout<<"Nhap Bac Luong Cua Giao Vien:";
	cin>>Bac_Luong;
}
void Giao_Vien::In(){
	cout<<setw(25)<<left<<Ho_Ten<<"|";
	cout<<setw(5)<<left<<Tuoi<<"|";
	cout<<setw(15)<<left<<Bang_Cap<<"|";
	cout<<setw(20)<<left<<Chuyen_Nganh<<"|";
	cout<<setw(8)<<left<<Bac_Luong<<"|";
	cout<<setw(11)<<left<<Bac_Luong*610<<"|";
	cout<<endl;
}
long double	Giao_Vien::Tien_Luong(){
	return Bac_Luong*610;	
}
string Giao_Vien::getCN(){
	int min=0;
	for(int i=0;i<Chuyen_Nganh.length();i++){
		if(Chuyen_Nganh[i]==' '){
			min=i;
			break;
		}
	}
	return Chuyen_Nganh.substr(0,min);
}
int main(){
	int n;
	cout<<"Nhap Vao So Luong Giao Vien Cua Truong:";
	cin>>n;
	Giao_Vien x[n];
	for(int i=0;i<n;i++){
		cout<<"______Nhap Thong Tin Cho Giao Vien Thu "<<i+1<<":______"<<endl;
		x[i].Nhap();
	}
	cout<<"\n_______________________DANH SACH GIAO VIEN CO TIEN LUONG NHO HON 2000_____________________"<<endl;
	cout<<"__________________________________________________________________________________________"<<endl;
	cout<<"Ho va Ten"<<setw(21)<<"|Tuoi"<<setw(10)<<"|Bang Cap"<<setw(20)<<"|Chuyen Nganh";
	cout<<setw(17)<<"|HS Luong"<<setw(10)<<"|Tong Luong |"<<endl;
	cout<<"------------------------------------------------------------------------------------------"<<endl;
	for(int i=0;i<n;i++){
		if(x[i].Tien_Luong()<2000){
			x[i].In();
	      	cout<<"------------------------------------------------------------------------------------------"<<endl;
		}	
	}
	cout<<endl;
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if(x[i].getCN()>x[j].getCN()) swap(x[i],x[j]);
		}
	}
	cout<<"\n_______________________DANH SACH GIAO VIEN SAP XEP THEO CHUYEN NGANH______________________"<<endl;
	cout<<"__________________________________________________________________________________________"<<endl;
	cout<<setw(25)<<"Ho va Ten"<<setw(6)<<"|Tuoi"<<setw(16)<<"|Bang Cap"<<setw(21)<<"|Chuyen Nganh";
	cout<<setw(9)<<"|HS Luong"<<setw(10)<<"|Tong Luong |"<<endl;
	cout<<"------------------------------------------------------------------------------------------"<<endl;
	for(int i=0;i<n;i++){
		x[i].In();
		cout<<"------------------------------------------------------------------------------------------"<<endl;	
	}
	return 0;
}