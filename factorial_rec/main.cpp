#include <iostream>

void factorial(int x,long long& result)
{
    while (x>1)
    {
        result*=x;
        factorial(x-1,result);
        break;
    }
}

int main()
{
    int x;
    std::cin>>x;
    long long result{1};
    factorial(x,result);
    std::cout<<result;

    return 0;
}
