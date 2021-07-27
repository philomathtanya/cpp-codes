#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main()
{
	int pos,i=1;
struct node
{

	int data;
	struct node *next;
};
struct node *head,*newnode,*temp;
head=0;
int choice=1;
while(choice)
{
	newnode=(struct node *) malloc(sizeof(struct node));
	cout<<"enter the data"<<endl;
	cin>>newnode->data;
	newnode->next=0;
	if( head==0)
	{
		head=temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
	}
	cout<<"Do you want to continus(0,1) ?"<<endl;
	cin>>choice;
}
temp=head;

//before print
while(temp!=0)
{
	cout<<temp->data<<" , ";
	temp=temp->next;
}
cout<<endl;
temp=head;
int count =0;
//middle insertion
newnode=(struct node *) malloc(sizeof(struct node));
	cout<<"enter the data"<<endl;
	cin>>newnode->data;
	cout<<"enter position";
	cin>>pos;
	while(temp!=0)
	{
		temp=temp->next;
		count++;
	}
	if(pos>count)
		cout<<"invalid position";
	else
	{
	 temp=head;
	 while(i<pos)
	 {
	 	temp=temp->next;
	 	i++;
	 }
	 newnode->next=temp->next;
	 temp->next=newnode;
		
	}	
		


temp=head;
//after print
while(temp!=0)
{
	cout<<temp->data<<" , ";
	temp=temp->next;
}
}

