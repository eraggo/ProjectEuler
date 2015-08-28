#include <iostream>

int calcChain(int);
int next(int);

int main(int argc, char const *argv[])
{
        std::cout << "Chain:" << calcChain(5) << std::endl;
        return 0;
}

int calcChain(int n)
{
        int count=1;
        while (n!=1)
        {
                n=next(n);
                count++;
        }
        return count;
}

int next(int n)
{
        if (n%2)
                return 3*n+1;
        else
                return n/2;
}
