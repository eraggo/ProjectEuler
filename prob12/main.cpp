#include <iostream>

int countDivs(int); // how many divisors input has?
bool canDivide(int,int); // not sure how big answer is yet

int main(int argc, char const *argv[])
{
        int current=491*499;
        while (countDivs(current)<500) {
                current+=1;
                if (!(current%10000))
                        std::cout << current << std::endl;
        }

        std::cout << current << std::endl;
        return 0;
}

int countDivs(int n)
{
        int amount=1;
        for (int i=1; i<n; i++)
        {
                if (canDivide(n,i))
                        amount++;
        }
        return amount;
}

bool canDivide(int n, int i)
{
        if (n%i)
                return false;
        return true;
}
