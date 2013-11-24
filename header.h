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
int CStaff::setNo(){
    int id;
    cout << "请输入员工的ID：" << endl;
    cin >> id;
    this->staff_id=id;
    return 1;
}
int CStaff::setName(){
    string name;
    cout << "请输入员工姓名：" << endl;
    getline(cin,name);
    this->name=name;
    return 1;
}
int CStaff::setSex(){
    char sex;
    cout << "员工性别：" << endl;
    cin >> sex;
    this->sex=sex;
    return 1;
}
int CStaff::setServiceYears(){
    int service_years;
    cout << "员工工龄：" << endl;
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
        int setPostSalary(int post_salary);
        int getSalary();
};
CAdministrator::CAdministrator(){
    this->base_salary=1500;
    this->base_service_salary=200;
    this->post_salary=0;
    this->salary=0;
}
int CAdministrator::setPostSalary(int post_salary){
    this->post_salary=post_salary;
    return 1;
}
int CAdministrator::getSalary(){
    int years=this->getServiceYears();
    return this->base_salary+this->base_service_salary*years+this->post_salary;
}

//教师(CStaff)
class CTeacherL:public CStaff{

};




