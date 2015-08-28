#include <iostream>

int sumOfFact(int);

int main(int argc, char const *argv[])
{
        bool pair[1000];
        int a;
        for (int i=1; i<1000; i++) {
                a=sumOfFact(i);
                if (sumOfFact(a)==a)
                        std::cout << a << std::endl;
        }
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
