// username=zahraa ,password=1234
#include <iostream>
#include <windows.h>// for COORD 
#include <fstream>
#include<cstring>
#include<string>
#include"pro.h"
using namespace std;
char stop2='s';
char stop;
COORD coord = {0,0};
int n=1;//global variable
struct stud
{
    int roll;
    int Rank;
    int total_classes;
    int classes_attended;
	string name;
    string lastname;
    double english;
    double math;
    double physics;
    double average;
   double attendance;//= classes_attended / total_classes * 100;
   double absence;// = 100 - attendance;

}s1[100];

namespace teacher {
double wrong (double mark){
	double Warning;
	if (mark>100){
	cout<<"Enter the student's GPA as a percentage between 10 and 100 =";
	cin>>Warning;
	return 	Warning;	
	}}


	void insert( stud s1[],int & z ,int i ){
	system("cls");
 string name;
 char stop='Y';
 
 
	if(z<=100){
	for(i;i<z && stop=='Y';i++){
		cout << "\n\n ________________________RECORDS INSERTION_________________________";
		cout<<"\n  Enter Student Academic Number ";
		cin>>s1[i].roll;
		cout<<"\n  Enter Student first and last Name  ";
         cin>>s1[i].name>>s1[i].lastname;
		
		cout<<"\n   Enter the student's average in physics from 100  ";
		cin>>s1[i].physics;
		s1[i].physics=wrong (s1[i].physics);
		cout<<"\n   Enter the student's average in Math from 100  ";
		cin>>s1[i].math;
		s1[i].math=wrong (s1[i].math);
		cout<<"\n   Enter the student's average in English from 100  ";
		cin>>s1[i].english;
		s1[i].english=wrong (s1[i].english);
		cout<<"\n   Enter the student's Total Classes:  ";
		cin>>s1[i].total_classes;
		cout<<"\n   Enter the student's Classes Attended:  ";
		cin>>s1[i].classes_attended;
	
	  if(stop2=='n'){
		
			break;}
		
		cout<<"\n Click Y to add a record and N to stop ";
		cin>>stop;
	  
	
		if(stop=='Y'){
			z++;
		}
	}}

}
void display(int z, int & i)//z passing by value && i passing by reference
{ 

 if(i==z){
 	return;
 }
	cout << "\n\n ________________________"<<s1[i].name <<"_________________________";	
	cout<<"\n The Academic Number: "<<s1[i].roll;
	cout<<"\n The student name: "<<s1[i].name<<" "<<s1[i].lastname;
	cout<<"\n Math: "<<s1[i].math;
	cout<<"\n English: "<<s1[i].english;
	cout<<"\n Physics "<<s1[i].physics;
	cout<<"\n Total Classes "<<s1[i].total_classes;
	cout<<"\n Classes Attended "<<s1[i].classes_attended;
	s1[i].attendance = (s1[i].classes_attended/s1[i].total_classes)*100;
	s1[i].absence = (100- s1[i].attendance);
	cout<<"\n Absence "<<s1[i].absence;
	++i;
display(z,i);} //function recursion

void displayd(int z,int i) //duplicate with function displayA
{
	stud temp1;
     bool stop=0;//local variable
	for(int b=0;b<z &&  stop==0;b++){
     stop=1;
    for(int i=0;i<z-1 ;i++){
    	if (s1[i].roll>s1[i+1].roll){
    		stop=0;
    		temp1=s1[i];
    		s1[i]=s1[i+1];
    		s1[i+1]=temp1;		
		}}}
	display(z,i);	}
void displayA(int z,int i){
	stud temp1;
    bool stop=0;
	for(int b=0;b<z && stop==0;b++){
    stop==1;
    for(int i=0;i<z-1 ;i++){
    	if (s1[i].roll<s1[i+1].roll){
    		stop=0;
    		temp1=s1[i];
    		s1[i]=s1[i+1];
    		s1[i+1]=temp1;
    		
		}}}
	display(z,i);}
	void avv(stud s1[],int z,char x){
	
		for(int c=0 ;c<z;c++){
		s1[c].average=(s1[c].english+s1[c].math+s1[c].physics)/3;
		}
		stud temp1;
    bool stop=0;
	for(int b=0;b<z && stop==0;b++){
        stop==1;
		 for(int i=0;i<z-1 ;i++){
    	if (s1[i].average<s1[i+1].average){
    		stop=0;
    		temp1=s1[i];
    		s1[i]=s1[i+1];
    		s1[i+1]=temp1;
    		
	}}
}
	for(int g=0,b=1;g<z;g++,b++){
		cout<<"\n "<<b<<"      "<<s1[g].name<<"  "<<s1[g].lastname<<"     "<<s1[g].average<<"%";
			
	}}
	void  Search (int z) {
		int look;
		int b,c,x;
		cout<<"\n Enter the student's academic number ";
		cin>>look;

		for (int i=0;i<z;i++){
			if (look==s1[i].roll){
				x=i+1;
				stop2='n';
				teacher ::insert(s1,x,i);
				b=i;              //I did this not to make the function run only on
				c=b+1;
				
				cout<<"the upduted recurd "<<endl;
				display( c,b );
			
			}
		}
	}
 void Delete (int & x){
 	int look,z;
 	z=x-1;     //I did this to get a condition that determines whether the record exists and has been deleted, or if it does not exist, the deletion has not taken place
		int b,c;
		cout<<"\n Enter the student's academic number ";
		cin>>look;
		for (int i=0;i< x;i++){
			if (look==s1[i].roll){
		  for (int e=0;e<x-1;e++){	
			s1[e]=s1[e+1];
			}--x;
			break; }}
		if(x==z){
		
		cout<<"***********************************************************************"<<endl;
		cout <<"*         The record has been deleted successfully                    *"<<endl;
		cout<<"***********************************************************************"<<endl;}
		else{
			cout<<"***********************************************************************"<<endl;
		cout <<"*              The record was not found                                     *"<<endl;
		cout<<"***********************************************************************"<<endl;}}}
namespace student{
int Rank(int z){
	int look,find;
	stud temp1;
    bool stop=0;
	for(int b=0;b<z && stop==0;b++){
        stop==1;
		 for(int i=0;i<z-1 ;i++){
    	if (s1[i].average<s1[i+1].average){
    		stop=0;
    		temp1=s1[i];
    		s1[i]=s1[i+1];
    		s1[i+1]=temp1;}}}
    		
	cout<<" \n Enter the academic number";
	cin>>look;
	for(int i=0;i<z;i++){
		if (look==s1[i].roll){
			cout<<"####################";
			cout<<"\n your ranking is  ";
		
		    find=i;
		}
	}
	return find;
}}


int main(){
	int size,index=0 ,ch,ch2,ch3,xh3, *p,xh4;// *p is pointer

	p=&n;
    	login();
do{	system("cls");
cout << "\n\t\t##########################################################"<<endl;
	cout << "\n\t\t##\t\t 1: Teacher Portal \t\t\t##"<<endl;
	cout << "\n\t\t##\t\t 2: Student Portal \t\t\t##"<<endl;
	cout << "\n\t\t##########################################################";
	cout<<"\n                                                                ";
   cin>>ch;
	

  switch(ch){
   	case 1:
   		
	     do{
		   cha();
			cin>>ch2;
		if(ch2==1){{
				system("cls");
				
			   teacher ::insert(s1,n,index);
			   
			     cout<<"\n  Enter b to return to the options menu and S to close the programs: ";
				 cin>>stop;}
				  ofstream outFile;
			   outFile.open("teachers.txt",ios::out);
				if(outFile.is_open()){
				for(int i=0;i<n;i++){
					outFile<<s1[i].name<<"  "<<s1[i].lastname<<endl;
				}
				   }
				   outFile.close();
				   	
			   for(int i=1;i>0 && stop=='b' && ch2!=8;i++){
			   	system("cls");
			    cha();
			     cin>>ch2;
			     if (ch2==2){
			    system("cls");
			   	teacher :: displayA(n,index);}
			   if (ch2==3){
			    system("cls");
			    teacher ::	displayd(n,index);}  
			    if (ch2==4){
			   	system("cls");
			    	 teacher ::Search (n);
				}
				if (ch2==5){
					
					system("cls");
					teacher ::Delete (n);
					
					
				}
				if(ch2==6){
					cout <<"\n The current number of students is "<<*p;
					
				}
			    if (ch2==7){
			    system("cls");
			    teacher :: avv(s1,n,stop);
			    
				}
				if (ch2==8){
			   stop='n';
		     	xh3=8;
				 break;}
			  cout<<"\n Enter b to return to the options menu and S to close the programs: ";
			  cin>>stop; }}
			  
			if(ch2>=2 && ch2<8){
				system("cls");
			cout<<"  enter recourd frist "<<endl;
		   cout<<"\n                          ";
			cout<<" Enter b to return to the options menu  "<<endl;
			cin>>stop;}
			
		
			}while(stop=='b');
				
		break;
		case 2:
			int ch5;
			system("cls");
		char s='Y';	
		 for(int i=0;i<100 && s=='Y';i++){
		 	system("cls");
		 	cha2();
		 	cin>>ch5;
		 	if (ch5==1){
		 	system("cls");
			teacher::displayA(n,index); }
			if (ch5==2){
			system("cls");
			teacher::avv( s1, n,s);
			
			}
			if(ch5==3){
			system("cls");
			cout<<student:: Rank(n);}
			if (ch5==4){
				system("cls");
			teacher::Search (n);}
			if(ch5==5){
				system("cls");
			 ifstream inFile;
				string name,last;
			   inFile.open("teachers.txt",ios::in);
				if(inFile.is_open()){
				for(int i=1;i<=n;++i){	
					cout<<"----------"<<endl;
				for(int i=1;i<=1;++i){
				   	inFile>>name>>last;
				   }
				   	
					cout<<name<<" "<<last<<endl;
				
					}}
			inFile.close();}
			
			  
			
			if(ch5==6){
		 	xh4=6;
		 	break;}
		cout<<"\n If you want to return to the list of students, press Y ";
		cin>>s;}
		  
          }}while(xh3==8 || xh4==6);
return 0;}



	
			

