//NUR AMIRAH AFIQAH
//A17DW2172
//its just an array example
//find the sum of all the value inside the array
#include <iostream>
using namespace std;

int array[5]={3, 6, 9, 12, 15};

int main()
{
	int n, result=0;
	
	for(n=0; n<5; n++)
	{
		result += array[n];
	}
	cout<<result;
}
