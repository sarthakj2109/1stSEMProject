#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int Abundant()
{
	int n,i,sum=0;
	char ch='a';
	printf("Enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=(n/2);i++)
	{
		if(n%i==0)
			sum+=i;
	}
	if(sum>n)
		printf("Abundant Number\n");
	else
		printf("Not an Abundant Number\n");
	while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
	{
		printf("Do you want to give another input?\nEnter 'Y' for yes and 'N' to return to main menu\n");
		scanf("%c",&ch);
		scanf("%c",&ch);
		if(ch=='Y' || ch=='y')
			return 1;
		else if(ch=='N' || ch=='n')
			return 0;
		else
			printf("Wrong Input !! Please re-enter your choice !\n");
	}
	
						
}

int Amicable()
{
	long int n,m,i,sum=0;
	int flag=0;
	char ch='a';
	printf("Enter two numbers\n");
	scanf("%ld %ld",&n,&m);
	for(i=1;i<=(n/2);i++)
	{
		if(n%i==0)
			sum+=i;

	}
	printf("\n");
	if(sum==m)
		flag=1;
	sum=0;
	for(i=1;i<=(m/2);i++)
	{
		if(m%i==0)
			sum+=i;

	}
	if(sum!=n)
		flag=0;

	if(flag==1)
		printf("Amicable Numbers\n");
	else
		printf("Not Amicable Numbers\n");
	while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
	{
		printf("Do you want to give another input?\nEnter 'Y' for yes and 'N' to return to main menu\n");
		scanf("%c",&ch);
		scanf("%c",&ch);
		if(ch=='Y' || ch=='y')
			return 1;
		else if(ch=='N' || ch=='n')
			return 0;
		else
			printf("Wrong Input !! Please re-enter your choice !\n");
	}
}

int Automorphic()
{
	long int n,sq,temp,num=0;
	int c=0,d,i;
	char ch='a';
	printf("Enter a number\n");
	scanf("%ld",&n);
	sq=(n*n);
	printf("%ld * %ld = %ld\n",n,n,sq);
	temp=n;
	while(temp>0)
	{
		temp/=10;
		c++;
	}
	temp=sq;
	for(i=0;i<c;i++)
	{
		d=temp%10;
		num+=(d*(pow(10,i)));
		temp/=10;
	}
	if(num==n)
		printf("AutoMorphic Number\n");
	else
		printf("Not an AutoMorphic Number\n");
	while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
	{
		printf("Do you want to give another input?\nEnter 'Y' for yes and 'N' to return to main menu\n");
		scanf("%c",&ch);
		scanf("%c",&ch);
		if(ch=='Y' || ch=='y')
			return 1;
		else if(ch=='N' || ch=='n')
			return 0;
		else
			printf("Wrong Input !! Please re-enter your choice !\n");
	}
}

int Circular()
{
	long int n,temp,div,t,c=0,i,d,flag=1,j,c1=0;
	char ch='a';
	printf("Enter a number\n");
	scanf("%ld",&n);
	temp=n;
	while(temp>0)
	{
		c++;
		temp/=10;
	}
	temp=n;
	c1=c-1;
	for(j=2;j<temp;j++)
	{
		if(temp%j==0)
			flag=0;
	}
	if(flag!=0)
	{       for(i=1;i<c;i++)
		{
			d=temp%10;
			div=temp/10;
			temp=((pow(10,c1))*d+div);
			for(j=2;j<temp;j++)
			{
				if(temp%j==0)
					flag=0;
			}
		}
	}
	if(flag==1)
		printf("Circular Prime\n");
	else
		printf("Not Circular Prime\n");
	while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
	{
		printf("Do you want to give another input?\nEnter 'Y' for yes and 'N' to return to main menu\n");
		scanf("%c",&ch);
		scanf("%c",&ch);
		if(ch=='Y' || ch=='y')
			return 1;
		else if(ch=='N' || ch=='n')
			return 0;
		else
			printf("Wrong Input !! Please re-enter your choice !\n");
	}
}

int Deficient()
{
	int n,i,sum=0;
	char ch='a';
	printf("Enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=(n/2);i++)
	{
		if(n%i==0)
			sum+=i;
	}
	if(sum<n)
		printf("Deficient Number\n");
	else
		printf("Not a Deficient Number\n");
	while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
	{
		printf("Do you want to give another input?\nEnter 'Y' for yes and 'N' to return to main menu\n");
		scanf("%c",&ch);
		scanf("%c",&ch);
		if(ch=='Y' || ch=='y')
			return 1;
		else if(ch=='N' || ch=='n')
			return 0;
		else
			printf("Wrong Input !! Please re-enter your choice !\n");
	}
}

int Disarium()
{
	long int n,temp,num=0;
	int c=0,d,i;
	char ch='a';
	printf("Enter a number\n");
	scanf("%ld",&n);
	temp=n;
	while(temp>0)
	{
		temp/=10;
		c++;
	}
	temp=n;
	for(i=c;i>=1;i--)
	{
		d=temp%10;
		num+=pow(d,i);
		temp/=10;
	}
	if(num==n)
		printf("Disarium Number\n");
	else
		printf("Not a Disarium Number\n");
	while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
	{
		printf("Do you want to give another input?\nEnter 'Y' for yes and 'N' to return to main menu\n");
		scanf("%c",&ch);
		scanf("%c",&ch);
		if(ch=='Y' || ch=='y')
			return 1;
		else if(ch=='N' || ch=='n')
			return 0;
		else
			printf("Wrong Input !! Please re-enter your choice !\n");
	}
}

int Duck()
{
	long int n,temp;
	int d,c=0,i,flag=0;
	char ch='a';
	printf("Enter a number\n");
	scanf("%ld",&n);
	temp=n;
	while(temp>0)
	{
		temp/=10;
		c++;
	}
	temp=n;
	for(i=0;i<c;i++)
	{
		d=temp%10;
		if(d==0)
			flag=1;
		temp/=10;
	}
	if(flag==1)
		printf("Duck Number\n");
	else
		printf("Not a Duck Number\n");
	while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
	{
		printf("Do you want to give another input?\nEnter 'Y' for yes and 'N' to return to main menu\n");
		scanf("%c",&ch);
		scanf("%c",&ch);
		if(ch=='Y' || ch=='y')
			return 1;
		else if(ch=='N' || ch=='n')
			return 0;
		else
			printf("Wrong Input !! Please re-enter your choice !\n");
	}
}

int Fermat()
{
	double n,num=0,e;
	int i=0,flag=0,c=0;
	char ch='a';
	printf("Enter a number\n");
	scanf("%lf",&n);
	while(num<=n)
	{
		e=pow(2,i);
		num=(pow(2,e))+1;
		i++;
		if(num==n)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("Fermat Number\n");
	else
		printf("Not a Fermat Number\n");
	while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
	{
		printf("Do you want to give another input?\nEnter 'Y' for yes and 'N' to return to main menu\n");
		scanf("%c",&ch);
		scanf("%c",&ch);
		if(ch=='Y' || ch=='y')
			return 1;
		else if(ch=='N' || ch=='n')
			return 0;
		else
			printf("Wrong Input !! Please re-enter your choice !\n");
	}
}

int Harshad()
{
	long int n,temp,sum=0;
	int d;
	char ch='a';
	printf("Enter a number\n");
	scanf("%ld",&n);
	temp=n;
	while(temp>0)
	{
		d=temp%10;
		sum+=d;
		temp/=10;
	}
	if(n%sum==0)
		printf("Harshad Number\n");
	else
		printf("Not a Harshad Number\n");
	while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
	{
		printf("Do you want to give another input?\nEnter 'Y' for yes and 'N' to return to main menu\n");
		scanf("%c",&ch);
		scanf("%c",&ch);
		if(ch=='Y' || ch=='y')
			return 1;
		else if(ch=='N' || ch=='n')
			return 0;
		else
			printf("Wrong Input !! Please re-enter your choice !\n");
	}
}

int Kaprekar()
{
	long int n,sq,temp,num=0,num1=0;
	int i,j,c=0,d,flag=0;
	char ch='a';
	printf("Enter a number\n");
	scanf("%ld",&n);
	sq=(n*n);
	printf("%ld * %ld = %ld\n",n,n,sq);
	temp=sq;
	while(temp>0)
	{
		temp/=10;
		c++;
	}
	temp=sq;
	if(c%2==0)
	{
		for(i=0,j=0;i<c;i++)
		{
			if(i<=((c/2)-1))
			{
				d=(temp%10);
				if(i==0)
					num+=d;
				else
					num+=(d*(pow(10,i)));
				temp/=10;
			}
			else
			{
				d=(temp%10);
				if(j==0)
					num1+=d;
				else
					num1+=(d*(pow(10,j)));
				temp/=10;
				j++;

			}
		}
		temp=sq;
		if((num+num1)==n)
		{
			printf("%ld = %ld + %ld\n",n,num1,num);
			printf("Kaprekar Number\n");
			flag=1;
		}
		num=0,num1=0;
		if(flag==0)
		{
			for(i=0,j=0;i<c;i++)
			{
				if(i<=(c/2))
				{
					d=(temp%10);
					if(i==0)
						num+=d;
					else
						num+=(d*(pow(10,i)));
						temp/=10;
				}
				else
				{
					d=(temp%10);
					if(j==0)
						num1+=d;
					else
						num1+=(d*(pow(10,j)));
					temp/=10;
					j++;
				}
			}
			temp=sq;
			if((num+num1)==n)
			{
				printf("%ld = %ld + %ld\n",n,num1,num);
				printf("Kaprekar Number\n");
				flag=1;
			}
		}
	}

	else
	{
		for(i=0,j=0;i<c;i++)
		{
			if(i<=((c/2)))
			{
				d=(temp%10);
				if(i==0)
					num+=d;
				else
					num+=(d*(pow(10,i)));
				temp/=10;
			}
			else
			{
				d=(temp%10);
				if(j==0)
					num1+=d;
				else
					num1+=(d*(pow(10,j)));
				temp/=10;
				j++;
			}
		}
		if((num+num1)==n)
		{
			printf("%ld = %ld + %ld\n",n,num1,num);
			printf("Kaprekar Number\n");
			flag=1;
		}
	}
	
	if(flag==0)
	{
		printf("%ld != %ld + %ld\n",n,num1,num);
		printf("Not a Kaprekar Number\n");
	}
	while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
	{
		printf("Do you want to give another input?\nEnter 'Y' for yes and 'N' to return to main menu\n");
		scanf("%c",&ch);
		scanf("%c",&ch);
		if(ch=='Y' || ch=='y')
			return 1;
		else if(ch=='N' || ch=='n')
			return 0;
		else
			printf("Wrong Input !! Please re-enter your choice !\n");
	}
}

int Lucas()
{
	long int n,c=2,a=2,b=1,sum=0;
	char ch='a';
	printf("Enter number of terms upto which you want to print the Lucas Series \n");
	scanf("%ld",&n);
	if(n==1)
		printf("2\n");
	else if(n==2)
		printf("2\t1\n");
	else if(n>2)
	{
		printf("2\t1\t");
		while(c<=n)
		{
			sum=a+b;
			printf("%ld\t",sum);
			a=b;
			b=sum;
			c++;
		}
		printf("\n");
	}
	else
		printf("Wrong Input\n");
	while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
	{
		printf("Do you want to give another input?\nEnter 'Y' for yes and 'N' to return to main menu\n");
		scanf("%c",&ch);
		scanf("%c",&ch);
		if(ch=='Y' || ch=='y')
			return 1;
		else if(ch=='N' || ch=='n')
			return 0;
		else
			printf("Wrong Input !! Please re-enter your choice !\n");
	}
	
}

int Narc()
{
	long int n,temp,num=0;
	int c=0,d;
	char ch='a';
	printf("Enter a number\n");
	scanf("%ld",&n);
	temp=n;
	while(temp>0)
	{
		temp/=10;
		c++;
	}
	temp=n;
	while(temp>0)
	{
		d=temp%10;
		num+=pow(d,c);
		temp/=10;
	}
	if(num==n)
		printf("Narcissistic Number\n");
	else
		printf("Not a Narcissistic Number\n");
	while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
	{
		printf("Do you want to give another input?\nEnter 'Y' for yes and 'N' to return to main menu\n");
		scanf("%c",&ch);
		scanf("%c",&ch);
		if(ch=='Y' || ch=='y')
			return 1;
		else if(ch=='N' || ch=='n')
			return 0;
		else
			printf("Wrong Input !! Please re-enter your choice !\n");
	}
}

int Pronic()
{
	long int n;
	int i,flag=0;
	char ch='a';
	printf("Enter a number\n");
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		if((i*(i+1))==n)
			flag=1;
	}
	if(flag==1)
		printf("Pronic number\n");
	else
		printf("Not a Pronic Number\n");
	while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
	{
		printf("Do you want to give another input?\nEnter 'Y' for yes and 'N' to return to main menu\n");
		scanf("%c",&ch);
		scanf("%c",&ch);
		if(ch=='Y' || ch=='y')
			return 1;
		else if(ch=='N' || ch=='n')
			return 0;
		else
			printf("Wrong Input !! Please re-enter your choice !\n");
	}
}

int SumOfCub()
{
	long long int n,num=0,m;
	int i,j,k,a=0,c=0;
	int f[20];
	char ch='a';
	printf("Enter the upper limit (i.e the value of n)\n");
	scanf("%lld",&n);
	for(m=1;m<=n;m++)
	{
		k=cbrt((double)(m));
		for(i=1;i<=k;i++)
		{
			for(j=i;j<=k;j++)
			{
				num=(pow(i,3) + pow(j,3));
				if(num==m)
				{
					c++;
					f[a]=i;
					f[a+1]=j;
					a+=2;
				}
			}
		}
		if(c>=2)
		{
			printf("%lld ",m);
			for(i=0;i<a;i+=2)
			{
				printf("= %d^3 + %d^3 ",f[i],f[i+1]);
			}
			printf("\n");
		}
		a=0;c=0;
	}
	while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
	{
		printf("Do you want to give another input?\nEnter 'Y' for yes and 'N' to return to main menu\n");
		scanf("%c",&ch);
		scanf("%c",&ch);
		if(ch=='Y' || ch=='y')
			return 1;
		else if(ch=='N' || ch=='n')
			return 0;
		else
			printf("Wrong Input !! Please re-enter your choice !\n");
	}
}

int Ugly()
{
	int n,flag=1;
	char ch='a';
	printf("Enter a number\n");
	scanf("%d",&n);
	while(n!=1)
	{
		if(n%2==0)
			n=n/2;
		else if(n%3==0)
			n=n/3;
		else if(n%5==0)
			n=n/5;
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
		printf("Ugly Number\n");
	else
		printf("Not an Ugly Number\n");
	while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
	{
		printf("Do you want to give another input?\nEnter 'Y' for yes and 'N' to return to main menu\n");
		scanf("%c",&ch);
		scanf("%c",&ch);
		if(ch=='Y' || ch=='y')
			return 1;
		else if(ch=='N' || ch=='n')
			return 0;
		else
			printf("Wrong Input !! Please re-enter your choice !\n");
	}
}

int main()
{
	int Abundant();
	int Amicable();
	int Automorphic();
	int Circular();
	int Deficient();
	int Disarium();
	int Duck();
	int Fermat();
	int Harshad();
	int Kaprekar();
	int Lucas();
	int Narc();
	int Pronic();
	int SumOfCub();
	int Ugly();
	
	int choice,st;
	int i;
	char ch;
	start:
		ch='a';
		st=1;
		system("cls");
		for(i=0;i<=165;i++)
			printf("=");
		printf("\n\t\t\t\t\t\t\t\t\t\tWELCOME\n");
		for(i=0;i<=165;i++)
			printf("=");
		printf("\n\t\t\t\t\t\t\t\t\t<<NUMBERS NEVER HEARD OF>>\n\n");
		printf("1. Abundant Number\n2. Amicable Numbers\n3. Automorphic Number\n4. Circular Prime Number\n5. Deficient Number\n6. Disarium Number\n7. Duck Number\n8. Fermat Number\n9. Harshad Number\n10. Kaprekar Number\n11. Lucas Series\n12. Narcissistic Number\n13. Pronic Number\n14. Breaking Cubes Series\n15. Ugly Number\n");
		printf("\nWhich Number would you like to explore today??\nEnter the number corresponding to your choice\nEg - Enter 2 for Amicable Number\nNOTE : Enter 0 to exit the program\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("A number is said to be Abundant if the sum of its proper divisors is greater than the number itself\n");
				printf("Example : Consider the number 24,\nProper Divisors of 24 are 1,2,3,4,6,8 and 12\nTheir sum = 36 (which is greater than 24)\nHence, 24 is an Abundant Number\n");
				while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
				{
					printf("Would you like to try it out?(Y/N)\n");
					scanf("%c",&ch);
					scanf("%c",&ch);
					if(ch=='Y' || ch=='y')
					{
						while(st==1)
							st=Abundant();
						if(st==0)
							goto start;
					}
					else if(ch=='N' || ch=='n')
						goto start;
					else
						printf("Wrong Input !! Please re-enter your choice !\n");
				}
			break;
				
			case 2:
				printf("Two numbers are said to be amicable numbers if the sum of proper diviors of one is equal to the other and vice versa\n");
				printf("Example : Consider the numbers 220 and 284,\nProper Divisors of 220 are 1,2,4,5,10,11,20,22,44,55 and 110\nTheir sum = 284 \nAnd, Proper Divisors of 284 are 1,2,4,71 and 142\nTheir sum = 220\nHence, 220 and 284 are Amicable Numbers\n");
				while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
				{
					printf("Would you like to try it out?(Y/N)\n");
					scanf("%c",&ch);
					scanf("%c",&ch);
					if(ch=='Y' || ch=='y')
					{
						while(st==1)
							st=Amicable();
						if(st==0)
							goto start;
					}
					else if(ch=='N' || ch=='n')
						goto start;
					else
						printf("Wrong Input !! Please re-enter your choice !\n");
				}
			break;
				
			case 3:
				printf("A number is called  an Automorphic Number if its square ends with the same digits as the original number\n");
				printf("Example : Consider the number 25,\nIts square = 625 (last two digits are 25)\nHence, 25 is an Automorphic Number\n");
				while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
				{
					printf("Would you like to try it out?(Y/N)\n");
					scanf("%c",&ch);
					scanf("%c",&ch);
					if(ch=='Y' || ch=='y')
					{
						while(st==1)
							st=Automorphic();
						if(st==0)
							goto start;
					}
					else if(ch=='N' || ch=='n')
						goto start;
					else
						printf("Wrong Input !! Please re-enter your choice !\n");
				}
			break;
			
			case 4:
				printf("A number is said to be Circular Prime if all the circular permutations of that number are prime\n");
				printf("Example : Consider the number 197,\nIts circular permutations are 197, 971 and 791\nAll of which are prime numbers\nHence, 197 is a Circular Prime Number\n");
				while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
				{
					printf("Would you like to try it out?(Y/N)\n");
					scanf("%c",&ch);
					scanf("%c",&ch);
					if(ch=='Y' || ch=='y')
					{
						while(st==1)
							st=Circular();
						if(st==0)
							goto start;
					}
					else if(ch=='N' || ch=='n')
						goto start;
					else
						printf("Wrong Input !! Please re-enter your choice !\n");
				}
			break;
			
			case 5:
				printf("A number is said to be Deficient if the sum of its proper divisors is less than the number itself\n");
				printf("Example : Consider the number 55,\nProper Divisors of 55 are 1,5 and 11\nTheir sum = 17 (which is less than 55)\nHence, 55 is a Deficient Number\n");
				while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
				{
					printf("Would you like to try it out?(Y/N)\n");
					scanf("%c",&ch);
					scanf("%c",&ch);
					if(ch=='Y' || ch=='y')
					{
						while(st==1)
							st=Deficient();
						if(st==0)
							goto start;
					}
					else if(ch=='N' || ch=='n')
						goto start;
					else
						printf("Wrong Input !! Please re-enter your choice !\n");
				}
			break;
			
			case 6:
				printf("A n-digit number is a Disarium Number if sum of its individual digits raised to its position results in the original number\n");
				printf("Example : Consider the number 135,\n1^1 + 3^2 + 5^3 = 135\nHence, 135 is a Disarium Number\n");
				while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
				{
					printf("Would you like to try it out?(Y/N)\n");
					scanf("%c",&ch);
					scanf("%c",&ch);
					if(ch=='Y' || ch=='y')
					{
						while(st==1)
							st=Disarium();
						if(st==0)
							goto start;
					}
					else if(ch=='N' || ch=='n')
						goto start;
					else
						printf("Wrong Input !! Please re-enter your choice !\n");
				}
			break;
			
			case 7:
				printf("A number with zero in it (except preceeding zeroes) is called a Duck number\n");
				printf("Example : 507 is a Duck Number\nNOTE : 0089 is NOT a Duck Number\n");
				while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
				{
					printf("Would you like to try it out?(Y/N)\n");
					scanf("%c",&ch);
					scanf("%c",&ch);
					if(ch=='Y' || ch=='y')
					{
						while(st==1)
							st=Duck();
						if(st==0)
							goto start;
					}
					else if(ch=='N' || ch=='n')
						goto start;
					else
						printf("Wrong Input !! Please re-enter your choice !\n");
				}
			break;
			
			case 8:
				printf("Number of the form 2^(2^n) + 1 is called a Fermat Number\n");
				printf("Example : Consider the number 17,\nFor n=2, 2^(2^n) + 1 = 17\nHence, 17 is a Fermat Number\n");
				while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
				{
					printf("Would you like to try it out?(Y/N)\n");
					scanf("%c",&ch);
					scanf("%c",&ch);
					if(ch=='Y' || ch=='y')
					{
						while(st==1)
							st=Fermat();
						if(st==0)
							goto start;
					}
					else if(ch=='N' || ch=='n')
						goto start;
					else
						printf("Wrong Input !! Please re-enter your choice !\n");
				}
			break;
			
			case 9:
				printf("A n-digit number is a Harshad Number or a Niven number if it is divisible by the sum of its digits\n");
				printf("Example : Consider the number 63,\nIts sum of digits = 9\nAnd, 9*7 = 63\nHence, 63 is a Harshad Number\n");
				while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
				{
					printf("Would you like to try it out?(Y/N)\n");
					scanf("%c",&ch);
					scanf("%c",&ch);
					if(ch=='Y' || ch=='y')
					{
						while(st==1)
							st=Harshad();
						if(st==0)
							goto start;
					}
					else if(ch=='N' || ch=='n')
						goto start;
					else
						printf("Wrong Input !! Please re-enter your choice !\n");
				}
			break;
			
			case 10:
				printf("A number is called  a Kaprekar Number if its square can be split in two parts such that their sum result in the original number\n");
				printf("Example : Consider the number 297,\nIts square = 88209\nAnd, 88 + 209 = 297\nHence, 297 is a Kaprekar Number\n");
				while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
				{
					printf("Would you like to try it out?(Y/N)\n");
					scanf("%c",&ch);
					scanf("%c",&ch);
					if(ch=='Y' || ch=='y')
					{
						while(st==1)
							st=Kaprekar();
						if(st==0)
							goto start;
					}
					else if(ch=='N' || ch=='n')
						goto start;
					else
						printf("Wrong Input !! Please re-enter your choice !\n");
				}
			break;
			
			case 11:
				printf("Lucas Series starts with the numbers 2 and 1\nEvery next term is obtained by adding the previous two terms\n");
				while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
				{
					printf("Would you like to try it out?(Y/N)\n");
					scanf("%c",&ch);
					scanf("%c",&ch);
					if(ch=='Y' || ch=='y')
					{
						while(st==1)
							st=Lucas();
						if(st==0)
							goto start;
					}
					else if(ch=='N' || ch=='n')
						goto start;
					else
						printf("Wrong Input !! Please re-enter your choice !\n");
				}
			break;
			
			case 12:
				printf("A n-digit number is a Narcissistic Number if sum of its individual digits raised to nth power result in the original number\n");
				printf("Example : Consider the number 1634,\n1^4 + 6^4 + 3^4 + 4^4 = 1634 \nSimilarly, for 153, 1^3 + 5^3 + 3^3 = 153\nHence, 1634 and 153 are Narcissistic Numbers\n");
				while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
				{
					printf("Would you like to try it out?(Y/N)\n");
					scanf("%c",&ch);
					scanf("%c",&ch);
					if(ch=='Y' || ch=='y')
					{
						while(st==1)
							st=Narc();
						if(st==0)
							goto start;
					}
					else if(ch=='N' || ch=='n')
						goto start;
					else
						printf("Wrong Input !! Please re-enter your choice !\n");
				}
			break;
			
			case 13:
				printf("Numbers that are a product of two consecutive integers are called Pronic Numbers\n");
				printf("Example : 4*5 =20, 7*8 = 56\nHence, 20 and 56 are Pronic Numbers\n");
				while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
				{
					printf("Would you like to try it out?(Y/N)\n");
					scanf("%c",&ch);
					scanf("%c",&ch);
					if(ch=='Y' || ch=='y')
					{
						while(st==1)
							st=Pronic();
						if(st==0)
							goto start;
					}
					else if(ch=='N' || ch=='n')
						goto start;
					else
						printf("Wrong Input !! Please re-enter your choice !\n");
				}
			break;
			
			case 14:
				printf("This series consists of all the numbers between 1 and n that can be represented as sum of two cubes in two or more ways\n");
				printf("Example : 39312 = 2^3 + 34^3 = 15^3 + 33^3\n");
				while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
				{
					printf("Would you like to try it out?(Y/N)\n");
					scanf("%c",&ch);
					scanf("%c",&ch);
					if(ch=='Y' || ch=='y')
					{
						while(st==1)
							st=SumOfCub();
						if(st==0)
							goto start;
					}
					else if(ch=='N' || ch=='n')
						goto start;
					else
						printf("Wrong Input !! Please re-enter your choice !\n");
				}
			break;
			
			case 15:
				printf("Ugly No has 2,3,5 as the only prime factors\n");
				printf("Example : Consider the number 30,\nIts Prime factors are 2,3 and 5\nHence, 30 is a Ugly Number\n");
				while(ch !='y' && ch !='Y' && ch != 'n' && ch !='N')
				{
					printf("Would you like to try it out?(Y/N)\n");
					scanf("%c",&ch);
					scanf("%c",&ch);
					if(ch=='Y' || ch=='y')
					{
						while(st==1)
							st=Ugly();
						if(st==0)
							goto start;
					}
					else if(ch=='N' || ch=='n')
						goto start;
					else
						printf("Wrong Input !! Please re-enter your choice !\n");
				}
			break;
			
			case 0:
				goto exit;
			
			default:
				printf("Wrong Input !! Choice can be in the range [0,15] only!! Press any key to return to main menu..\n");
				getch();
				goto start;
		}
	exit:
		printf("So you have decided to leave, Alright!! Have a nice day, Good Bye!\n");
		printf("(Press any key to exit)");
		getch();
	return 0;
}

