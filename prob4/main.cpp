#include <iostream>

using namespace std;

bool isPalindrome(int); // true if input is palindrome
int removeLast(int&); // remove last digit from number. Return removed
bool factor(int); // true if can factorize input to 2 3-digit numbers

int main(int argc, const char *argv[])
{
	int count=0;
	for (int i=999999; i>100000; i--) {
		if (isPalindrome(i)) {
			cout << i << endl;
			count++;
		}
	}
	cout << "final count: " << count << endl;
	return 0;
}

bool isPalindrome(int in)
{
	// Making sure (not necessary but i did add it anyways)
	// Maybe i need this function later too
	if ((in<10000)||(in>999999)) {
		cout << "Too small or too big input number" << endl;
		return false;
	}
	// "magic"
	if (in<100000) { // 5 digit numbers
		//TODO if can not find 6 digit number palindrome
	} else { // 6 digit numbers
		// Remove last digit->another digit*10+removed 3 times
		// if new digit and cutted down digits are same: palindrome
		int digit=0;
		digit=digit*10+removeLast(in);
		digit=digit*10+removeLast(in);
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

}
