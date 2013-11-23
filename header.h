#include <iostream>
using namespace std;
//职工类（父类）
class CStaff{
private:
        int staff_id;
        char name[];
        char sex;
        int service_years;
        long salary;
public:
       void setNo(int id);
 //如何传字符串？
       void setName(string name);
       void setSex(char sex);
       void setServiceYears(int service_years);

       int getNo();
 //如何返回字符串？
       string getName();
       char getSex();
       int getServiceYears();
       long getSalary();
};
void CStaff::setNo(int id){
    this->staff_id=id;
}
void CStaff::setName(string name){
    this->name[]=name;
}
void CStaff::setSex(cahr sex){
    this->sex=sex;
}
void CStaff::setServiceYears(int service_years){
    this->service_years=service_years;
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
long CStaff::getSalary(){
    return salary;
}

//临时人员(CStaff)
class CTempStaff extent CStaff{
public:
    long getSalary();
};
CTempStaff(){
    this->salary=1000;
}
CTempStaff::getSalary(){
    return salary;
}

//行政人员(CStaff)
class CAdministrator extent CStaff{

};

//教师(CStaff)
class CTeacher extent CStaff{

};




