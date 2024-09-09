
class StudentValidation{
    public:
     int ValidteStudent(Student student){
        if(student.get_name().size()==0 || student.get_name().size()> 7 || student.get_name().size()<4){
            cout<<"Invalid Name !"<<endl;
        }else if(student.get_age() >= 30 || student.get_age()<=18){
             cout<<"Invalid age !"<<endl;
        }else if( student.get_phoneNumber()[0]!='7' || student.get_phoneNumber().size()!=9){
        cout<<"Invalid phoneNumber !"<<endl;
        }else if(student.get_gpa()>=100 || student.get_gpa()<0){
            cout<<"Invlid GPA !"<<endl;
        }else{
        return 1;
     } 
     return -1;
     }
};

class CourseValidation{
 public:
     int ValidteCourse(Course course){
        if(course.get_name().size() ==0 || course.get_name().size() <4){
            cout<<"Invalid Name !"<<endl;
        }else if(course.get_hour() <2 ){
            cout<<"Invalid hour !"<<endl;    
        }else{
        return 1;
     }
      return -1;
     }
};

class TeacherValidation{
 public:
     int ValidteTeacher(Teacher teacher){
        if(teacher.get_name().size()==0 || teacher.get_name().size()> 7 || teacher.get_name().size()<4){
            cout<<"Invalid Name !"<<endl;
        }else if(teacher.get_age() < 25 || teacher.get_age()>50){
             cout<<"Invalid age !"<<endl;
        }else if( teacher.get_phoneNumber()[0]!='7' || teacher.get_phoneNumber().size()!=9){
        cout<<"Invalid phoneNumber !"<<endl;
        }else if(teacher.get_salary() < 3000){
            cout<<"Invalid Salary !"<<endl;
        }else{
            return 1;
        }
        return -1;
     }
};

class ValidationService{
public:
void FullData(string type){
    cout<<"Full "<<type<<" !"<<endl;
}
void NotExist(string type,int id){
    cout<<type<<" With Id ["<<id<<"] Not Exist"<<endl;
}    
void NotExist(string type,string name){
    cout<<type<<" With Name ["<<name<<"] Not Exist"<<endl;
}    
};