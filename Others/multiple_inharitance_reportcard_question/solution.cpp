/*author : Aryan kamboj 
git: Aryan-kamboj
Question Link : https://www.codesdope.com/practice/cpp-multiple-inheritance/
question no 3 (this question had to be audited a little bit to be intresting)
We want to get marks of each student of a class in Physics,Chemistry and Mathematics and the average marks
of the class. The number of students in the class are entered by the user. Create a class named Marks with data members
for roll number and marks. Create three other classes inheriting the Marks class, namely Physics, Chemistry and 
Mathematics, which are used to define marks in individual subject of each student. 
Roll number of each student will be generated automatically.*/
#include<iostream>
#include<cstring>
#include<limits>
using namespace std;
class marks
{           
	public:
		int roll_no[10],n,j,i,sum,marks[10][3];//we are using 2 D array as we can simply just enter the marks of students in the form of a matrix
		float avg;
    void output(int n,string name[10],int marks[10][3])
    {
    	for(i=1;i<=n;i++)
    	{
            roll_no[i]=i;
    		cout<<"Roll no :- "<<roll_no[i]<<endl<<"Name :- "<<name[i]<<endl;
    		for(j=0;j<3;j++)
	     	{
				 if(j!=1&&j!=2)//i don't know why but this was'nt working with j=0 if you know let me know @aryankambozz@gmail.com
				 {
                  cout<<"Physics :- "<<marks[i][j]<<"  ";
	             }
				 if(j=1)
				 {
				  cout<<"Chemistry :- "<<marks[i][j]<<"  ";
				 }
				 if(j=2)
				 {
				  cout<<"Maths :- "<<marks[i][j]<<"  ";
				 }
			}	 
	        cout<<endl;
        }
    }
};
class physics: public marks
{
	public:
		void avg_phy(int marks[10][3],int n)
		{
		sum=0;
		j=0;
		for(i=1;i<=n;i++)
		{
		sum+=marks[i][j];
		}
		avg=sum/n;
		cout<<"Average marks of physics :- "<<avg<<endl;
		}	
};
class chemistry: public marks
{
     public:
     	void avg_chem(int marks[10][3],int n)
     	{
		sum=0;
		j=1;
		for(i=1;i<=n;i++)
		{
		sum+=marks[i][j];
		}
		avg=sum/n;
		cout<<"Average marks of chemistry :- "<<avg<<endl;
		}
};
class maths: public marks
{
	public:
		void avg_math(int marks[10][3],int n)
		{
		sum=0;
		j=2;
		for(i=1;i<=n;i++)
		{
		sum+=marks[i][j];
		}
		avg=sum/n;
		cout<<"Average marks of maths :- "<<avg<<endl;
		}
};
int main()
    {
        marks obj0;
	physics obj;
	chemistry obj2;
	maths obj3;
		int n,marks[10][3],j,i;
		string name[10];
    	cout<<"Enter the number of students in class"<<endl;
		cin>>n;
        cin.ignore();//cin.ignore is used to ignore the last key pressed in cin (here it is the enter key) if we do not
// do that it will cause the program to think that the line has already ended so it would not take name as input in line 90;
		for(i=1;i<=n;i++)
		{
		cout<<"Enter the name of the student"<<endl;
        getline(cin,name[i]);//for strings we have to use getline in c++ otherwise it won't take the string after space ( _ ).
	    }
		for(i=1;i<=n;i++)
		{
		cout<<"Enter the marks of "<<name[i]<<endl;
		for(j=0;j<3;j++)
		{
    	cin>>marks[i][j];
		}
	    }	
	//we have to input the data in the main function because data is not inherited in the derived classes 
	//it only goes to the first one (avg_phy in this case)
	obj0.output(n,name,marks);
	obj.avg_phy(marks,n);
	obj2.avg_chem(marks,n);
	obj3.avg_math(marks,n);
	return 0;
}
