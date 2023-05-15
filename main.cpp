//

//  main.cpp

//  project

//

//  Created by Bayan Alkas on 11/27/21.

//



#include <iostream>
#include <string>

using namespace std;

class uniCourceIdNum{
public:
    void SetCourseID(int num);
    void SetDeptCourse(int course, int section);
    void SetNumCredit(int creditCourse);
    void SetDayTime(string day, string time);
    void SetRoomNum(int roomMeeting1, int roomMeeting2);
    void SetCourseEnrollment(int enrollmentMax);
    void SetCourseCampus(string CampusHeld);
    void SetCourseInstructor(string instructor);
    void SetNumStudent(int studentEnrlled);
    void SetStatus(string courseStatus);
    void print();

private:
    int courseID = 20202034;
    int deptCourse[2] = {150, 151};
    int numCredit = 210;
    string dayTime[5] = {"Monday, Wednesday","9:45AM - 11:30AM"};
    int RoomNum[2] = { 1190 , 1157 };
    int CourseEnrollment = 36;
    string CourseCampus = "Social studies building";
    string CourseInstructor = "Moe Johnson";
    int NumStudent = 14;
    int numStuAvailable = 0;
    string Status = "open";
};

void uniCourceIdNum::SetCourseID(int num){
    courseID = num;
}
void uniCourceIdNum::SetDeptCourse(int course, int section){
    deptCourse[0] = course;
    deptCourse[1] = section;
}
void uniCourceIdNum::SetNumCredit(int creditCourse){
    numCredit = creditCourse;
}
void uniCourceIdNum::SetDayTime(string day, string time){
    dayTime[0] = day;
    dayTime[1] = time;
}
void uniCourceIdNum::SetRoomNum(int roomMeeting1, int roomMeeting2){
    RoomNum[0] = roomMeeting1;
    RoomNum[1] = roomMeeting2;
}
void uniCourceIdNum::SetCourseEnrollment(int enrollmentMax){
    CourseEnrollment = enrollmentMax;
}
void uniCourceIdNum::SetCourseCampus(string CampusHeld){
    CourseCampus = CampusHeld;
}
void uniCourceIdNum::SetCourseInstructor(string instructor){
    CourseInstructor = instructor;
}
void uniCourceIdNum::SetNumStudent(int studentEnrlled){
    numStuAvailable = studentEnrlled;
        for (int i = 0; i<studentEnrlled; i++){
        string NumAvailable;
        cout<<"Enter name of student: ";
        cin>>NumAvailable;
    }
}
void uniCourceIdNum::SetStatus(string courseStatus){
    Status = courseStatus;
}
void uniCourceIdNum::print (){
    cout<<"The course identification number for the university is: "<<courseID<<endl;
    cout<<"Department course id is: "<<deptCourse[0]<<" ,and section number: "<<deptCourse[1]<<endl;
    cout<<"Number of credits for this course: "<<numCredit<<endl;
    cout<<"Days and times the course meets: "<<dayTime[0]<<" "<<dayTime[1]<<endl;
    cout<<"Room in which the course meets: "<<RoomNum[0]<<" , "<<RoomNum[1]<<endl;
    cout<<"Maximum course enrollment: "<<CourseEnrollment<<endl;
    cout<<"Campus on which the course is held: "<<CourseCampus<<endl;
    cout<<"Name of the course instructor: "<<CourseInstructor<<endl;
    cout<<"Number of students currently enrolled: "<<numStuAvailable<<endl;
    cout<<"Course status: "<<Status<<endl;
}

int main(){
   uniCourceIdNum UniversityInfo;
    string s;
    cout<<"Enter the name of the course instructor: ";
    cin>>s;
    UniversityInfo.SetStatus(s);
    cout<<"Enter the number of the student to enroll: ";
    int n;
    cin>>n;
    UniversityInfo.SetNumStudent(n);
    cout<<"Enter the course status: ";
    cin>>s;
    UniversityInfo.SetStatus(s);
    cout<<"                                     "<<endl;
    UniversityInfo.print();
    cout<<endl;
    cout<<"========Updated information========="<<endl;
    cout<<endl;
    int maxVal = 40;
    cout<<"Enter the max enrollment again: ";
    cin>>maxVal;
    UniversityInfo.SetCourseEnrollment(maxVal);
    int creditsVal = 5;
    cout<<"Enter the credits max again: ";
    cin>>creditsVal;
    UniversityInfo.SetNumCredit(creditsVal);
    string courseavAilablility = "waiting list";
    cout<<"Enter the cource status again: ";
    cin>>courseavAilablility;
    UniversityInfo.SetStatus(courseavAilablility);
    
    cout<<endl;
    cout<<"---------------------------After update---------------------------"<<endl;
    cout<<endl;
    

    UniversityInfo.print();
    return 0;
}


