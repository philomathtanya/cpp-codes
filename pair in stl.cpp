#include<iostream>
using namespace std;
class student
{
	private:
		string name;
		int age;
	public:
	    void setstudent(string s, int a)
	    {
	    	name=s;//ponty
	    	age=a;//12
		}
		void showdata()
		{
			cout<<"name :"<<name;
			cout<<"age :"<<age;
		}
			
};
int main()
{
	pair<string,int>p1;
		pair<string,string>p2;
			pair<string,float>p3;
				pair<int,student>p4;
	p1=make_pair("ritesh",20);
	p2=make_pair("tanya","mathura");
	p3=make_pair("tanu",125.657);
	student s1;
	s1.setstudent("ponty",12);
	p4=make_pair(1,s1);
	cout<<p1.first<<" "<<p1.second<<endl;
		cout<<p2.first<<" "<<p2.second<<endl;
			cout<<p3.first<<" "<<p3.second<<endl;
				cout<<p4.first;//1
				student s2=p4.second;//s1//ponty and 12
				s2.showdata();
				
	
}
