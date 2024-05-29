#include<iostream>
using namespace std;
class Student
{
public:	
	static int a,b;
	int c=100;
static void display()
	{
		cout<<"\n THE SUM IS::::"<<(a+b);
	}
	void calc()
	{
		cout<<"\n THE PRODUCT IS::"<<(a*b+c);
	}
};
int Student::a=40;
int Student::b=90;
int main()
{
	Student s1;
	s1.display();
	s1.calc(); 
	return 0;  
}
