#include<iostream>
using namespace std;

class Dathuc3{
	private:
		int a;
		int b;
		int c;
		int d;
	public:
		Duthuc3(){
		}
		~Dathuc3(){
		}
		
		void nhap(){
			cout << "a = "; cin >> a;
			cout << "b = "; cin >> b;
			cout << "c = "; cin >> c;
			cout << "d = "; cin >> d;
		}
		
		void xuat(){
			cout << a << "x3 + " << b << "x2 + " << c << "x + " << d;
		}
};

int main(){
	Dathuc3 dtb3[2];
	for(int i=0; i<2; i++){
	dtb3[i].nhap(); 
	dtb3[i].xuat();
	cout << endl;
}
	
	return 0;
}
