//Conversion Of Date To Day
void main()
{
int year,month,date,day_of_the_week,julian_day,i,fours,hundreds,four_hundreds;
int a[15]={31,28,31,30,31,30,31,31,30,31,30,31};\
julian_day=0;
printf("\nEnter the Year In Which You want the Day :");
scanf("%d",&year);
printf("\nEnter choice:-  '1'  for January");
printf("\nEnter choice:-  '2'  for February");
printf("\nEnter choice:-  '3'  for March");
printf("\nEnter choice:-  '4'  for April");
printf("\nEnter choice:-  '5'  for May");
printf("\nEnter choice:-  '6'  for June");
printf("\nEnter choice:-  '7'  for July");
printf("\nEnter choice:-  '8'  for August");
printf("\nEnter choice:-  '9'  for September");
printf("\nEnter choice:-  '10' for October");
printf("\nEnter choice:-  '11' for November");
printf("\nEnter choice:-  '12' for December\n");
printf("\nEnter The Month No. Of Your Wish :");
scanf("%d",&month);
printf("\nEnter the Date of the Month :");
scanf("%d",&date);
for(i=0;i<month-1;i++)
julian_day=julian_day+a[i];
julian_day=julian_day+date;
if(month>=2)
{
if(year%4==0&&year%100!=0||year%400==0)
julian_day=julian_day+1;
}
printf("\nCounting of the Current day in The Year: %d\n",julian_day);
fours=(year-1)/4;
hundreds=(year-1)/100;
four_hundreds=(year-1)/400;
day_of_the_week=(year+julian_day+fours-hundreds+four_hundreds)%7;
//printf("%d",day_of_the_week);
switch(day_of_the_week)
{
case 0:
        printf("\nSaturday\n");
        break;
case 1:
        printf("\nSunday\n");
        break;
case 2:
        printf("\nMonday\n");
        break;
case 3:
        printf("\nTuesday\n");
        break;
case 4:
        printf("\nWednesday\n");
        break;
case 5:
        printf("\nThursday\n");
        break;
case 6:
        printf("\nFriday\n");
        break;
default:
        break;
}
}
