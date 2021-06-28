#include<iostream>
using namespace std;

int arr[5][5]={{1,0,1,0,1},
					{1,1,1,1,1},
					{0,1,0,1,0},
					{1,0,0,1,1},
					{1,1,1,0,1}};
int sol[5][5];
void show()
{
	for(int i=0;i<5;i++)
	{
			for(int j=0;j<5;j++)
			{
				cout<<sol[i][j]<<" ";
		
			}
				cout<<endl;
	}
}					
bool place(int x,int y)
{
	if(x>=0 &&x<5 && y>=0 &&y<5 && arr[x][y]==1)
	{
		return true;
	}
	return false;
}
bool solve(int x,int y)
{
	if(x==4 && y==4)
	{
		sol[x][y]=1;
		return true;
	}

    if(place(x,y)==true)
{
	sol[x][y]=1;
	if(solve(x+1,y)==true)
	{
		return true;
	}
	if(solve(x,y+1)==true)
	{
		return true;
	}
	sol[x][y]=0;
	return false;
	
}
return false;
}

bool findsol()
{
	if(solve(0,0)==false)
	{
		cout<<"there is no path";
		return false;
	}
	show();
	return true;
}
int main()
{
	findsol();
}
