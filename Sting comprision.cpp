#include<iostream>
using namespace std;
main()
{
  int i,count=0,temp=0,count1=0,temp1=0;
  char ch[100],ch1[100];
  cout<<"enter string 1 :: ";
  cin>>ch;
  cout<<"enter string 2 :: ";
  cin>>ch1;
  for(i=0;ch[i]!='\0';i++)
  {
    count=(int)ch[i];
    temp+=count;
  }
  for(i=0;ch1[i]!='\0';i++)
  {
    count1=(int)ch1[i];
    temp1+=count1;
  }
  if(temp!=temp1)
  {
    cout<<"string are not equal ";
  }
  else
  {
    cout<<"string are equal ";
  }

}
