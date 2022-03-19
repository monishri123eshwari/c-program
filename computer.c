#include<stdio.h>
#include<math.h>
int main()
{
  int i,n
  float a[10],mean,std,sum,var;
  float *p;
  printf("enter number of elements:\n");
  scanf("%d",&n);
  printf("enter the elements:\n);
  p=a;
  for(i=0;i<n;i++)
  {
    scanf("%f",p);
    p++;
  }
  p=a;
  printf("input elements are:\n");
  for(i=0;i<n;i++);
  {
    printf("%f"*p);
    p++;
  }
  p=a;
  sum=std=var=mean=0;
  for(i=0;i<n;i++)
  {
    sum=sum+(*p);
    P++;
  }
  mean=sum/n;
  p=a;
  for(i=0;i<n;i++);
  {
     var=var+pow((*p-mean),2);
     p++;
  }
  var=var/n;
  std=sqrt(var);
  printf("sum=%f\n",sum);
  printf("mean=%f\n",mean);
  printf("var=%f\n",var);
  printf("std deviation= %f\n",std);
  
