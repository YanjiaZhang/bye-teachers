/*
	Hi Developers:
	Here is the template of the "bye-techers" programme.
	I've got what you have to finish commented.
	Version:1.3 
*/
#include <iostream>
using namespace std;
char input;
int choose();
//Close Teacher A
int closea()
{
	system("title Goodbye Teacher A");
	system("color 17");
	//Close the programme using the command "taskkill" 
	system("taskkill /im /*Application Name*/ /f /t");
	system("cls");
	cout<<"------------------------------------------------------"<<endl;
	cout<<"Teacher A is closed by you."<<endl;
	cout<<"------------------------------------------------------"<<endl;
	system("pause");
	system("color 07");
	system("cls");
	choose();
} 

//Copy these codes if you want to close more teachers.
//(You can find the application name using the command "tasklist")

//Open Teacher A
int opena()
{
	system("cls");
	system("title Hello Teacher A");
	system("color 17");
	//Go to the directory 
	system("cd /*Path*/"); 
	//Watch out! If the path contains space, you need to use the syntax "ABCDEF~n".
	//And don't forget to change '\' into '/'.
	//If you don't understand, google it. 
	//Run the application
	system("/*Application Name*/");
	system("cls");
	cout<<"------------------------------------------------------"<<endl;
	cout<<"Teacher A is opened by you."<<endl;
	cout<<"------------------------------------------------------"<<endl;
	system("pause"); 
	system("color 07");
	system("cls");
	choose();
} 

//Copy these codes if you want to open more teachers.
//(You can find the application name using the command "tasklist")

//Self-destroying mode 
int destroy()
{
	char destroy_method;
	system("cls");
	system("color F0");
	system("title Self-destroying Mode");
	cout<<"Self-destroy mode activated."<<endl;
	cout<<"Please choose a method:"<<endl;
	cout<<"------------------------------------------------------"<<endl;
	cout<<"Type 1 if you want to die"<<endl;
	cout<<"Type 2 if you want to laugh"<<endl;
	cout<<"------------------------------------------------------"<<endl;
	cout<<"Input:";
	cin>>destroy_method;
	switch (destroy_method)
	{
		case '1':
			system("cls");
			system("color F0");
			cout<<"------------------------------------------------------"<<endl;
			cout<<"Shutting down..."<<endl;
			cout<<"------------------------------------------------------"<<endl;
			system("pause");
			//Run the "shutdown" command to shut down
			system("shutdown /s /f /d 6:11");
			break; 
		case '2':
			system("cls");
			system("color F0");
			cout<<"------------------------------------------------------"<<endl;
			cout<<"Preparing to laugh..."<<endl;
			cout<<"------------------------------------------------------"<<endl;
			system("pause");
			system("cls");
			//Output "Ha" for infinite times 
			for(int i=1;i>0;i++)
				cout<<"Ha ";
			break;
		default:
			cout<<"------------------------------------------------------"<<endl;
			cout<<"Incorrect input. Please try again."<<endl;
			cout<<"------------------------------------------------------"<<endl;
			system("pause");
			system("cls");
			destroy();
			break;
	}
} 
//About
int about()
{
	system("cls");
	system("color F0");
	cout<<"Student Application Closing System (Console Edition)"<<endl;
	cout<<"Version:1.3-bulid20180524-release"<<endl;
	system("pause");
	choose();
} 
//Release Note
int releasenote()
{
	system("cls");
	system("color F0");
	system("type release_note.txt");
	cout<<endl;
	cout<<"Can't see all of it? Scroll up!"<<endl<<endl;
	system("pause");
	choose();
} 
//Choosing Function
int choose()
{
		system("title Bye Teachers-Release Version");
		system("color 07");
		system("cls"); 
		cout<<"------------------------------------------------------"<<endl;
		cout<<"Type 1 if you want to close Teacher A"<<endl;
		cout<<"Type 2 if you want to open Teacher A"<<endl; 
		cout<<"Type 9 if you want to activate self-destroying mode"<<endl;
		cout<<"Type 0 if you want to read the about page"<<endl; 
		cout<<"Type R if you want to read the release note"<<endl;
		cout<<"------------------------------------------------------"<<endl;
		cout<<"Input:";
		cin>>input;
		switch (input)
		{
			case '1':
				closea();break;
			case '2':
				opena();break;
			case '9':
				destroy();break;
			case '0':
				about();break;
			case 'R':
				releasenote();break;
			case 'r':
				releasenote();break;
			default:
				cout<<"------------------------------------------------------"<<endl;
				cout<<"Incorrect input. Please try again."<<endl;
				cout<<"------------------------------------------------------"<<endl;
				system("pause");
				system("cls");
				choose();
				break;
		}
}
//Main function
int main()
{
	//Login with password (Trying to realize...)
/*  string password;
	do
	{
	    cout<<"Input Password:"<<ends;
	    cin>>password;
	    if(password=="Break The Law")
	    {
*/ 
			choose();
/*		}
	    else
	    {
	    	cout<<"You love techers. Exiting..."<<endl;
			system("pause");
			system("exit");
			break;
		}
	}
    while(password!="Break The Law");
*/ 
	return 0;
}
