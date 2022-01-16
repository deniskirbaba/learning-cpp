#include <iostream>
#include <string>
#include <utility>
#include <algorithm>

struct StudentAndMark
{
    std::string name;
    int mark;
};

int NumberOfStudents()
{
    using namespace std;
    int numberOfStudents;

    cout<<"Enter number of students: ";
    cin>>numberOfStudents;

    return numberOfStudents;
}

void RecordStudent(int numberOfStudents, StudentAndMark* students)
{
    using namespace std;

    for (int k=0;k<numberOfStudents;++k)
    {
        cout<<"Enter name and mark: ";
        cin>>students[k].name>>students[k].mark;
    }
}

void OutputStudents(int numberOfStudents,StudentAndMark* students)
{
    using namespace std;

    for (int k=0;k<numberOfStudents;++k)
    {
        cout<<students[k].name<<' '<<students[k].mark<<'\n';
    }
}

void SortStudents(int left,int right,StudentAndMark* students)
{
    StudentAndMark pivot = students[left];
    int lll = left;
    int rrr = right;

    while (left<right)
    {
        while ((students[right].mark<=pivot.mark)&&(left<right))
            --right;

        if (left!=right)
        {
            students[left]=students[right];
            ++left;
        }

        while ((students[left].mark>=pivot.mark)&&(left<right))
            ++left;

        if (left!=right)
        {
            students[right]=students[left];
            --right;
        }
    }

    students[left]=pivot;
    pivot.mark=left;
    left=lll;
    right=rrr;
    if (left<pivot.mark)
        SortStudents(left,pivot.mark-1,students);
    if (right>pivot.mark)
        SortStudents(pivot.mark+1, right,students);
}

/*void BestStudent(StudentAndMark* student)
{
    std::cout<<std::max_element(student.begin(),student.end(),std::greater);
}*/

int main()
{
    int numberOfStudents=NumberOfStudents();
    StudentAndMark* students = new  StudentAndMark[numberOfStudents];
    RecordStudent(numberOfStudents,students);
    SortStudents(0,numberOfStudents-1,students);
    OutputStudents(numberOfStudents,students);
    //BestStudent(students);
    std::cout<<std::max_element(students[0],students[numberOfStudents],std::greater){};
    delete[] students;

    return 0;
}
