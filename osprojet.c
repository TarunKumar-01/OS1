#include<conio.h>
#include<stdio.h>
	struct st
	{
	int nm;
	int flag;
	};
	int main()
	{
	 int i,j,sm=0,n,minm,loc,x,y;
	 struct st d[20];
	 int disk;
	 int ar[20],a[20];
	 printf(" Question 31 \n");
	 printf("Enter number of location\t");
	 scanf("%d",&n);
	 printf("enter position of head\t");
	 scanf("%d",&disk);
	 printf("enter elements of disk queue\n");
	 for(i=0;i<n;i++)
	 {
	 scanf("%d",&d[i].nm); 
	   d[i].flag=0;
	 }
	 for(i=0;i<n;i++)
	 {      
	    x=0; 
	 minm=0;
	 loc=0;
	  for(j=0;j<n;j++)
	  {
	   if(d[j].flag==0)
	   {
	   if(x==0)
	   {
	   ar[j]=disk-d[j].nm;
	   if(ar[j]<0){ ar[j]=d[j].nm-disk;}
	   minm=ar[j];
	   loc=j;
	   x++;
	    }
	   else
	   {
	   ar[j]=disk-d[j].nm;
	   if(ar[j]<0)
	   { 
	   ar[j]=d[j].nm-disk;
	   }
	    }
	    if(minm>ar[j])
		{
		 minm=ar[j]; 
		 loc=j;
		 }
	     }
	  }
	     d[loc].flag=1;
	     a[i]=d[loc].nm-disk;
	     if(a[i]<0)
		 {
		 a[i]=disk-d[loc].nm;
		 }
	 
	     disk=d[loc].nm;
	 }
	 
	 
	 for(i=0;i<n;i++)
	 {
	 sm=sm+a[i];     
	 }
       printf("\nTotal Distance to move %d",sm);
	 getch();
	 return 0;
	}
