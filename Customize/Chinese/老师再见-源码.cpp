/*
	��λ����Գ�ǣ�
	�����Ǳ��˱�д����ʦ�ټ������ģ�壬
	����ע�Ͳ�����Ҫ��д�Ĳ��֡�
	Version:1.4
*/
#include <iostream>
using namespace std;
char input;
int choose();
//�ر�A��ʦ 
int closea()
{
	system("title �ټ�A��ʦ");
	system("color 17");
	//ʹ��taskkill����رճ��� 
	system("taskkill /im /*��������*/ /f /t");
	system("cls");
	cout<<"--------------------------------------------------"<<endl;
	cout<<"A��ʦ������ˡ�"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	system("pause");
	system("color 07");
	system("cls");
	choose();
} 

//���ϴ��븴�ƺ���������ر�������ʦ
//����������tasklist���ҵ�ѧ���˳����������� 

//��A��ʦ 
int opena()
{
	system("cls");
	system("title ���A��ʦ");
	system("color 17");
	//��ѧ�����ļ�Ŀ¼ 
	system("cd /*�ļ�Ŀ¼*/"); 
	//ע�⣡�˴��ļ�Ŀ¼�������ո�����Ҫ��ǰ������ĸ��~n�ĸ�ʽ
	//��Ҫ���˾���·��������\���������/
	//������ѯ�ʶ��� 
	//ִ�г��� 
	system("/*������*/");
	system("cls");
	cout<<"--------------------------------------------------"<<endl;
	cout<<"A��ʦ������ˡ�"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	system("pause"); 
	system("color 07");
	system("cls");
	choose();
} 

//���ϴ��븴�ƺ����������������ʦ
//����������tasklist���ҵ�ѧ���˳�����������

//�Ա�ģʽ 
int zibao()
{
	char zibao_method;
	system("cls");
	system("color F0");
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
			//ִ��shutdown����رյ��� 
			system("shutdown /s /f /d 6:11");
			break; 
		case '2':
			system("cls");
			system("color F0");
			cout<<"--------------------------------------------------"<<endl;
			cout<<"������ʼ��Ц����"<<endl;
			cout<<"--------------------------------------------------"<<endl;
			system("pause");
			system("cls");
			//�ظ����"��" 
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
	cout<<"Version:1.3-bulid20180524-release"<<endl;
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
		//��ֹ���룬ʹ������ҳ�� 
		system("chcp 936");
		system("title ��ʦ�ټ�������");
		system("color 07");
		system("cls"); 
		cout<<"--------------------------------------------------"<<endl;
		cout<<"�ص�����ʦ���밴1"<<endl;
		cout<<"�ص�ʷ��ʦ���밴2"<<endl;
		cout<<"������ʦ���밴3"<<endl;
		cout<<"��ʷ��ʦ���밴4"<<endl; 
		cout<<"�����Ա�ģʽ���밴9"<<endl;
		cout<<"���ڣ��밴0"<<endl; 
		cout<<"�Ķ������ʼǣ��밴R"<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<"���룺";
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
	//�����¼
	string password;
	do
	{
	    cout<<"���������룺"<<ends;
	    cin>>password;
	    if(password=="/*����*/")
		//ע�⣺�������С��8���ֽڣ�����ᱨ����Ϊstring�Ĵ�С��8�ֽڣ� 
	    {
			choose();
		}
	    else
	    {
	    	cout<<"�㰮��ʦ���Զ��˳�����"<<endl;
			system("pause");
			system("exit");
			break;
		}
	}
    while(password!="/*����*/");
	return 0;
}
