#include <iostream>

int calcChain(long);
long next(long);

int main(int argc, char const *argv[])
{
        int longest=0;
        int steps=0;
        for (int i=2; i<=1000000; i++) {
                if (calcChain(i)>steps) {
                        steps=calcChain(i);
                        longest=i;
                }
        }
        std::cout << "Longest chain starts with:" << longest << std::endl;
        return 0;
}

int calcChain(long n)
{
        int count=0;
        while (n!=1) {
                n=next(n);
                count++;
        }
        return count;
}

long next(long n)
{
        if (n%2)
                return 3*n+1;
        else
                return n/2;
}
