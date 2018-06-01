/*
	各位程序猿们：
	这里是鄙人编写的老师再见程序的模板，
	其中注释部分是要填写的部分。
	Version:1.4
*/
#include <iostream>
using namespace std;
char input;
int choose();
//关闭A老师 
int closea()
{
	system("title 再见A老师");
	system("color 17");
	//使用taskkill命令关闭程序 
	system("taskkill /im /*程序名称*/ /f /t");
	system("cls");
	cout<<"--------------------------------------------------"<<endl;
	cout<<"A老师被你关了。"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	system("pause");
	system("color 07");
	system("cls");
	choose();
} 

//以上代码复制后可以用来关闭其他老师
//（可以利用tasklist来找到学生端程序的软件名） 

//打开A老师 
int opena()
{
	system("cls");
	system("title 你好A老师");
	system("color 17");
	//到学生端文件目录 
	system("cd /*文件目录*/"); 
	//注意！此处文件目录若包含空格则需要用前六个字母加~n的格式
	//不要忘了绝对路径中所有\必须更换成/
	//具体请询问度娘 
	//执行程序 
	system("/*程序名*/");
	system("cls");
	cout<<"--------------------------------------------------"<<endl;
	cout<<"A老师被你打开了。"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	system("pause"); 
	system("color 07");
	system("cls");
	choose();
} 

//以上代码复制后可以用来打开其他老师
//（可以利用tasklist来找到学生端程序的软件名）

//自爆模式 
int zibao()
{
	char zibao_method;
	system("cls");
	system("color F0");
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
			//执行shutdown命令，关闭电脑 
			system("shutdown /s /f /d 6:11");
			break; 
		case '2':
			system("cls");
			system("color F0");
			cout<<"--------------------------------------------------"<<endl;
			cout<<"即将开始大笑……"<<endl;
			cout<<"--------------------------------------------------"<<endl;
			system("pause");
			system("cls");
			//重复输出"哈" 
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
	cout<<"Version:1.3-bulid20180524-release"<<endl;
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
		//防止乱码，使用中文页面 
		system("chcp 936");
		system("title 老师再见发布版");
		system("color 07");
		system("cls"); 
		cout<<"--------------------------------------------------"<<endl;
		cout<<"关掉汪老师，请按1"<<endl;
		cout<<"关掉史老师，请按2"<<endl;
		cout<<"打开汪老师，请按3"<<endl;
		cout<<"打开史老师，请按4"<<endl; 
		cout<<"启动自爆模式，请按9"<<endl;
		cout<<"关于，请按0"<<endl; 
		cout<<"阅读发布笔记，请按R"<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<"输入：";
		cin>>input;
		switch (input)
		{
			case '1':
				closea();break;
			case '2':
				opena();break;
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
	//密码登录
	string password;
	do
	{
	    cout<<"请输入密码："<<ends;
	    cin>>password;
	    if(password=="/*密码*/")
		//注意：密码必须小于8个字节，否则会报错（因为string的大小是8字节） 
	    {
			choose();
		}
	    else
	    {
	    	cout<<"你爱老师，自动退出……"<<endl;
			system("pause");
			system("exit");
			break;
		}
	}
    while(password!="/*密码*/");
	return 0;
}
