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
/*	system("title 再见史老师");
	system("color 17");
	system("taskkill /im Student.exe /f");
	system("cls");
	cout<<"--------------------------------------------------"<<endl;
	cout<<"史老师被你关了。"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	system("pause"); 
	system("color 07");*/
	system("cls");
	choose();
} 
//打开汪老师（研发中……） 
int openwang()
{
	//利用start模块打开 
	system("cls");
	choose();
} 
//打开史老师（研发中……） 
int openshi()
{
	//利用start模块打开 
	system("cls");
	choose();
} 
//自爆模式 
int zibao()
{
	system("cls");
	system("title 自爆模式");
	cout<<"自爆模式已启动，准备开始……"<<endl;
	system("pause");
	for(int i=1;i>0;i++)
		cout<<"哈";
} 
//关于
int about()
{
	system("cls");
	system("color F0");
	cout<<"Student Application Closing System (Console Edition)"<<endl;
	cout<<"Version:1.0-bulid20180508-release"<<endl;
	system("pause");
	choose();
} 
//发布笔记
int releasenote()
{
	system("cls");
	system("color F0");
	system("type release_note.txt");
	cout<<endl<<endl;
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
		cout<<"关掉史老师，请按2（出了点问题，请不要使用）"<<endl;
		cout<<"打开汪老师，请按3（研发中……）"<<endl;
		cout<<"打开史老师，请按4（研发中……）"<<endl; 
		cout<<"启动自爆模式，请按9"<<endl;
		cout<<"关于，请按0"<<endl; 
		cout<<"阅读发布笔记，请按R"<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<"输入：";
		cin>>input;
		if (input == '1')
			closewang();
		else if (input == '2')
			closeshi();
		else if (input == '3')
			openwang();
		else if (input == '4')
			openshi();
		else if (input == '9')
			zibao();
		else if (input == '0')
			about();
		else if ((input == 'R')|| (input == 'r'))
			releasenote();
		else
		{
			cout<<"--------------------------------------------------"<<endl;
			cout<<"输入错误，请重新输入！"<<endl;
			cout<<"--------------------------------------------------"<<endl;
			system("pause");
			system("cls");
			choose();
		}
}
//主程序 
int main()
{
	//密码登录（研发中……） 
/*	char inpass[100];
	char pass[50]="Break The Law";
	cout<<"请输入密码：";
	cin>>inpass;
	if (strcmp(inpass,pass) == 0)
	{*/
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
	}*/
	return 0;
}
