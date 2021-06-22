/*CPP PROGRAM TO CHECK VOTING AGE ELIGIBILITY*/

#include<iostream>
using namespace std;

int main()
{
	int age;
	char cont_run = 'y';
	while (cont_run='y')
    {
	cout<<"\nEnter your age: ";
	cin>>age;

	//using if-else condition to check voting eligibility
	if(age>=18)
	{
		cout<<"Person is eligible for voting"<<endl;
	}
	else
	{
		cout<<"Person is not eligible for voting"<<endl;
		cout<<"Wait for "<<18-age<< " more year(s)\n";
	}
	cout<<"\nPress 'y' for entering next age: ";
	cin>>cont_run;
    }

	return 0;
}
