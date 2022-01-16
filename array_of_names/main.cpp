#include <iostream>
#include <string>

int main()
{
    int numberOfNames = 8;
    std::string arrayOfNames[numberOfNames]{"Sasha", "Ivan", "John", "Orlando", "Leonardo", "Nina", "Anton", "Molly"};

    std::string userName;
    std::cout<<"Enter your name: ";
    std::cin>>userName;

    bool isUserNameInArray = false;

    for (const auto &name:arrayOfNames)
    {
        if (name==userName)
            isUserNameInArray = true;
    }

    if (isUserNameInArray)
        std::cout<<"Your name is in array.";
    else
        std::cout<<"Your name isn't in array.";

    return 0;
}
