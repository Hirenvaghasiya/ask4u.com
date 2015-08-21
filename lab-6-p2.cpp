#define maxsize 5
#include<iostream>
using namespace std;
class queue
{
	int front;
	int rear;
	int que[maxsize];
	public:
		queue(){front=-1;rear=-1;};
		void enqueue(int d);
		void dequeue();
		void set_front(int f);
		void set_rear(int r);
		int get_front();
		int get_rear();
		void print();
};
void queue :: set_front(int f)
{
	front=f;
}
void queue :: set_rear(int r)
{
	rear=r;
}
int queue :: get_front()
{
	return front;
}
int queue :: get_rear()
{
	return rear;
}
void queue :: enqueue(int d)
{
	if((get_front()==0 && get_rear()==maxsize-1) || (get_front()==get_rear()+1))
	{
			cout<<"\n queue full";
	}
	else
	{
			if(get_rear()==-1 && get_rear()==-1)
			{
				
				set_front(0);
				set_rear(0);
				
			}
			else if(get_rear()==maxsize-1)
			{
				set_rear(0);
			}
			else
			{
				
				set_rear(get_rear()+1);
			}
			que[get_rear()]=d;
			
		
	}
}
void queue :: print()
{
	if(get_rear()==-1 || get_front()==-1)
	{
		cout<<"\n\n\t\tQueue is empty\n\n";
	}
	else
	{
		if(get_front()<=get_rear())
		{
			for(int i=get_front();i<=get_rear();i++)
			{
				cout<<"\n"<<que[i];
			}
		}
		if(get_front()>get_rear())
		{
			for(int i=get_front();i<maxsize-1;i++)
			{
				cout<<"\n"<<que[i];
			}
			for(int j=0;j<=get_rear();j++)
			{
				cout<<"\n"<<que[j];
			}
		}
	}	
}
void queue :: dequeue()
{
	int tmp;
	if(get_front()==-1 || get_rear()==-1)
	{
		cout<<"\n\t\tQueue is Empty\n\n";
	}
	else
	{
			tmp=que[get_front()];	
		if(get_front()==get_rear())
		{
			set_rear(-1);
			set_front(-1);
		}
		else if(get_front()==maxsize-1)
		{
			set_front(0);
		}
		else
		{
			set_front(get_front()+1);
		}
		cout<<"\n\t\t Deleted element: "<<tmp;
	}
	

}
int main()
{
	queue obj;
	int ch;
	int d;
	do
	{
		cout<<"\n\t\t1:Insertion\n\t\t2:Deletion\n\t\t3:Print\n\t\t4:Exit\n\t\tEnter Choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
					cout<<"\n\t\tEnter value :";
					cin>>d;
					obj.enqueue(d);
					break;
			case 2:
					obj.dequeue();
					break;
			case 3:
					obj.print();
					break;
			default:
					cout<<"\n\t\tInvalid choice\n";
					break;
					
		}
	}while(ch!=4);
	return 0;
}
