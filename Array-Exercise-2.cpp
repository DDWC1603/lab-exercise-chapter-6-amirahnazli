//NUR AMIRAH AFIQAH
//A17DW2172
//this is not a complete program. please finish the program. thank you.

#include <iostream>
using namespace std;

int mark[5]={19,10,8,17,9};
int main()
{
	int x;
	
	//insert different value to the third element
	//tukar third element tu dengan value lain
	mark[3] = 9;/*your valie*/

	//tukar the third element yang baru ditukar tu dengan input dari user
	cout<< "Please insert number : "<<endl;
	cin>> mark[3];

	//print the first element of the array
	cout<< "First number is: "<<endl;
	cout<< mark[0];

	//print the ith element of the array
	cout<< mark[x-1];

}
