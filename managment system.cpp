#include<iostream>
#include<vector>
#include<stdio.h>
#include<cstring>
#include<fstream>
#include<algorithm>

using namespace std;
class Student {
     private:
     	int rollno,age;
     	string name;
     	public:
     		Student(int stdRollno ,string stdName, int stdAge){
     			rollno = stdRollno;
     			name = stdName;
     			age = stdAge;
			 }
			 void setRollno(int stdRollno){
			 	rollno =stdRollno;
			 }
			 int getRollno(){
			 	return rollno;
			 }
			 void setName(string stdName){
			 	name = stdName;
			 }
			 string getName(){
			 	return  name;
			 }
			 void setAge(int stdAge){
			 	age=stdAge;
			 }
			 int getAge(){
			 	return age;
			 }
};
//Create function to add new student
void addNewStudent(vector<Student> &students){
	int rollno,age;
	string name;
	cout<<"Enter Rollno:";
	cin>>rollno;
	cout<<"enter Name:";
	cin>>name;
	cout<<"enter the age:";
	cin>>age;
	
	//check if student already exit
	for(int i=0;i<students.size();i++){
		if(students[i].getRollno()==rollno){
			cout<<"\t\tStudent Already Exits..."<<endl;
			return ;
		}
	}

	Student newStudent(rollno,name,age);
	students.push_back(newStudent);
	
	cout<<"\t\tStudent Add Successfully..."<<endl;
}
int main(){
	 vector<Student> students;
	 students.push_back(Student(1,"Ali",20));
	 char choice;
	 do{
	 	system(" cls");
		  int op;
		 cout<<"\t \t---------------------------"<<endl;
	     cout<<"\t\t Student Management System"<<endl; 
		 cout<<"1.\t\t Add New Student"<<endl;
		 cout<<"2.\t\t Display All Students"<<endl;
		 cout<<"3.\t\t Search Student"<<endl;
		 cout<<"4.\t\t update Student"<<endl;
		 cout<<"5.\t\t Delete Student"<<endl;
		 cout<<"6.\t\t Exit"<<endl;
		 cout<<"\t\t Enter Your Choice :";
		 cin>>op;
		 switch(op){
		 	case 1:
		 		addNewStudent(students);
		 		break;
		 	case 6:
		 		exit(1);
		 	default:
			 cout<<"\t\t Invalid Number ...."<<endl;	
		 }
		 cout<<"\t\t Do you want to continue [yes/ no] ?:";
		 cin>>choice;
		 
		 }
		 while(choice =='y'|| choice =='y');
		 
}
