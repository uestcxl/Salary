#include <iostream>
#include <string>
using namespace std;
//职工类（父类）
class CStaff{
private:
        int staff_id;
        string name;
        char sex;
        int service_years;
public:
        CStaff();
        int salary;
       int setNo();
       int setName();  //如何传字符串？
       int setSex();
       int setServiceYears();

       int getNo();
       string getName();   //如何返回字符串？
       char getSex();
       int getServiceYears();
       int getSalary();
};
CStaff::CStaff(){
    this->salary=0;
}
int CStaff::setNo(){
    int id;
    cout << "Please input the ID：" << endl;
    cin >> id;
    this->staff_id=id;
    return 1;
}
int CStaff::setName(){
    string name;
    cout << "Name：" << endl;
    getline(cin,name);
    this->name=name;
    return 1;
}
int CStaff::setSex(){
    char sex;
    cout << "Sex：" << endl;
    cin >> sex;
    this->sex=sex;
    return 1;
}
int CStaff::setServiceYears(){
    int service_years;
    cout << "Service Years：" << endl;
    cin >> service_years;
    this->service_years=service_years;
    return 1;
}
int CStaff::getNo(){
    return staff_id;
}
string CStaff::getName(){
    return name;
}
char CStaff::getSex(){
    return sex;
}
int CStaff::getServiceYears(){
    return service_years;
}
//以后会被重载
int CStaff::getSalary(){
    return this->salary;
}

//临时人员(CStaff)
class CTempStaff:public CStaff{
public:
    CTempStaff(){
        this->salary=1000;
    }
};

//行政人员(CStaff)
class CAdministrator:public CStaff{
private:
        int base_salary;
        int base_service_salary;
        int post_salary;
public:
        CAdministrator();
        CAdministrator(int post);
        int getSalary();
};
CAdministrator::CAdministrator(){
    this->base_salary=1500;
    this->base_service_salary=200;
    this->post_salary=0;
    this->salary=0;
}
CAdministrator::CAdministrator(int post){
    this->base_salary=1500;
    this->base_service_salary=200;
    this->post_salary=post;
    this->salary=0;
}
int CAdministrator::getSalary(){
    int years=this->getServiceYears();
    return base_salary+base_service_salary*years+post_salary;
}


//教师(CStaff)
class CTeacherL:public CStaff{
private:
        int base_salary;
        int base_service_salary;
        int class_salary;
        int class_num;
        int msr_salary;
        int dor_salary;
public:
        CTeacherL();
        CTeacherL(int msr);
        CTeacherL(int msr,int dor);
        int setClassNum();
        int getSalary();
};
CTeacherL::CTeacherL(){
    this->base_salary=2000;
    this->base_service_salary=200;
    this->class_salary=12;
    this->class_num=0;
    this->msr_salary=0;
    this->dor_salary=0;
    this->salary=0;
}
CTeacherL::CTeacherL(int msr){
    this->base_salary=2000;
    this->base_service_salary=200;
    this->class_salary=15;
    this->class_num=0;
    this->msr_salary=msr;
    this->dor_salary=0;
    this->salary=0;
}
CTeacherL::CTeacherL(int msr,int dor){
    this->base_salary=2000;
    this->base_service_salary=200;
    this->class_salary=20;
    this->class_num=0;
    this->msr_salary=msr;
    this->dor_salary=dor;
    this->salary=0;
}
int CTeacherL::setClassNum(){
    int num;
    cout << "Please input how many classes you teach :" << endl;
    cin >> num;
    this->class_num=num;
    return 1;
}
int CTeacherL::getSalary(){
    int years=this->getServiceYears();
    return base_salary+base_service_salary*years+class_salary*class_num+msr_salary+dor_salary;
}




