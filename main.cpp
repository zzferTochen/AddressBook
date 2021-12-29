#include <iostream>
using namespace std;

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

    //菜单调用
    while(true){
        showMenu();

        //用户输入
        cin>>select;

        switch (select) {
            case 1:
                //添加联系人
                break;
            case 2:
                //显示联系人
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
