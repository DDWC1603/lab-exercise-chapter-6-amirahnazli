//NUR AMIRAH AFIQAH
//A17DW2172
//include your name and matric number here
//display the string below using the string function state below.

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char engkau[10] = "HELLO";
	char awak[10] = "WORLD";
	char kita[10];
	int len;

	//stringcopy(a,"hello");
	strcpy (kita, engkau);
	cout<< "strcpy (kita, engkau) : " <<kita <<endl;
	
	strcat (engkau, awak);
	cout<< "strcat (engkau, awak) : " <<engkau <<endl;
	
	len = strlen (engkau);
	cout<< "strlen (engkau) : " <<len <<endl;

	return 0;
}
