#include<iostream>
#include<string.h>
using namespace std;
class student{
	
	int s_id;
	char s_name[20];
	static char college[20];
	public: 
	void get(){
		cout<<"enter ID"<<endl;
		cin>>s_id;
		cout<<"enter name"<<endl;
		cin>>s_name;
		strcpy(college,"MIPS");
	}
	void out(){
		cout<<s_id<<endl;
		cout<<s_name<<endl;
		cout<<college<<endl;
	}
};
char student::college[20];
int main(){
	cout<<"enter number of student detail"<<endl;
	int n;
	cin>>n;
	char stu[n];
	for(int i=1;i<=n;i++){
		cin>>stu[i];
	}
	for(int i=1;i<=n;i++){
		cout<<"enter "<<i<<"student detail "<<stu[i]<<endl;
		student stu[i];
		stu[i].get();
	}
	for(int j=1;j<n;j++){
		student stu[j];
		stu[j].out();
	}
	//student s1;
	//s1.get();
	//s1.out();
	return 0;
}
