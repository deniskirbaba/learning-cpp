#include <iostream>
#include <string>

using std::cout,std::cin,std::endl,std::string,std::swap;

int main()
{
    cout<<"How many names would you like to enter? ";
    int numberOfNames;
    cin>>numberOfNames;

    string *arrayOfNames = new string[numberOfNames];

    for (int i=1;i<=numberOfNames;i++)
    {
        cout<<"Enter name #"<<i<<":";
        cin>>arrayOfNames[i-1];
    }

    for (int i=0;i<=numberOfNames-1;i++)
    {
        for (int j=i+1;j<=numberOfNames-1;j++)
        {
            if (arrayOfNames[j]<arrayOfNames[i])
                swap(arrayOfNames[j],arrayOfNames[i]);
        }
    }

    for (int i=1;i<=numberOfNames;i++)
    {
        cout<<"Name #"<<i<<" "<<arrayOfNames[i-1]<<'\n';
    }

    return 0;
}
