#include<stdio.h>
#define SIZE 20
void PUSH(int *stack,int *t,int i,int val,int s);
void POP(int *stack,int *t,int i);
//void DISPLAY(int *stack,int t[],int i);
int main()
{	int kstack[SIZE],total,nos,span,i,top[10],n=1,o,index,number,e;
	for(i=0;i<SIZE;i++)
	kstack[i]=0;
	printf("Enter the no of total elements in the array\n");
	scanf("%d",&total);//20
	printf("Enter the no of stacks you want in the array\n");
	scanf("%d",&nos);//4
	span=total/nos;//span=20/4=5i.e elements in each stack
	for(i=0;i<nos;i++)
	top[i]=0+span*i; //initialize each top of each stack 
	int p;	
	while(n)
	{	printf("Press 1 for push\n");
		printf("Press 2 for POP\n");
		printf("Press 3 for display\n");
		printf("Press 0 to quit\n");
		scanf("%d",&o);
		switch(o)
		{	case 1:printf("The element is to be added into which stack\n");
			scanf("%d",&index);//2nd stack
			number=index-1;
			printf("Enter the element\n");//5
			scanf("%d",&e);//0123456789     second stack starts from 5
			PUSH(kstack,&top[number],number,e,span);
			for(p=0;p<SIZE;p++)
				printf("%d ",kstack[p]);
			break;
			case 2:printf("Enter the stack no you want to pop from\n");
			scanf("%d",&index);
			number=index-1;
			POP(kstack,&top[number],number);
			//case 3:prinstf("Which stack do u want to display\n");
			//scanf("%d",&index);
			//number=index-1;
			//DISPLAY(kstack,top,number);
			break;		
	}
		printf("Do u want to continue 1/0\n");
		scanf("%d",&n);
	}
return 0;
}
void PUSH(int *stack,int *t,int i,int val,int s)
{//i=index-1;
//int start[10];
//start[*i]=s*(*i));//i.e start from 5th position i.e 5=5*(2-1)

//printf("getting %d\n",i);
stack[t[i]]=val;
t[i]=(t[i])+1;
}
void POP(int *stack,int *t,int i)
{(t[i])--;
printf("%d\n",stack[t[i]]);

}
/*void DISPLAY(int *stack,int t[],int i)
{int j;
for(j=t[i];j>=0;j--)
printf("%d\n",stack[j]);
}


*/
