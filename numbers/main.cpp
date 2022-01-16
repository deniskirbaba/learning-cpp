#include <iostream>

class Numbers
{
    double m_first;
    double m_second;
    double m_third;

public:

    void set(double first, double second, double third)
    {
        m_first=first;
        m_second=second;
        m_third=third;
    }

    void print()
    {
        std::cout<<'<'<<m_first<<','<<m_second<<','<<m_third<<'>'<<'\n';
    }

    bool isEqual(const Numbers &number)
    {
        return (m_first==number.m_first&&m_second==number.m_second&&m_third==number.m_third);
    }
};

int main()
{
    Numbers point1;
    point1.set(3.0, 4.0, 5.0);

    Numbers point2;
    point2.set(3.0, 4.0, 5.0);

    if (point1.isEqual(point2))
        std::cout << "point1 and point2 are equal\n";
    else
        std::cout << "point1 and point2 are not equal\n";

    Numbers point3;
    point3.set(7.0, 8.0, 9.0);

    if (point1.isEqual(point3))
        std::cout << "point1 and point3 are equal\n";
    else
        std::cout << "point1 and point3 are not equal\n";

    return 0;
}
