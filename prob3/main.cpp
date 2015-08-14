// 600851475143: find largest prime factor

#include <iostream>

using namespace std;
int main(int argc, const char *argv[])
{
	long t=600851475143;
	cout << t/2.0 << endl;
	for (long i=600851475143; i>0; i--) {
		if (!(t%i))
			cout << i << endl;
		if (!(i%10000000000))
			cout << i << "## MIL" << endl;
	}
	return 0;
}
