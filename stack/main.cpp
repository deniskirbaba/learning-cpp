#include <iostream>
#include <cassert>

class Stack
{

    int array[10];
    int length;

public:

    void reset()
    {
        for (auto &x:array)
            x=0;
        length=0;
    }

    bool push(int value)
    {
        if (length==10)
            return false;
        else
            array[length]=value;
        ++length;
        return true;
    }

    int pop()
    {
        assert(length!=0);
        for (int i=0;i<length-1;++i)
            std::swap(array[i],array[i+1]);
        int value=array[length];
        array[length]=0;
        --length;
        return value;
    }

    void print()
    {
        std::cout<<'<';
        for (int i=0;i<length;++i)
            std::cout<<array[i]<<' ';
        std::cout<<">\n";
    }
};

int main()
{
    Stack stack;
    stack.reset();

    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();

    stack.pop();

    stack.print();

    return 0;
}
