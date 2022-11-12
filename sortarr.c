#include<stdio.h>
void main()
{
int i,j,num,temp;
printf("Enter size of array: ");
scanf("%d",&num);
int a[num];
printf("Enter %d array element for bubble sort: \n",num);
for(i=0;i<num;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<num-1;i++)
{
  for(j=0;j<num-i-1;j++)
  {
   if(a[j]>a[j+1])
   {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
   }
  }
}
printf("The sorted array is....\n");
for(i=0;i<num;i++)
{
  printf("%d  ",a[i]);
}
}
