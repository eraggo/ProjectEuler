#include <iostream>

bool divide(int);

using namespace std;

int main(int argc, const char *argv[])
{
	bool found=false;
	int number=20*19; //starting with semi obvious	
	while (!found) {
		if (divide(number)) { 
			cout << "Found number: " << number << endl;
			found=true;
		} else {
			number += 20;
		}
	}
	return 0;
}

//returns true if input is divisible with every number to 19
bool divide(int a)
{
	for (int i=19; i>1; i--) {
		if (a%i)
			return false;
	}
	return true;
}
