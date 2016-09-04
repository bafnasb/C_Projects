void main()
{
int ch,a,b,c,d,e,f,g,h,i,j,k;
char z;
clrscr();
printf("\n\t\t\t\tWelcome To\n\n\t\t\t  KAUN BANEGA CROREPATI\n");
printf("\nInstructions :-\n");
printf("\t1.The Game Consists of 10 questions.");
printf("\n\t2.Each Question Will have four Options.");
printf("\n\t3.From all the options only one will be correct.");
printf("\n\t4.With each Correct answer the player will move to the next level.");
printf("\n\t5.Player will continue to play until he/she chooses the wrong answer.");
printf("\n\nPrize Description :- \n\n");
printf("\nFirst Correct Answer = Rs.1000/-");
printf("\nSecond Correct Answer = Rs.5000/-");
printf("\nThird Correct Answer = Rs.10000/-");
printf("\nFourth Correct Answer = Rs.20000/-");
printf("\nFifth Correct Answer = Rs.40000/-");
printf("\nSixth Correct Answer = Rs.100000/-");
printf("\nSeventh Correct Answer = Rs.500000/-");
printf("\nEighth Correct Answer = Rs.1000000/-");
printf("\nNineth Correct Answer = Rs.5000000/-");
printf("\nTenth Correct Answer = Rs.10000000/-\n\n");
printf("\nType Y To Jump into the GAME and to Go back Press N:-");
scanf("%c",&z);
if(z=='Y' || z=='y')
{
clrscr();
printf("\n\n\n\n\n\n\n\t\t\t\tLets Begin");
ch=1;
switch(ch)
	{
case 1:
	clrscr();
	printf("\n\n\t\t\nWhat is the capital of INDIA?");
	printf("\t\t\n1.Delhi\n2.Mumbai\n3.Bangalore\n4.Chennai\n");
	scanf("%d",&a);
		if(a==1)
		       {	printf("\nCorrect Answer");
				printf("\nYou Won Rs.1000/-");
		       }
		else
		       {
			printf("\nYou Lost");
			printf("\nPrize Money=Rs.0/-");
			break;
		       }
case 2:
	clrscr();
	printf("\n\n\t\t\nWhat is the National Sport of INDIA?");
	printf("\t\t\n1.Chess\n2.Cricket\n3.Hockey\n4.Ludo\n");
	scanf("%d",&b);
		if(b==3)
		       {	printf("\nCorrect Answer");
				printf("\nYou Won Rs.5000/-");
		       }
		else
		       {
			printf("\nYou Lost");
			printf("\nTotal Prize=Rs.1000/-");
			break;
		       }
case 3:
	clrscr();
	printf("\n\n\t\t\nWhich one of these is a leap Year?");
	printf("\t\t\n1.2016\n2.2015\n3.2014\n4.2017\n");
	scanf("%d",&c);
		if(c==1)
		       {	printf("\nCorrect Answer");
				printf("\nYou Won Rs.10000/-");
		       }
		else
		       {
			printf("\nYou Lost");
			printf("\nTotal Prize=Rs.5000/-");
			break;
		       }
case 4:
	clrscr();
	printf("\n\n\t\t\nWhich one of these is the largest Number?");
	printf("\t\t\n1.8564\n2.854261\n3.56274\n4.20152\n");
	scanf("%d",&d);
		if(d==2)
		       {	printf("\nCorrect Answer");
				printf("\nYou Won Rs.20000/-");
		       }
		else
		       {
			printf("\nYou Lost");
			printf("\nTotal Prize=Rs.10000/-");
			break;
		       }
case 5:
	clrscr();
	printf("\n\n\t\t\nWho is Known as Missile Man of India?");
	printf("\t\t\n1.Dr.APJ. Abdul Kalam\n2.Mr.Narendra Modi\n3.Mr.Pranav Mikherjee\n4.Albert Einstein\n");
	scanf("%d",&e);
		if(e==1)
		       {	printf("\nCorrect Answer");
				printf("\nYou Won Rs.40000/-");
		       }
		else
		       {
			printf("\nYou Lost");
			printf("\nTotal Prize=Rs.20000/-");
			break;
		       }
case 6:
	clrscr();
	printf("\n\n\t\t\nIn Which Year Does India Won Its First Ever Cricket World Cup?");
	printf("\t\t\n1.2012\n2.1983\n3.2003\n4.1996\n");
	scanf("%d",&f);
		if(f==2)
		       {	printf("\nCorrect Answer");
				printf("\nYou Won Rs.100000/-");
		       }
		else
		       {
			printf("\nYou Lost");
			printf("\nTotal Prize=Rs.40000/-");
			break;
		       }
case 7:
	clrscr();
	printf("\n\n\t\t\nWho is Known as the God Of Cricket In INDIA?");
	printf("\t\t\n1.Wriddhiman Saha\n2.Anil Kumble\n3.Amit Mishra\n4.Sachin Ramesh Tendulkar\n");
	scanf("%d",&g);
		if(g==4)
		       {	printf("\nCorrect Answer");
				printf("\nYou Won Rs.500000/-");
		       }
		else
		       {
			printf("\nYou Lost");
			printf("\nTotal Prize=Rs.100000/-");
			break;
		       }
case 8:
	clrscr();
	printf("\n\n\t\t\nIn which year did Abhinav Bindra Won the Olympic Gold Medal?");
	printf("\t\t\n1.2016\n2.2004\n3.2008\n4.1996\n");
	scanf("%d",&h);
		if(h==3)
		       {	printf("\nCorrect Answer");
				printf("\nYou Won Rs.1000000/-");
		       }
		else
		       {
			printf("\nYou Lost");
			printf("\nTotal Prize=Rs.500000/-");
			break;
			}
case 9:
	clrscr();
	printf("\n\n\t\t\nIndia Celebrates Its Republic Day on?");
	printf("\t\t\n1.23rd Dec\n2.30th June\n3.12th Mar\n4.26th Jan\n");
	scanf("%d",&i);
		if(i==4)
		       {	printf("\nCorrect Answer");
				printf("\nYou Won Rs.5000000/-");
		       }
		else
		       {
			printf("\nYou Lost");
			printf("\nTotal Prize=Rs.1000000/-");
			break;
		       }
case 10:
	clrscr();
	printf("\n\n\t\t\nWhich was the successful Indian Cricket Captain?");
	printf("\t\t\n1.Amit Mishra\n2.Sachin Tendulkar\n3.Virendra Sehwag\n4.Sourav Ganguly\n");
	scanf("%d",&j);
		if(j==4)
		       {	printf("\nCorrect Answer");
				printf("\nYou Won Rs.10000000/-");
		       }
		else
		       {
			printf("\nYou Lost");
			printf("\nTotal Prize=Rs.5000000/-");
			break;
		       }
default:
	printf("\nThankYou For Playing");
	break;
}
}
	else
	printf("\nThankYou,Do play Next Time.");
getch();
}
