#include <iostream>
#include "header.h" //*
using namespace std;

void Create();
void View();
void Update();
void Delete();
int main()
{
    //显示菜单前先把数据从文件中读出来
    //用链表

    //菜单
    int menu;
    cout << "Welcome To Salary Manager!" << endl;
    while(1){
        cout << endl;
        cout << "Menu :" << endl;
        cout << "1.Create" << endl;
        cout << "2.View" << endl;
        cout << "3.Update" << endl;
        cout << "4.Delete" << endl;
        cout << "Please choose what do you want to do : (0 for exit)" << endl;
        cin >> menu;
        switch(menu){
            case 0: return 0;
            case 1: Create(); break;
            case 2: View(); break;
            case 3: Update(); break;
            case 4: Delete(); break;
            default: cout << "Please choose integer num 1-4,and 0 for exit." << endl;
        }
    }
    return 0;
}
void Create(){
    cout << "You choose Create." << endl;
}
void View(){

}
void Update(){

}
void Delete(){

}
