#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    int array[] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
    int lenghtArray = sizeof(array)/sizeof(array[0]);

    int indexOutputValue;
    cout<<"Enter the index of the displayed item: ";
    while (true)
    {
        cin>>indexOutputValue;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767,'\n');
            cout<<"Invalid input"<<endl;
        }
        else if ((indexOutputValue<1)||(indexOutputValue>10))
        {
            cin.ignore(32767,'\n');
            cout<<"Invalid input"<<endl;
        }
        else
            break;
    }

    for (int i {0};i<lenghtArray;i++)
        std::cout<<array[i]<<std::endl;

    cout<<array[indexOutputValue];

    return 0;
}
