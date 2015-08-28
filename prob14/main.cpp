#include <iostream>

int next(int);

int main(int argc, char const *argv[])
{
        std::cout << "next:" << next(34) << std::endl;
        return 0;
}

int next(int n)
{
        if (n%2)
                return 3*n+1;
        else
                return n/2;
}
