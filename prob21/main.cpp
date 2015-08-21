#include <iostream>

int sumOfFact(int);

int main(int argc, char const *argv[])
{
        std::cout << sumOfFact(978) << std::endl;
        return 0;
}

int sumOfFact(int n)
{
        int sum=0;
        for (int i = 1; i < n; i++) {
                if (!(n%i))
                        sum+=i;
        }
        return sum;
}
