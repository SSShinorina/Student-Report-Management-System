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
        grade = 'A';
    else if (average>=75)
        grade = 'B';
    else if (average>=50)
        grade = 'C';
    else
    grade = 'F';
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

void create_student();
void dipslay_sp(int);
void display_all();
void delete_student(int);
void change_student(int);

int main()
{
    char ch;
    //cout<<setprecision(2);
    do{
        char ch;
        int num;
        system("cls");
        cout<<"\n\n\n\tMENU";
        cout<<"\n\n\t1.Create Student Record";
        cout<<"\n\n\t2.Search Student Record";
        cout<<"\n\n\t3.Display All Student Record";
        cout<<"\n\n\t4.Delete Student Record";
        cout<<"\n\n\t5.Modify Student Record";
        cout<<"\n\n\t6.Exit";
        cout<<"\n\nWhat is your choice (1/2/3/4/5/6)?";
        cin>>ch;
        system("cls");
        switch(ch){
            case '1': create_student();
            break;
            case '2': cout<<"\n\n\tEnter the student roll number: ";
            cin>>num;
            dipslay_sp(num);break;
            case '3': display_all();break;
            case '4': cout<<"\n\n\tEnter the roll number: ";
            cin>>num;
            delete_student(num);break;
            case '5': cout<<"\n\n\tEnter the roll number: ";
            cin>>num;
            change_student(num);break;
            case '6': cout<<"Exiting, Thank You !!!";
            exit(0);
        }

    }
    while(ch!='6');
    return 0;
}
void create_student(){
}

void display_all(){
}

void dipslay_sp(int n){
}

void delete_student(int n){
}

void change_student(int n){
}
