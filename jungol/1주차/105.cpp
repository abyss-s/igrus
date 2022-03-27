#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << setw(15) << "Seoul" << setw(15) 
	    << "10,312,545" << setw(15) << "+91,375" << endl;
	cout << setw(15) << "Pusan" << setw(15)
	    << "3,567,910" << setw(15) << "+5,868" << endl;
	cout << setw(15) << "Incheon" << setw(15)
		<< "2,758,296" << setw(15) << "+64,888" << endl;
	cout << setw(15) << "Daegu" << setw(15)
		<< "2,511,676" << setw(15) << "+17,230" << endl;
	cout << setw(15) << "Gwangju" << setw(15)
		<< "1,454,636" << setw(15) << "+29,774" << endl;
}

