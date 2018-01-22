//NUR AMIRAH AFIQAH
//A17DW2172
//use the string compare function to compare input string with the setup string
//make a check with the string password(if else)

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
	char strPswd[80];

	cout<<"Enter password: ";
	gets(strPswd);
	//get the strPswd
	
	//make an if else that check the password(strPswd)
	//(string compare function (strPswd,"Check")) 
	if (strcmp (strPswd, "Check"))	
		{
			cout<<" INVALID PASSWORD "<<endl;
		}
	
	else 
		{
			cout<<"Logged in "<<endl;
		}
	return 0;
}
