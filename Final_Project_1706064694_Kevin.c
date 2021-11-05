#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*This program is made by
  Name: Kevin
  NPM: 1706064694
 Major: Electrical Engineering
 
Basic Computer~
*/

char nba[20][250]={"Thunder vs Jazz\t 4/19/18", "Heat vs 76ers\t 4/20/18", "Spurs vs Warriors\t 4/20/18", "Pacers vs Cavaliers\t 4/21/18", "Wizards vs Raptors\t 4/21/18", "Bucks vs Celtics\t 4/21/18"};
char name[32][100]={'\0'};
char number [32][2]={'\0'};
int num[32]={0};
int nbano;
int i=0;
int money, totmoney=0;
char nameregist [100], username1[15], pass1[15], username2[15], pass2[15], hp[15], email[100];

void menu();
void signup();
void login();
void interface();
void addmoney();
void checkmoney();
void matchlist();
void namenumber(int amount, char numstr[100]);
void buyticket ();
int readnumber (int nbano);
void readname (int nbano);
void status ();
void statusbuy (int );
void popcorn();
int exitchoice();


void main()
{
	printf("\n\n");
	printf("\t\t\t\t0000      00  0000000           00 00      \n");
	printf("\t\t\t\t00 00     00  00     00        00   00     \n");
	printf("\t\t\t\t00  00    00  00      00      00     00    \n");
	printf("\t\t\t\t00   00   00  00000000       00000000000   \n");
	printf("\t\t\t\t00    00  00  00      00    00         00  \n");
	printf("\t\t\t\t00     00 00  00     00    00           00 \n");
	printf("\t\t\t\t00      0000  0000000     00             00\n");
	printf("\n\n\t\t\t\t                WELCOME!");
	
	printf("\n\n");
	system("pause");
	
	menu();
}

void menu()
{
	int choice;
	
	system("cls");
	printf("-------------------Welcome To Our NBA Basketball Ticket Booking System-------------------");
	printf("\n\n\n");
	printf("\n\t\t\t\t[1] Sign Up");
	printf("\n\t\t\t\t[2] Login");
	printf("\n\t\t\t\t[3] Help");
	printf("\n\t\t\t\t[4] Logout and Exit ");
	
	printf("\n\n\t\t\t\tChoose you decision: ");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			signup();
		break;
		
		case 2:
			login();
			interface();
		break;
			
		case 3:
			printf("\n\nThis program is used to buy the ticket for wathcing the match of NBA Basketball.\nThis program is quite simple. Follow this step:");
			printf("\n\n[1] Choose [1] to regist your account. Just fill the identity that the program ask");
			printf("\n[2] Enter the username and the password for your account. Remember your username and password for you account");
			printf("\n[3] Then, choose [2] for login. Enter your username and password that you have previously registered");
			printf("\n[4] If you entered correctly, you will login to the system. If not, repeat to enter again");
			
			printf("\n\n");
			system("pause");
			menu();
		break;
			
		case 4:
			exitchoice();
		break;
		
		default:
			printf("\n\t\t\t\tPlease choose between [1], [2], [3], or [4]!");
			printf("\n\n");
			system("pause");
			menu();
	}
}

void interface()
{
	int choice, i;
	
	system("cls");
	printf("-------------------Welcome To Our NBA Basketball Ticket Booking System-------------------");
	printf("\n\n\n");
	
	printf("\n\t\t\t\t[1] Add Money\n\t\t\t\t[2] Check Money\n\t\t\t\t[3] List of the Match\n\t\t\t\t[4] Buy NBA Basketball Ticket\n\t\t\t\t[5] Status Board\n\t\t\t\t[6] Buy Popcorn\n\t\t\t\t[7] Help\n\t\t\t\t[8] Logout and Exit");
	printf("\n\n\t\t\t\tYour choice: ");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			addmoney();
			interface();
		break;
		
		case 2:
			checkmoney();
			interface();
		break;
		
		case 3:
			matchlist();
			interface();
		break;
		
		case 4:
			buyticket();
			interface();
		break;
		
		case 5:
			status();
			interface();
			
		break;
		
		case 6:
			popcorn();
			interface();
		break;
		
		case 7:
			printf("\n\nThis menu consist of 8 menu with the explanation:");
			printf("\n[1] is used to add the money for your account to buy the ticket or popcorn. You can add based on you want");
			printf("\n[2] is used to check your current money");
			printf("\n[3] is used to see the list of the NBA Basketball match that you can watch");
			printf("\n[4] is used to buy the ticket for the match. You just need to enter the code of the match.\n    Then, determine how many ticket do you want to buy. Choose the seat number and fill the name.\n    Finally, your ticket has been booked!");
			printf("\n[5] is used to check the status of the seat for each match");
			printf("\n[6] is used to order the popcorn. Your just nees to determine how many popcor do you want to buy.\n    Then, choose the flavor and the size");
			printf("\n[7] is used to give the explanation for each menu");
			printf("\n[8] is used to logout and exit the menu");
			
			printf("\n\n");
			system("pause");
			interface();
		break;
		
		case 8:
			exitchoice();
		break;
			
		default:
			printf("\t\t\t\tPlease choose between [1] until [8]!");
			printf("\n\n");
			system("pause");
			interface();
	}
}

void addmoney()
{
	system("cls");
	printf("-------------------Welcome To Our NBA Basketball Ticket Booking System-------------------");
	printf("\n\n\n");
	
	printf("\t\t\t\tYour current money: Rp. %d", totmoney);
	printf("\n\n\t\t\t\tHow much money do you want to add?: Rp. ");
	scanf("%d", &money);
	
	totmoney+=money;
	
	printf("\n\n\t\t\t\t>>>>Your current money: Rp. %d", totmoney);
	printf("\n\n");
	system("pause");
}

void checkmoney()
{
	system("cls");
	printf("-------------------Welcome To Our NBA Basketball Ticket Booking System-------------------");
	printf("\n\n\n");
	
	printf("\t\t\t\t>>>>Your current money: Rp. %d", totmoney);
	printf("\n\n");
	system("pause");
}

void matchlist()
{
	system("cls");
	printf("-------------------Welcome To Our NBA Basketball Ticket Booking System-------------------");
	printf("\n\n\n");
	
	printf("\t\t\t\tList of the NBA Basketball Match:");
	printf("\n\n\t\t\t\t[Code] Match\t\t    Date");
	printf("\n\n\t\t\t\t[1] %s\n\t\t\t\t[2] %s\n\t\t\t\t[3] %s\n\t\t\t\t[4] %s\n\t\t\t\t[5] %s\n\t\t\t\t[6] %s", nba[0], nba[1], nba[2], nba[3], nba[4], nba[5]);
	printf("\n\n");
	system("pause");
	interface();
}

void buyticket()
{
	int i=0, a, choice;
	char numstr[100];
	
	system("cls");
	printf("-------------------Welcome To Our NBA Basketball Ticket Booking System-------------------");
	printf("\n\n\n");
	
	printf("\t\t\t\tList of the NBA Basketball Match:");
	printf("\n\n\t\t\t\t[Code] Match\t\t    Date");
	printf("\n\n\t\t\t\t[1] %s\n\t\t\t\t[2] %s\n\t\t\t\t[3] %s\n\t\t\t\t[4] %s\n\t\t\t\t[5] %s\n\t\t\t\t[6] %s", nba[0], nba[1], nba[2], nba[3], nba[4], nba[5]);
	printf("\n\n\t\t\t\tPrice @Rp.100000");
	printf("\n\n");
	
	printf("\t\t\t\tYour choice: ");
	scanf("%d", &nbano);
	
	if(nbano<1 || nbano>6)
	{
		printf("\n\n\t\t\t\tPlease choose between [1] until [6]!");
		printf("\n\n");
		buyticket();
	}
	
	printf("\t\t\t\tYour Ticket Code: %d ********** %s", nbano, nba[nbano-1]);
	statusbuy(nbano);
	
	FILE *f1, *fopen();
	char str1[80]="32", str2[4], str3[4];
	int seat1, amount=0;
	
	switch(nbano)
	{
		case 1:
			f1= fopen("nba1.txt", "r+");
			fgets(str1,80,f1);
			fclose(f1);
		break;
		
		case 2:
			f1= fopen("nba2.txt", "r+");
			fgets(str1,80,f1);
			fclose(f1);
		break;
		
		case 3:
			f1= fopen("nba3.txt", "r+");
			fgets(str1,80,f1);
			fclose(f1);
		break;
		
		case 4:
			f1= fopen("nba4.txt", "r+");
			fgets(str1,80,f1);
			fclose(f1);
		break;
		
		case 5:
			f1= fopen("nba5.txt", "r+");
			fgets(str1,80,f1);
			fclose(f1);
		break;
		
		case 6:
			f1= fopen("nba6.txt", "r+");
			fgets(str1,80,f1);
			fclose(f1);
		break;
	}
	
	seat1= atoi(str1);
	
	if(seat1<=0)
	{
		printf("\t\t\t\tThe seats are full");
	}
	
	else
	{
		Loopamo:
		printf("\n\t\t\t\tAvailable Seats: %d", seat1);
		printf("\n\n\t\t\t\tHow many ticket do you want to buy?: ");
		scanf("%d", &amount);
		printf("\n");
		
		a=100000*amount;
		
		if(totmoney<a)
		{
			Loopnoten:
			printf("\n\t\t\t\t>>>>>Your current money: Rp. %d", totmoney);
			printf("\n\n\t\t\t\tYour current money is not enough");
			printf("\n\t\t\t\t[1] Reduce the amount of ticket\n\t\t\t\t[2] Go to 'Add Money' Menu");
			printf("\n\n\t\t\t\tYour choice: ");
			scanf("%d", &choice);
			
			switch(choice)
			{
				case 1:
					goto Loopamo;
				break;
				
				case 2:
					printf("\n\n");
					system("pause");
					addmoney();
					interface();
				break;
				
				default:
					printf("\t\t\t\tPlease choose between [1] or [2]!");
					printf("\n\n");
					system("pause");
					
					goto Loopnoten;
			}
		}
		
		seat1-=amount;
		itoa(nbano, numstr, 10);
		namenumber(amount, numstr);
		
		printf("\t\t\t\tThe total price is Rp. %d", a);
		
		totmoney-=a;
		printf("\n\n\t\t\t\t>>>>>Your current money: Rp. %d", totmoney);
		
		itoa(seat1, str1, 10);
		
		switch(nbano)
		{
			case 1:
				f1= fopen("nba1.txt", "w");
				fputs(str1,f1);
				fclose(f1);
			break;
			
			case 2:
				f1= fopen("nba2.txt", "w");
				fputs(str1,f1);
				fclose(f1);
			break;
			
			case 3:
				f1= fopen("nba3.txt", "w");
				fputs(str1,f1);
				fclose(f1);
			break;
			
			case 4:
				f1= fopen("nba4.txt", "w");
				fputs(str1,f1);
				fclose(f1);
			break;
			
			case 5:
				f1= fopen("nba5.txt", "w");
				fputs(str1,f1);
				fclose(f1);
			break;
			
			case 6:
				f1= fopen("nba6.txt", "w");
				fputs(str1,f1);
				fclose(f1);
			break;
		}
	}
	printf("\n\n");
	system("pause");
}

void statusbuy(int nbano)
{
	printf("\t\t\t\tYour Ticket Code: %d ********** %s", nbano, nba[nbano-1]);
	system("cls");
	printf("-------------------Welcome To Our NBA Basketball Ticket Booking System-------------------");
	printf("\n\n\n");
	
	int i, j, index=0;
	j=readnumber(nbano);
	readname(nbano);
	
	char tempname[33][10]={"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};
	
	for(i=0; i<j; i++)
	{
		strcpy(tempname[num[i]], name[i]);
	}
	
	printf("\t\t\t\t\t\t\tFIELD\n\n");
	for(i=0; i<8; i++)
	{
		printf("\t\t\t\t");
		for(j=0; j<4; j++)
		{
			printf("%d.%s\t", index+1, tempname[index+1]);
			index++;
		}
		printf("\n");
	}
}

void status()
{
	system("cls");
	printf("-------------------Welcome To Our NBA Basketball Ticket Booking System-------------------");
	printf("\n\n\n");
	
	int i, j, nbano, index=0;
	
	printf("\t\t\t\tEnter the code of the match: ");
	scanf("%d", &nbano);
	
	j=readnumber(nbano);
	readname(nbano);
	
	printf("\t\t\t\tMatch with the code %d: %s", nbano, nba[nbano-1]);
	printf("\n\n");
	
	char tempname[33][10]={"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};
	
	for(i=0; i<j; i++)
	{
		strcpy(tempname[num[i]], name[i]);
	}
	
	printf("\t\t\t\t\t\t\tFIELD\n\n");
	for(i=0; i<8; i++)
	{
		printf("\t\t\t\t");
		for (j=0; j<4; j++)
		{
			printf("%d.%s\t", index+1, tempname[index+1]);
			index++;
		}
		printf("\n");
	}
	
	printf("\n\n");
	system("pause");
}

int readnumber(int nbano)
{
	char tempstr[100], tempstr2[12]= "number";
	
	FILE *a, *b;
	
	char numstr[100];
	
	int i=0, j=0, k;
	
	itoa(nbano, numstr, 10);
	strcat(numstr,".txt");
	strcat(tempstr2,numstr);
	
	a=fopen(tempstr2, "a+");
		while(!feof(a))
		{
			number[i][j]=fgetc(a);
			
			if(number[i][j] == ' ')
			{
				j=0;
				i++;
			}
			
			else
			{
				j++;
			}
		}
			k=i;
			
			for(i=0; i<k; i++)
			{
				num[i]= atoi(number[i]);
			}
			
			fclose(a);
			
			return k;
}

void readname(int nbano)
{
	char tempstr1[12]="name";
	
	FILE *b;
	
	char numstr[100];
	
	int i=0, j=0, k=0;
	
	itoa(nbano, numstr, 10);
	strcat(numstr, ".txt");
	strcat(tempstr1, numstr);
	
	b=fopen(tempstr1, "a+");
		while(!feof(b))
		{
			name[i][j]= fgetc(b);
			
			if(name[i][j] == ' ')
			{
				j=0;
				i++;
			}
			
			else
			{
				j++;
			}
		}
		
		name[i][j]='\0';
		k=i;
		fclose(b);
}

void namenumber(int amount, char numstr[100])
{
	char tempstr[100], tempstr1[12]="name", tempstr2[12]="number";
	int number;
	
	FILE *a, *b;
	int i=0;
	
	strcat(numstr, ".txt");
	strcat(tempstr1, numstr);
	strcat(tempstr2, numstr);
	
	a=fopen(tempstr1, "a");
	b=fopen(tempstr2, "a");
	
	for(i=0; i<amount; i++)
	{
		printf("\t\t\t\tEnter the details for ticket no. %d\n", i+1);
		printf("\t\t\t\tInput the seat number: ");
		scanf("%d", &number);
		printf("\t\t\t\tInput the name of person: ");
		scanf("%s", name[number-1]);
		printf("\n\n");
		
		itoa(number, tempstr, 10);
		fprintf(a, "%s ", name[number-1]);
		fprintf(b, "%s ", tempstr);
	}
	
	fclose(a);
	fclose(b);
}

void popcorn()
{
	struct popcorn
	{
		int flavor;
		int size;
	};
	
	struct popcorn *ptr;
	int i, numpop, choice; 
	char flavor1[20][200]={"Salt", "Sweet Glaze", "Caramel"};
	char size1[10][10]={"M", "L", "XL"};
	char *flav, *siz;
	int monm=0, monl=0, monxl=0, monsize=0;
	
	system("cls");
	printf("-------------------Welcome To Our NBA Basketball Ticket Booking System-------------------");
	printf("\n\n\n");
	

	printf("\t\t\t\tEnter the amount of popcorn: ");
	scanf("%d", &numpop);
	printf("\n");
			
	ptr = (struct popcorn*) malloc(numpop * sizeof(struct popcorn));
		
	printf("\t\t\t\tFlavor: \t\tSize:");
	printf("\n\t\t\t\t[1] Salt\t\t[1] M  (Price= Rp. 15000)");
	printf("\n\t\t\t\t[2] Sweet Glaze\t\t[2] L  (Price= Rp. 20000)");
	printf("\n\t\t\t\t[3] Caramel\t\t[3] XL (Price= Rp. 25000)");
	printf("\n");
		
	Loopchoose:		
	for(i=0; i<numpop; i++)
	{
		printf("\n\t\t\t\t%d.\tEnter the code of the flavor: ", i+1);
		scanf("%d", &(ptr+i)->flavor);
		
		printf("\t\t\t\t\tEnter the code of the size: ");
		scanf("%d", &(ptr+i)->size);
		
		if((ptr+i)->flavor<1 || (ptr+i)->flavor>3)
		{
			printf("\n\n\t\t\t\tPlease choose between [1], [2], or [3]!");
			printf("\n\n");
			goto Loopchoose;
		}
		
		else if((ptr+i)->size<1 || (ptr+i)->size>3)
		{
			printf("\n\n\t\t\t\tPlease choose between [1], [2], or [3]!");
			printf("\n\n");
			goto Loopchoose;
		}
		
	}
	
	printf("\n\n\t\t\t\tYour detail order:");
	printf("\n\n\t\t\t\tPopcorn\n\n");
		
	for(i=0; i<numpop; i++)
	{
		switch((ptr+i)->flavor)
		{
			case 1:
				flav= (char*) malloc(strlen(flavor1[0]) * sizeof(char));
				flav= flavor1[0];
			break;
			
			case 2:
				flav= (char*) malloc(strlen(flavor1[1]) * sizeof(char));
				flav=flavor1[1];
			break;
			
			case 3:
				flav= (char*) malloc(strlen(flavor1[2]) * sizeof(char));
				flav=flavor1[2];
			break;
		}
		
		printf("\n\t\t\t\t%d. \tFlavor: %s", i+1, flav);
		
		switch((ptr+i)->size)
		{
			case 1:
				siz= (char*) malloc(strlen(size1[0]) * sizeof(char));
				siz=size1[0];
				monm+=15000;
			break;
			
			case 2:
				siz= (char*) malloc(strlen(size1[1]) * sizeof(char));
				siz=size1[1];
				monl+=20000;
			break;
				
			case 3:
				siz= (char*) malloc(strlen(size1[2]) * sizeof(char));
				siz=size1[2];
				monxl+=25000;
			break;
		}	
		
		printf("\n\t\t\t\t\tSize: %s", siz);
		printf("\n");
	}	
	
	monsize= monm+monl+monxl;
	
	if(totmoney<monsize)
		{
			Loopnoten:
			printf("\n\t\t\t\t>>>>>Your current money: Rp. %d", totmoney);
			printf("\n\n\t\t\t\tYour current money is not enough");
			printf("\n\t\t\t\t[1] Reduce the size/amount of Popcorn\n\t\t\t\t[2] Go to 'Add Money' Menu");
			printf("\n\n\t\t\t\tYour choice: ");
			scanf("%d", &choice);
			
			switch(choice)
			{
				case 1:
					printf("\n\n");
					system("pause");
					popcorn();
				break;
				
				case 2:
					printf("\n\n");
					system("pause");
					addmoney();
				break;
				
				default:
					printf("\t\t\t\tPlease choose between [1] or [2]!");
					printf("\n\n");
					system("pause");
					
					goto Loopnoten;
			}
		}
			
	totmoney-=monsize;
	printf("\n\n\t\t\t\t>>>>>Your current money: Rp. %d", totmoney);	
	printf("\n\n");
	system("pause");
}

void signup()
{
	int c=' ';
	char pass3[15];
	system("cls");
	printf("-------------------Welcome To Our NBA Basketball Ticket Booking System-------------------");
	printf("\n\n\n");
	printf("\t\t\t\tAccount Registration");
	printf("\n\n\n\t\t\t\tInput your name\t\t\t: ");
	scanf("  %60[^\n]", &nameregist);
	printf("\t\t\t\tInput your phone number\t\t: ");
	scanf(" %s", &hp);
	printf("\t\t\t\tInput your e-mail address\t: ");
	scanf(" %s", &email);
	
	printf("\n\t\t\t\tInput your username (max 15 character using alphabet and number): ");
	scanf("%s", &username1);
	
	Looppass:
	printf("\t\t\t\tInput your password (max 15 character using alphaber and number): ");
	
	while(i<15)
	{
	    pass1[i]=getch();
	    c=pass1[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pass1[i]='\0';
	i=0;
	
	printf("\t\t\t\t\t\t\tConfirm your password (max 15 character using alphaber and number): ");
	
	while(i<15)
	{
	    pass3[i]=getch();
	    c=pass3[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pass3[i]='\0';
	i=0;
	
	if (strcmp(pass1, pass3) != 0)
	{
		printf("\n\n\t\t\t\tYour confirmed password is wrong!");
		printf("\n\n");
		system("pause");
		printf("\n");
		goto Looppass;
	}

	printf("\n\n\t\t\t\tYour account is successfully registered! Your detail account are: ");
	printf("\n\t\t\t\tName\t\t\t: %s", nameregist);
	printf("\n\t\t\t\tPhone Number\t\t: %s", hp);
	printf("\n\t\t\t\tE-mail Address\t\t: %s", email);
	printf("\n\n\t\t\t\tYour Username\t\t: ");
	printf("%s", username1);

	printf("\n\n");
	system("pause");
	menu();
}

void login()
{
	int i=0, choice1;
	char c=' ';
	system("cls");
	printf("-------------------Welcome To Our NBA Basketball Ticket Booking System-------------------");
	printf("\n\n\n");
	printf("\t\t\t\tEnter your username: ");
	scanf("%s", &username2);
	printf("\t\t\t\tEnter your password: ");
	
	while(i<15)
	{
	    pass2[i]=getch();
	    c=pass2[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pass2[i]='\0';
	i=0;
	
	if (strcmp(username1, username2) == 0 && strcmp(pass1, pass2) == 0)
	{
		printf("\n\n\t\t\t\tLogin is Successful!");
		printf("\n\t\t\t\tWelcome!");
		printf("\n\n");
		system("pause");
	}
	 
	else
	{
		printf("\n\n\t\t\t\tYour username or password are not registered/wrong!");
		printf("\n\t\t\t\t[1] Sign Up\n\t\t\t\t[2] Repeat to Enter");
		printf("\n\t\t\t\tYour choice: ");
		scanf("%d", &choice1);
		
		switch(choice1)
		{
			case 1:
				signup();
			break;
			
			case 2:
				login();
			break;
		}
	}	
}

int exitchoice()
{
	printf("\n\t\t\t\tYou have been loged out...");
	printf("\n\t\t\t\tThank you for using this system!");
	printf("\n\t\t\t\tSee you later! ^^");
	
	printf("\n\n");
	system("pause");
	return 0;
}
