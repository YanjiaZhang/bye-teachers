#include <iostream>
using namespace std;
char input;
int choose();
//关闭汪老师
int closewang()
{
	system("title 再见汪老师");
	system("color 17");
	system("taskkill /im StudentMain.exe /f");
	system("cls");
	cout<<"--------------------------------------------------"<<endl;
	cout<<"汪老师被你关了。"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	system("pause");
	system("color 07");
	system("cls");
	choose();
}
//关闭史老师 
int closeshi()
{
	system("title 再见史老师");
	system("color 17");
	system("taskkill /im Student.exe /f");
	system("cls");
	cout<<"--------------------------------------------------"<<endl;
	cout<<"史老师被你关了。"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	system("pause"); 
	system("color 07"); 
	system("cls");
	choose();
} 
//打开汪老师
int openwang()
{
/*	system("cls");
	system("title 你好汪老师");
	system("color 17");
	system("cd Desktop");
	system("")
	cout<<"--------------------------------------------------"<<endl;
	cout<<"汪老师被你打开了。"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	system("pause"); 
	system("color 07");*/
	system("cls");
	choose();
} 
//打开史老师
int openshi()
{
/*	system("cls");
	system("title 你好史老师");
	system("color 17");
	system("cd C:\Program Files (x86)\gakataka\Student");
	system("Student.exe");
	cout<<"--------------------------------------------------"<<endl;
	cout<<"史老师被你打开了。"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	system("pause"); 
	system("color 07");*/
	system("cls");
	choose();
} 
//自爆模式 
int zibao()
{
	char zibao_method;
	system("cls");
	system("title 自爆模式");
	cout<<"自爆模式已启动，请选择自爆方法："<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<"结束生命，请按1"<<endl;
	cout<<"笑一笑，请按2"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<"输入：";
	cin>>zibao_method;
	switch (zibao_method)
	{
		case '1':
			system("cls");
			system("color F0");
			cout<<"--------------------------------------------------"<<endl;
			cout<<"即将关闭电脑……"<<endl;
			cout<<"--------------------------------------------------"<<endl;
			system("pause");
			system("shutdown /s /f /d 6:11");
			break; 
		case '2':
			system("cls");
			system("color F0");
			cout<<"--------------------------------------------------"<<endl;
			cout<<"即将开始大笑……"<<endl;
			cout<<"--------------------------------------------------"<<endl;
			system("pause");
			for(int i=1;i>0;i++)
				cout<<"哈";
			break;
		default:
			cout<<"--------------------------------------------------"<<endl;
			cout<<"输入错误，请重新输入！"<<endl;
			cout<<"--------------------------------------------------"<<endl;
			system("pause");
			system("cls");
			zibao();
			break;
	}

} 
//关于
int about()
{
	system("cls");
	system("color F0");
	cout<<"Student Application Closing System (Console Edition)"<<endl;
	cout<<"Version:1.1-bulid20180515-release"<<endl;
	system("pause");
	choose();
} 
//发布笔记
int releasenote()
{
	system("cls");
	system("color F0");
	system("type release_note.txt");
	cout<<endl;
	cout<<"看不全？向上拉！"<<endl<<endl;
	system("pause");
	choose();
} 
//选择模块 
int choose()
{
		system("title 老师再见发布版");
		system("color 07");
		system("cls"); 
		cout<<"--------------------------------------------------"<<endl;
		cout<<"关掉汪老师，请按1"<<endl;
		cout<<"关掉史老师，请按2（研发中……）"<<endl;
		cout<<"打开汪老师，请按3（研发中……）"<<endl;
		cout<<"打开史老师，请按4（研发中……）"<<endl; 
		cout<<"启动自爆模式，请按9"<<endl;
		cout<<"关于，请按0"<<endl; 
		cout<<"阅读发布笔记，请按R"<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<"输入：";
		cin>>input;
		switch (input)
		{
			case '1':
				closewang();break;
			case '2':
				closeshi();break;
			case '3':
				openwang();break;
			case '4':
				openshi();break;
			case '9':
				zibao();break;
			case '0':
				about();break;
			case 'R':
				releasenote();break;
			case 'r':
				releasenote();break;
			default:
				cout<<"--------------------------------------------------"<<endl;
				cout<<"输入错误，请重新输入！"<<endl;
				cout<<"--------------------------------------------------"<<endl;
				system("pause");
				system("cls");
				choose();
				break;
		}
}
//主程序 
int main()
{
	//密码登录（研发中……） 
/*	string inpass;
	string pass="Break The Law";
	cout<<"请输入密码：";
	cin>>inpass;
	if (inpass == pass)
	{
*/
		system("title 老师再见发布版");
		system("color ec");
		cout<<"注意：如果要关掉汪老师，请在上方状态栏出现后选择！"<<endl;
		system("pause");
		choose();
/*	}
	else
	{
		cout<<"你爱老师，自动退出……"<<endl;
		system("pause");
		system("exit");
	}
*/
	return 0;
}
