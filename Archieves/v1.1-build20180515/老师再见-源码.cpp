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
	system("title �ټ�ʷ��ʦ");
	system("color 17");
	system("taskkill /im Student.exe /f");
	system("cls");
	cout<<"--------------------------------------------------"<<endl;
	cout<<"ʷ��ʦ������ˡ�"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	system("pause"); 
	system("color 07"); 
	system("cls");
	choose();
} 
//������ʦ
int openwang()
{
/*	system("cls");
	system("title �������ʦ");
	system("color 17");
	system("cd Desktop");
	system("")
	cout<<"--------------------------------------------------"<<endl;
	cout<<"����ʦ������ˡ�"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	system("pause"); 
	system("color 07");*/
	system("cls");
	choose();
} 
//��ʷ��ʦ
int openshi()
{
/*	system("cls");
	system("title ���ʷ��ʦ");
	system("color 17");
	system("cd C:\Program Files (x86)\gakataka\Student");
	system("Student.exe");
	cout<<"--------------------------------------------------"<<endl;
	cout<<"ʷ��ʦ������ˡ�"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	system("pause"); 
	system("color 07");*/
	system("cls");
	choose();
} 
//�Ա�ģʽ 
int zibao()
{
	char zibao_method;
	system("cls");
	system("title �Ա�ģʽ");
	cout<<"�Ա�ģʽ����������ѡ���Ա�������"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<"�����������밴1"<<endl;
	cout<<"ЦһЦ���밴2"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<"���룺";
	cin>>zibao_method;
	switch (zibao_method)
	{
		case '1':
			system("cls");
			system("color F0");
			cout<<"--------------------------------------------------"<<endl;
			cout<<"�����رյ��ԡ���"<<endl;
			cout<<"--------------------------------------------------"<<endl;
			system("pause");
			system("shutdown /s /f /d 6:11");
			break; 
		case '2':
			system("cls");
			system("color F0");
			cout<<"--------------------------------------------------"<<endl;
			cout<<"������ʼ��Ц����"<<endl;
			cout<<"--------------------------------------------------"<<endl;
			system("pause");
			for(int i=1;i>0;i++)
				cout<<"��";
			break;
		default:
			cout<<"--------------------------------------------------"<<endl;
			cout<<"����������������룡"<<endl;
			cout<<"--------------------------------------------------"<<endl;
			system("pause");
			system("cls");
			zibao();
			break;
	}

} 
//����
int about()
{
	system("cls");
	system("color F0");
	cout<<"Student Application Closing System (Console Edition)"<<endl;
	cout<<"Version:1.1-bulid20180515-release"<<endl;
	system("pause");
	choose();
} 
//�����ʼ�
int releasenote()
{
	system("cls");
	system("color F0");
	system("type release_note.txt");
	cout<<endl;
	cout<<"����ȫ����������"<<endl<<endl;
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
		cout<<"�ص�ʷ��ʦ���밴2���з��С�����"<<endl;
		cout<<"������ʦ���밴3���з��С�����"<<endl;
		cout<<"��ʷ��ʦ���밴4���з��С�����"<<endl; 
		cout<<"�����Ա�ģʽ���밴9"<<endl;
		cout<<"���ڣ��밴0"<<endl; 
		cout<<"�Ķ������ʼǣ��밴R"<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<"���룺";
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
				cout<<"����������������룡"<<endl;
				cout<<"--------------------------------------------------"<<endl;
				system("pause");
				system("cls");
				choose();
				break;
		}
}
//������ 
int main()
{
	//�����¼���з��С����� 
/*	string inpass;
	string pass="Break The Law";
	cout<<"���������룺";
	cin>>inpass;
	if (inpass == pass)
	{
*/
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
	}
*/
	return 0;
}
