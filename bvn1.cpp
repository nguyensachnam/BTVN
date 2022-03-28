#include<iostream>
#include<string.h>
using namespace std;

class Khach_hang{
	private:
		char ho_ten[30];
		struct ngay_sinh{
			int ngay;
			int thang;
			int nam;
		}ns;
		char CMT[10];
		public:
		void nhaptt(){
			cin.ignore();
			cout << "Nhap ho ten khach hang: "; cin.getline(ho_ten, 30);
			cout << "Nhap ngay sinh: "; cin >> ns.ngay >> ns.thang >> ns.nam;
			cout << "Nhap so CMT: "; cin >> CMT;
			cout << endl;	
		}
		
		void xuat(){
			cout << endl;
			cout << "Ho va ten KH: " << ho_ten << endl;
			cout << "Ngay sinh: " << ns.ngay << "/" << ns.thang << "/" << ns.nam << endl;
			cout << "So CMT: " << CMT << endl;
			}
	
	void t12(){
		if(ns.thang==12)
		cout << "Khach hang sinh T12: " << ho_ten << endl;
	}
};

int main(){
	int n;
	cout << "Nhap so luong khach hang: "; cin >> n;
	Khach_hang KH[10];

	for(int i=0; i<n; i++){
		KH[i].nhaptt();
	}
	
	for(int i=0; i<n; i++){
			KH[i].xuat();
	}
	for(int i=0; i<n; i++){
			KH[i].t12();
	}
}
