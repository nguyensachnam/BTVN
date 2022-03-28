#include<iostream>
#include<cstring>
using namespace std;

class Giao_vien{
	private:
		char name[30];
		int age;
		char bc[15];
		char chnganh[20];
		float salary;
		float lcb;
		public:
			void nhap(){
				cin.ignore();
				cout << "Nhap ten: "; cin.getline(name, 30);
				cout << "Nhap tuoi: "; cin >> age;
				cin.ignore();
				cout << "Nhap bang cap: "; cin.getline(bc, 15);
				cout << "Nhap chuyen nganh: "; cin.getline(chnganh, 20);
				cout << "Nhap bac luong: "; cin >> salary;
				cout << endl;
			}
			string getName(){
				return name;
			}
			void setName(char name[30]){
				this->name[30]=name[30];
			}
			void setChnganh(char chnganh[20]){
				this->chnganh[20]=chnganh[20];
			}
			char getChnganh(){
				return chnganh[20];
			}
			float lcban(){
				lcb = salary * 610;
				return lcb;
			}
			void xuat(){
				cout << "Ho va ten: " << name << endl;
				cout << "Tuoi: " << age << endl;
				cout << "Bang cap: " << bc << endl;
				cout << "Chuyen nganh: " << chnganh << endl;
				cout << "Bac luong: " << salary << endl;
				cout << "Luong co ban: " << lcban() << endl;
				cout << endl;
		    }
			void min2000(){
			if(lcb < 2000)
				cout << name << endl;
		    }
}GV[10];

	

int main(){
	int n;
	cout << "Nhap so luong giao vien: "; cin >> n;
	for(int i=0; i<n; i++){
	GV[i].nhap();
	}
	for(int i=0; i<n; i++){
	GV[i].xuat();
    }
	cout << "Danh sach nhan vien luong duoi 2000:" << endl;
    for(int i=0; i<n; i++){
	cout << i + 1 << ". ";
	GV[i].min2000();
}
    
	return 0;
}
