void main()
{
int dgt,a[10],i,b,j,h,k,f;
char d[10]={'I','V','X','L','C','D','M','\0'};
printf("\nEnter the number,you wish to Convert to Roman :");
scanf("%d",&dgt);
for(h=0;dgt!=0;dgt=dgt/10,h++)
{
a[h]=dgt%10;
printf("\nDigit :%d",a[h]);
}
printf("\nNumber of Digits :%d\n",h);
for(i=h-1;i>=0;i--)
{
k=2*i;
f=4*i;
        if(a[i]<4&&a[i]>0)
       {
        for(j=0;j<a[i];j++)
         printf("%c",d[k]);
       }
   else if(a[i]==4)
        printf("%c%c",d[k],d[k+1]);
   else if(a[i]==5)
        printf("%c",d[k+1]);
   else if(a[i]<9&&a[i]>5)
       {
        printf("%c",d[k+1]);
        for(j=0;j<a[i]-5;j++)
        printf("%c",d[k]);
       }
   else if(a[i]==9)
        printf("%c%c",d[k],d[f]);
}
}
