#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
int size=20,x=15,y=6,x1=5,y1=10,score=0,k,i,j;
char temp='p';
int check()
{
	for(i=1;i<=size;i++)
	{
		if(x<=1||y>=size||x>=size||y<=1)
		{
			cout<<"Game over"<<endl<<"Score:"<<score;
			return 1;
		}
		if(x==x1&&y==y1)
		{
   			score++;
			return 2;
		}
		else
		{
			for(j=1;j<=size;j++)
			{
				if(i==1||i==size||j==size||j==1)
				{
					cout<<"#";
				}
				else
				{
					if(i==x&&j==y)
					{
						cout<<"O";
					}
					else if(i==x1 && j==y1)
					{
						cout<<"*";
					}
					else
					{
						cout<<" ";
					}
   				}
  		    }
    		cout<<endl;
        }
    }
}
void begin()
{
	while(1)
	{
		system("cls");
		int flag=check();
		if(flag==1)
		{
			break;
		}
		if(flag==2)
		{
			x1=2+rand()%18;
			y1=2+rand()%18;
		}
		char key;
		if(kbhit())
		{
			key=getch();
		}
		switch(key)
		{
			case 'i':
			{
				if(temp!='k')
				{
					--x;
					temp=key;
				}
				else
				{
					key=temp;
				}
				break;
			}
			case 'j':
			{
				if(temp!='l')
				{
					--y;
					temp=key;
				}
				else
				{
					key=temp;
				}
				break;
			}
			case 'k':
			{
				if(temp!='i')
				{
					x++;
					temp=key;
				}
				else
				{
					key=temp;
				}
				break;
			}
			case 'l':
			{
				if(temp!='j')
				{
					y++;
					temp=key;
				}
				else
				{
					key=temp;
				}
				break;
			}
			default:
			{
				key=temp;
			}
		}
		Sleep(10);
	}
}
int main()
{
	begin();
}
