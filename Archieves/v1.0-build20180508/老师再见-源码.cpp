#include <iostream>
using namespace std;
char input;
int choose();
//�ر�����ʦ
int closewang()
{
	system("title �ټ�����ʦ");
	system("color 17");
	system("taskkill /im StudentMain.exe /f");
	system("cls");
	cout<<"--------------------------------------------------"<<endl;
	cout<<"����ʦ������ˡ�"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	system("pause");
	system("color 07");
	system("cls");
	choose();
}
//�ر�ʷ��ʦ 
int closeshi()
{
/*	system("title �ټ�ʷ��ʦ");
	system("color 17");
	system("taskkill /im Student.exe /f");
	system("cls");
	cout<<"--------------------------------------------------"<<endl;
	cout<<"ʷ��ʦ������ˡ�"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	system("pause"); 
	system("color 07");*/
	system("cls");
	choose();
} 
//������ʦ���з��С����� 
int openwang()
{
	//����startģ��� 
	system("cls");
	choose();
} 
//��ʷ��ʦ���з��С����� 
int openshi()
{
	//����startģ��� 
	system("cls");
	choose();
} 
//�Ա�ģʽ 
int zibao()
{
	system("cls");
	system("title �Ա�ģʽ");
	cout<<"�Ա�ģʽ��������׼����ʼ����"<<endl;
	system("pause");
	for(int i=1;i>0;i++)
		cout<<"��";
} 
//����
int about()
{
	system("cls");
	system("color F0");
	cout<<"Student Application Closing System (Console Edition)"<<endl;
	cout<<"Version:1.0-bulid20180508-release"<<endl;
	system("pause");
	choose();
} 
//�����ʼ�
int releasenote()
{
	system("cls");
	system("color F0");
	system("type release_note.txt");
	cout<<endl<<endl;
	system("pause");
	choose();
} 
//ѡ��ģ�� 
int choose()
{
		system("title ��ʦ�ټ�������");
		system("color 07");
		system("cls"); 
		cout<<"--------------------------------------------------"<<endl;
		cout<<"�ص�����ʦ���밴1"<<endl;
		cout<<"�ص�ʷ��ʦ���밴2�����˵����⣬�벻Ҫʹ�ã�"<<endl;
		cout<<"������ʦ���밴3���з��С�����"<<endl;
		cout<<"��ʷ��ʦ���밴4���з��С�����"<<endl; 
		cout<<"�����Ա�ģʽ���밴9"<<endl;
		cout<<"���ڣ��밴0"<<endl; 
		cout<<"�Ķ������ʼǣ��밴R"<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<"���룺";
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
			cout<<"����������������룡"<<endl;
			cout<<"--------------------------------------------------"<<endl;
			system("pause");
			system("cls");
			choose();
		}
}
//������ 
int main()
{
	//�����¼���з��С����� 
/*	char inpass[100];
	char pass[50]="Break The Law";
	cout<<"���������룺";
	cin>>inpass;
	if (strcmp(inpass,pass) == 0)
	{*/
		system("title ��ʦ�ټ�������");
		system("color ec");
		cout<<"ע�⣺���Ҫ�ص�����ʦ�������Ϸ�״̬�����ֺ�ѡ��"<<endl;
		system("pause");
		choose();
/*	}
	else
	{
		cout<<"�㰮��ʦ���Զ��˳�����"<<endl;
		system("pause");
		system("exit");
	}*/
	return 0;
}
