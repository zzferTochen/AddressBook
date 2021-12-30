#include <iostream>
#include<string>
using namespace std;

#define MAX 1000
//联系人实体
struct  Person{
    string p_name;
    int p_sex; //性别
    int p_age;
    string p_phone; //电话
    string p_address;
};

//通讯录实体
struct AddressBooks{
    struct Person personArray[MAX];
    int m_size; //通讯录的人数
};

void addPerson(AddressBooks *abs){
    if(abs->m_size>=MAX){
        cout<<"通讯录已满，无法添加";
    }else{
        string name;
        cout<<"请输入姓名"<<endl;
        cin>>name;
        abs->personArray[abs->m_size].p_name = name;

        cout<<"请输入性别：1-男生，2-女生"<<endl;
        int sex =0 ;
        while (true){
            cin>>sex;
            if(sex ==1 || sex==2){
                abs->personArray[abs->m_size].p_sex = sex;
                break;
            }
            cout<<"请输入正常的数字"<<endl;
        }

        cout<<"请输入年龄:"<<endl;
        int age = 0;
        cin>>age;
        abs->personArray[abs->m_size].p_age = age;

        cout<<"请输入联系电话:"<<endl;
        string phone="";
        cin>>phone;
        abs->personArray[abs->m_size].p_phone = phone;

        cout<<"请输入家庭住址:"<<endl;
        string address="";
        cin>>address;
        abs->personArray[abs->m_size].p_address = address;

        abs->m_size++;

        cout<<"添加成功"<<endl;
//        system("pause");
        system("cls");
    }
}


//显示联系人
void showAddressBooks(AddressBooks *abs){
    int size = abs->m_size;
    if(size==0){
        cout<<"当前记录未空"<<endl;
    }else{
        for (int i = 0; i < size; ++i) {
            cout<<"姓名："<<abs->personArray[i].p_name<<"\t";
            cout<<"性别："<<abs->personArray[i].p_sex<<"\t";
            cout<<"年龄："<<abs->personArray[i].p_age<<"\t";
            cout<<"电话："<<abs->personArray[i].p_phone<<"\t";
            cout<<"住址："<<abs->personArray[i].p_address<<"\t";
        }
    }
}

void showMenu(){
    cout<<"1.添加联系人"<<endl;
    cout<<"2.显示联系人"<<endl;
    cout<<"3.删除联系人"<<endl;
    cout<<"4.查找联系人"<<endl;
    cout<<"5.修改联系人"<<endl;
    cout<<"6.清空联系人"<<endl;
    cout<<"0.退出通讯录"<<endl;
}

int main() {

    int select = 0; //用户输入

    //初始化通讯录
    AddressBooks abs;
    abs.m_size=0;

    //菜单调用
    while(true){
        showMenu();

        //用户输入
        cin>>select;

        switch (select) {
            case 1:
                //添加联系人
                addPerson(&abs);
                break;
            case 2:
                //显示联系人
                showAddressBooks(&abs);
                break;
            case 3:
                //删除联系人
                break;
            case 4:
                //查找联系人
                break;
            case 5:
                //修改联系人
                break;
            case 6:
                //清空联系人
                break;
            case 0:
                //添加联系人
                cout<<"欢迎下次使用！！";
                return 0;
                break;
            default:
                break;
        }
    }
}
