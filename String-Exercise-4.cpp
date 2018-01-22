//NUR AMIRAH AFIQAH
//A17DW2172
//convert string to uppercase
//complete the fragment code below using the string to uppercase function.

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char lowerToUpper[80];
	int i;
	
	/*use string copy function here*/strcpy (lowerToUpper, "This is a check");

	for(i=0; i<80; i++)
	{
		lowerToUpper[i] = /*uppercase function*/toupper(lowerToUpper[i]);
		
		cout<<lowerToUpper <<endl;
	}
	return 0;
}
