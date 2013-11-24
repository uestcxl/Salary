#include <iostream>
#include <string>
using namespace std;
//ְ���ࣨ���ࣩ
class CStaff{
private:
        int staff_id;
        string name;
        char sex;
        int service_years;
public:
        int salary;
       int setNo();
       int setName();  //��δ��ַ�����
       int setSex();
       int setServiceYears();

       int getNo();
       string getName();   //��η����ַ�����
       char getSex();
       int getServiceYears();
       int getSalary();
};
int CStaff::setNo(){
    int id;
    cout << "������Ա����ID��" << endl;
    cin >> id;
    this->staff_id=id;
    return 1;
}
int CStaff::setName(){
    string name;
    cout << "������Ա��������" << endl;
    getline(cin,name);
    this->name=name;
    return 1;
}
int CStaff::setSex(){
    char sex;
    cout << "Ա���Ա�" << endl;
    cin >> sex;
    this->sex=sex;
    return 1;
}
int CStaff::setServiceYears(){
    int service_years;
    cout << "Ա�����䣺" << endl;
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
//�Ժ�ᱻ����
int CStaff::getSalary(){
    return this->salary;
}

//��ʱ��Ա(CStaff)
class CTempStaff:public CStaff{
public:
    CTempStaff(){
        this->salary=1000;
    }
};

//������Ա(CStaff)
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

//��ʦ(CStaff)
class CTeacherL:public CStaff{

};




