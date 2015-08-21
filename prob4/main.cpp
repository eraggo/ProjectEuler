#include <iostream>

using namespace std;

bool isPalindrome(int); // true if input is palindrome
int removeLast(int&); // remove last digit from number. Return removed
bool factor(int); // true if can factorize input to 2 3-digit numbers

int main(int argc, const char *argv[])
{
	bool solved=false;
	int n=999999;
	while (!solved) {
		if (isPalindrome(n)) {
			if (factor(n))
				solved=true;
		}
		n--;
	}
	return 0;
}

bool isPalindrome(int in)
{
	// Not needed but i added this if-statement anyways
	if ((in<10000)||(in>999999)) {
		cout << "Too small or too big input number" << endl;
		return false;
	}
	if (in<100000) { // 5 digit numbers
		//TODO if can not find 6 digit number palindrome
	} else { // 6 digit numbers
		// Remove last digit->another digit*10+removed 3 times
		// if new digit and cutted down digits are same: palindrome
		int digit=0;
		for (int i=0; i<3; i++)
			digit=digit*10+removeLast(in);
		if (digit==in) return true;
		return false;
	}
}

int removeLast(int &in)
{
	int last=in%10;
	in=(in-last)/10;
	return last;
}

bool factor(int in)
{
	for (int i=999;i>1;i--) {
		if (!(in%i) && in/i<1000) {
			cout << in << "=" << i << "*" << in/i << endl;
			return true;
		}
	}
	return false;
}
