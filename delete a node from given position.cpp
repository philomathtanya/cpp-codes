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
struct node *head,*newnode,*temp,*p;
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
//before
while(temp!=0)
{
	cout<<temp->data<<" , ";
	temp=temp->next;
}
cout<<endl;
//from given position
cout<<"Enter the position:";
cin>>pos;
temp=head;
if(i<pos-1)
{
	temp=temp->next;
	i++;
}
newnode=temp->next;
temp->next=newnode->next;
free(newnode);





cout<<endl;
temp=head;
//after
while(temp!=0)
{
	cout<<temp->data<<" , ";
	temp=temp->next;
}
}
