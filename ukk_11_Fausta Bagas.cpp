#include <iostream>
using namespace std;

int main()
{
	string nama=" Fausta Bagas Raditya";
	int uangfausta,hargaeskrim,kembalian;
	
	cout<<nama<<endl;
	
	cout<<"Uang Fausta Rp.  ";
	cin>>uangfausta;
	
	cout<<"Harga Es Krim Rp.  ";
	cin>>hargaeskrim;

	kembalian=uangfausta-hargaeskrim;
	cout<<"Kembalian Rp.  "<<kembalian;
	
	return 0;
	
}
