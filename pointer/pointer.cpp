#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim(); //deklrasi method 

};

void mahasiswa::showNim() { //implementasikan method di luar class
	cout << "No Induk = " << nim << endl;
}

int main()
{
	mahasiswa mhs{ 1 }; //object mhs
	mhs.showNim();		//member access operator

	mahasiswa ref = mhs; // pointer reference reFMhs
	ref.nim = 2;		//member acces operator
	mhs.showNim();		

	mahasiswa* pMhs = &mhs; //pointer deferences pMhs
	pMhs->nim = 1;			//arrow operator
	pMhs->showNim();
	system("pause");
	return 0;
}