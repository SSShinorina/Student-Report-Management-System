#include <iostream>

using namespace std;

class student{
int rollno;
char name[50];
int eng_marks, math_marks, sci_marks, lang2_marks, cs_marks;
double average;
char grade;

public:
    void getdata();
    void showdata() const;
    void calculate();
    int retrollno() const;
};

void student::calculate(){
    average = (eng_marks+math_marks+sci_marks+lang2_marks+cs_marks)/5.0;
    if (average>=90)
        grade = "A";
    else if (average>=75)
        grade = "B";
    else if (average>=50)
        grade = "C";
    else
    grade = "F";
}

void student::getdata(){
    cout<<"\nEnter student's roll number: ";
    cin>>rollno;
    cout<<"\n\nEnter student's name: ";
    cin.ignore();
    cin.getline(name,50);
    cout<<"\nAll marks should be out of 100";
    cout<<"\nEnter English marks: ";
    cin>>eng_marks;
    cout<<"\nEnter Math marks: ";
    cin>>math_marks;
    cout<<"\nEnter Science marks: ";
    cin>>sci_marks;
    cout<<"\nEnter 2nd language marks: ";
    cin>>lang2_marks;
    cout<<"\nEnter Computer science marks: ";
    cin>>cs_marks;
    calculate();
}

void student::showdata() const{
    cout<<"\nStudent roll number: "<<rollno;
    cout<<"\nStudent name: "<<name;
    cout<<"\nEnglish marks: "<<eng_marks;
    cout<<"\nMath marks: "<<math_marks;
    cout<<"\nScience marks: "<<sci_marks;
    cout<<"\n2nd language marks: "<<lang2_marks;
    cout<<"\nComputer science marks: "<<cs_marks;
    cout<<"\nAverage marks is: "<<average;
    cout<<"\nGrade is: "<<grade;
}

int student::retrollno() const{
    return rollno;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
