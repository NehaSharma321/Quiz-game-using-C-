#include<iostream>
#include<conio.h>
int x=0;
using namespace std;
class neha
{
	public:
	void header()
{
	cout<<"\t\t\t\t\t QUIZ GAME "<<endl;
}
void footer()
{
	cout<<"\t\t\t\t\t RESULTS "<<endl;
}
void user()
{
	char ch1[100];
	cout<<"\t Guest Enter Your Name : ";
	cin>>ch1;
	cout<<" \t Welcome "<<ch1<<endl;
}
void results()
{
	if(x==100)
	cout<<" \t You are extremely intelligent Your Score is 100";
	if(x==90)
	cout<<" \t You are intelligent Your Score is 90";
	if(50==x||x==70||x==60)
	cout<<" \t You are average Your Score is "<<x<<"Better luck next time";
	else if(x<=40)
	cout<<" \t No use........ Not even 5 questions right";	
	}
 
};
int main()
{
	char ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11;
	neha obj1,obj2,obj3,obj4;
	obj1.user();
	obj2.header();
	cout<<"Q1.C language was developed by ___.\na. Dennis Rechard \nb.Dennis M. Ritchie \nc.Bjarne Stroustrup \nd.Anders Hejlsberg "<<endl;
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<" \t Great! Your score is: "<<x<<"\n";
		cout<<" \t Press Enter ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"Q2.C language is a successor to which language? \na.Basic\nb.Cobol \nc.C++ \nd.B "<<endl;
	cin>>ch2;
	if(ch2=='d')
	{
		x=x+10;
		cout<<" \t Great! Your Game score is: "<<x;
 
	}
else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"Q3.How many keywords are there in C language? \na.32 \nb.35 \nc.64 \nd.18"<<endl;
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<" \t Great! Your Game score is: "<<x;
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"Q4.Which is not a valid keyword in C language? \na.for \nb.while \nc.do-while \nd.switch "<<endl;
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<" \t Great! Your Game score is: "<<x;
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"Q5.What is the extension of a C language header file? \na.c \nb.cpp \nc.c99 \nd.h "<<endl;
	cin>>ch2;
	if(ch2=='d')
	{
		x=x+10;
		cout<<" \t Great! Your Game score is: "<<x;
	}
else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"Q6.To develop which operating, C language was invented?\na.Linux\nb.Unix\nc.Android\nd.Mac"<<endl;
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<" \t Great! Your Game score is: "<<x;
	}
else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"Q7.How many byte(s) does a char type take in C?\na.1\nb.2\nc.3\nd.4"<<endl;
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<" \t Great! Your Game score is: "<<x;
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"Q8.For which type, the format specifier %i is used?\na.int\nb.char\nc.float\nd.double"<<endl;
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<" \t Great! Your Game score is: "<<x;
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
	cout<<"Q9.Which is the correct format specifier for double type value in C?\na.%d\nb.%f\nc.%lf\nd.%LF"<<endl;
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<" \t Great Your Game score is: "<<x;
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj2.header();
 
	cout<<"Q10.Which operator is used to find the remainder of two numbers in C?\na./\nb.\\\nc.%\nd.//"<<endl;
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<" \t Great Your Game score is: "<<x;
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	obj3.footer();
	obj4.results();
	getch();
 	return 0;
}
