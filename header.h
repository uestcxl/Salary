#include <iostream>
using namespace std;
//ְ���ࣨ���ࣩ
class CStaff{
private:
        int staff_id;
        char name[];
        char sex;
        int service_years;
        long salary;
public:
       void setNo(int id);
 //��δ��ַ�����
       void setName(string name);
       void setSex(char sex);
       void setServiceYears(int service_years);

       int getNo();
 //��η����ַ�����
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
//�Ժ�ᱻ����
long CStaff::getSalary(){
    return salary;
}

//��ʱ��Ա(CStaff)
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

//������Ա(CStaff)
class CAdministrator extent CStaff{

};

//��ʦ(CStaff)
class CTeacher extent CStaff{

};




