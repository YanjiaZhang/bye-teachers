#include <iostream>
using namespace std;
char input;
int choose();
//�ر�����ʦ
int closewang()
{
	system("title �ټ�����ʦ");
	system("color 17");
	//ʹ��taskkill����رճ��� 
	system("taskkill /im StudentMain.exe /f /t");
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
	//ʹ��taskkill����رճ��� 
	system("taskkill /im Student.exe /f /t");
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
	//��ѧ�����ļ�Ŀ¼ 
	system("cd /*�洢·��*//*");
	//ִ�г��� 
	system("StudentMain.exe"); 
	system("cls");
*/	
/*	cout<<"--------------------------------------------------"<<endl;
	cout<<"����ʦ������ˡ�"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	system("pause"); 
*/
	system("color 07");
	system("cls");
	choose();
} 
//��ʷ��ʦ
int openshi()
{
/*	system("cls");
	system("title ���ʷ��ʦ");
	system("color 17");
	//��ѧ�����ļ�Ŀ¼ 
	system("cd C:/Progra~1/gakata~1/Studen~1");
	//ִ�г��� 
	system("Student.exe");
	system("cls");
	cout<<"--------------------------------------------------"<<endl;
	cout<<"ʷ��ʦ������ˡ�"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	system("pause");
*/ 
	system("color 07");
	system("cls");
	choose();
} 
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
	cout<<"Version:1.4-bulid20180529-release"<<endl<<endl;
	cout<<"Also available on GitHub."<<endl;
	cout<<"https://git.io/vhtCc"<<endl;
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
	//�����¼
	string password;
	do
	{
	    cout<<"���������룺";
	    cin>>password;
	    if(password=="goaway")
	    { 
	    	system("cls");
	        system("title ��ʦ�ټ�������");
			system("color ec");
			cout<<"ע�⣺���Ҫ�ص�����ʦ�������Ϸ�״̬�����ֺ�ѡ��"<<endl;
			cout<<"      ���Ҫ�ص�ʷ��ʦ�����Թ���Աģʽ���У�"<<endl;
			system("pause");
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
    while(password!="goaway");
	return 0;
}
