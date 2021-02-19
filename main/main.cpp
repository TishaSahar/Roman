#include "RomanToArabic.h"

using namespace std;
int main() {

	arabic A; //A.value = 1941;
	roman R; R.value = "MV";
	Convertor C;

	A = toArabic(R); 

	Convertor C1(R, A);

	C1.printAr();

	system("pause");
	return 0;
}