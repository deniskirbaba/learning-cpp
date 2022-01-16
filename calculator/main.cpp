#include <iostream>

using arithmeticFcn = int(*)(int,int);

struct ArithmeticStruct
{
    char operation;
    arithmeticFcn fcn;
};

int GetUserNumber()
{
    using namespace std;
    int number;

    cout<<"Enter number: ";
    while (true)
    {
        cin>>number;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767,'\n');
            cout<<"Incorrect input, repeat please: ";
        }
        else
        {
            cin.ignore(32767,'\n');
            break;
        }
    }

    return number;
}

char GetUserOperation()
{
    using namespace std;
    char operation;

    cout<<"Enter operation: ";

    while (true)
    {
        cin>>operation;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767,'\n');
            cout<<"Incorrect input, repeat please: ";
        }
        else if (operation=='+'||operation=='-'||operation=='*'||operation=='/')
        {
            cin.ignore(32767,'\n');
            break;
        }
        else
        {
            cin.ignore(32767,'\n');
            cout<<"Incorrect input, repeate please: ";
        }
    }
    return operation;
}

int Add(int a, int b)
{
    return a + b;
}

int Substract(int a,int b)
{
    return a - b;
}

int Multiply(int a,int b)
{
    return a * b;
}

int Divide(int a,int b)
{
    return a / b;
}

static ArithmeticStruct arithmeticArray[] = {{'+', Add},{'-',Substract},{'*',Multiply},{'/',Divide}};

arithmeticFcn getArithmeicFcn(char operation)
{
    for (auto &arith : arithmeticArray)
    {
        if (arith.operation == operation)
            return arith.fcn;
    }
}

int main()
{
    int first = GetUserNumber();
    char operation = GetUserOperation();
    int second = GetUserNumber();

    arithmeticFcn fcn = getArithmeicFcn(operation);
    std::cout<<first<<' '<<operation<<' '<<second<<" = "<<fcn(first,second)<<'\n';

    return 0;
}
