#include <iostream>
#include <vector>
using namespace std;

class Student{
    private:
        int rollno, age;
        string name;
    public:
        Student(int stdRollNo, int Age, string stdName){
            rollno = stdRollNo;
            age = Age;
            name = stdName;
        }
        void setRollno(int stdRollno){
            rollno = stdRollno;
        }
        int getRollno(){
            return rollno;
        }
        void setName(string StdName){
            name = StdName;
        }
        string getName(){
            return name;
        }
        void setAge(int Stdage){
            age = Stdage;
        }
        int getAge(){
            return age;
        }
};
void addNewStudent(vector<Student> &student){
    int rollNo, age;
    string name;
    cin>>age;
    cin>>name;
    enter_rollNo:
    cin>>rollNo;
    for (int i=0; i<student.size(); i++){
        if (student[i].getRollno() == rollNo){
            cout << "fucked up\n";
            goto enter_rollNo;
        }
    }
    Student new_student(rollNo, age, name);
    student.push_back(new_student);
}
void dispStudent(vector<Student> &students){
    for (int i=0; i<students.size(); i++){
        cout << students[i].getRollno() << students[i].getName() << students[i].getAge() << '\n';
    }
}
void deleteStudent(vector<Student> &students){
    int rollNo;
    cin >> rollNo;
    for (int i=0; i<students.size(); i++){
        if (students[i].getRollno()==rollNo){
            students.erase((students.begin()+i));
        }
    }
}
int main(){
    vector<Student> students;
    students.push_back(Student(1, 20, "ali"));
    int op;
    while(1){
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "add student Age, Name, Id\n";
            addNewStudent(students);
            break;
        case 2:
            cout << "delete student Id\n";
            deleteStudent(students);
            break;
        
        default:
            dispStudent(students);
            break;
        }
        
        
    }
    return 0;
}