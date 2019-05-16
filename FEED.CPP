#include<stdio.h>
#include<ctype.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<string.h>

void students_login();
void admin_login();
void cse();
void ece();
void eee();
void mech();
void civil();
void comman();
void questions();
void cse_batch_2009();
void cse_batch_2010();
void cse_batch_2011();
void cse_batch_2012();
void admin_cse();
void ece_batch_2009();
void ece_batch_2010();
void ece_batch_2011();
void ece_batch_2012();
void cse_students_2009();
void cse_students_2010();
void cse_students_2011();
void cse_students_2012();
void ece_students_2009();
void ece_students_2010();
void ece_students_2011();
void ece_students_2012();
void eee_students_2011();
void civil_students_2011();
void mech_students_2011();
void cse_staffs_2009();
void cse_staffs_2010();
void cse_staffs_2011();
void cse_staffs_2012();
void ece_staffs_2009();
void ece_staffs_2010();
void ece_staffs_2011();
void ece_staffs_2012();
void eee_staffs_2011();
void civil_staffs_2011();
void mech_staffs_2011();
void cse_subjects_2009();
void cse_subjects_2010();
void cse_subjects_2011();
void cse_subjects_2012();
void ece_subjects_2009();
void ece_subjects_2010();
void ece_subjects_2011();
void ece_subjects_2012();
void eee_subjects_2011();
void civil_subjects_2011();
void mech_subjects_2011();
int i,choice1,choice2,choice3,choice4,choice5;
struct admin_log
{
	char user_name[12];
	char password[25];
}log;
struct mark
{
	char staff;
	char q1;
	char q2;
	char q3;
	char q4;
	char q5;
	char register_no[12];
}students;
long size=sizeof(students);
FILE *fp;
long resize=sizeof(log);
char pass[25],name[12];
int c,l,k;
void main()
{

	clrscr();
	gotoxy(28,3);
	printf("WELCOME TO FEEDBACK PORTAL");
	gotoxy(28,4);

	for(i=0;i<26;i++)
		printf("-");

	gotoxy(28,15) ;
	printf("PRESS ANY KEY TO CONTINUE ....!!");
	getch();
	do
	{
		clrscr();
		gotoxy(28,3);
		printf("WELCOME TO FEEDBACK PORTAL");
		gotoxy(28,4);

		for(i=0;i<26;i++)
			printf("-");

		gotoxy(5,10) ;
		cout<<"1.STUDENTS ";
		gotoxy(33,10)
		;
		cout<<"2.ADMINISTRATOR";
		gotoxy(70,10);
		cout<<"3.EXIT";

		gotoxy(28,18);
		cout<<"ENTER YOUR CHOICE :  ";
		fflush(stdin);
		cin>>choice1;
		switch(choice1)
		{
			case 1:
			clrscr();
			choice5=1;
			comman();
			break;
			case 2:
			i=20;
			clrscr();
			choice5=2;
			admin_login();
			break;
			case 3:
			exit(1);
			default:
			gotoxy(28,20);
			cout<<"\a\a\a WRONG CHOICE TRY  AGAIN !" ;
			gotoxy(28,21);
			cout<<"\a\a PRESS ANY KEY TO RE ENTER !";
			getch();
		}
	}while(choice1>3);

}
void students_login()
{
	clrscr();
	int c,k;
	gotoxy(27,2);
	cout<<"WELCOME STUDENT";
	gotoxy(27,3);
	for(i=0;i<15;i++)
		cout<<"-";
	switch(choice4)
	{
		case 1:
		fp=fopen("cse2009.txt","rb+");
		break;
		case 2:
		fp=fopen("cse2010.txt","rb+");
		break;
		case 3:
		fp=fopen("cse2011.txt","rb+");
		break;
		case 4:
		fp=fopen("cse2012.txt","rb+");
		break;
	}

	rewind(fp);
	gotoxy(20,10);
	cout<<"REGISTER_NUMBER :\t";
	cin>>name;
	gotoxy(20,12);
	cout<<"PASSWORD\t:   ";
	i=0;
	while((c=getch())!=13)
	{
	    pass[i++]=c;
	    cout<<("*");
	}
	i=0;
	rewind(fp);
	while(fread(&log,resize,1,fp)==1)
	{
		k=strcmp(pass,log.password);
		l=strcmp(name,log.user_name);
		if(k==0&&l==0)
		{
		i=1;
		break;
		}
	  }
	  fclose(fp);
	if(i==1)
	{
		gotoxy(20,15);
		cout<<"LOG IN  SUCCESSFULLY ! ";
		gotoxy(20,16);
		cout<<"PRESS ANY KEY TO CONTINEU !";
		getch();
		switch(choice4)
		{
			case 1:
			cse_students_2009();
			break;
			case 2:
			cse_students_2010();
			break;
			case 3:
			cse_students_2011();
			break;
			case 4:
			cse_students_2012();
			break;
		}




	}
	else
	{
		gotoxy(20,15);
		cout<<"FAILED";
		gotoxy(20,16);
		cout<<"DO YOU WANT RE ENTER (Y/N)..?";
		fflush(stdin);
		c=getch();
		if(c=='y'||c=='Y')
		students_login();
		else
		exit(1);
	}


}

void admin_login()

{
	clrscr();
	int c,k;
	gotoxy(27,2);
	cout<<"WELCOME ADMIN";
	gotoxy(27,3);
	for(i=0;i<15;i++)
		cout<<("-");
	fp=fopen("admin.txt","rb+");
	rewind(fp);
	gotoxy(20,10);
	cout<<"YOUR NAME    :\t";
	cin>>name;
	i=0;
	rewind(fp);
	while(fread(&log,resize,1,fp)==1)
	{
	    l=strcmp(name,log.user_name);
	    if(l==0)
	    {
		i=1 ;
		break;
	    }
	    if(i==1)
		goto pass;
	    else
	    {
		gotoxy(20,15);
		cout<<"USER NAME IS NOT FOUND ! ";
		gotoxy(20,16);
		cout<<"DO YOU WANT RE ENTER (Y/N)..?";
		getch();
		admin_login();
	    }

	 }

	pass:
	clrscr();
	rewind(fp);
	gotoxy(27,2);
	cout<<"WELCOME ADMIN";
	gotoxy(27,3);
	for(i=0;i<15;i++)
		cout<<("-");
	gotoxy(20,10);
	cout<<"YOUR NAME    :\t";
	printf("%s",log.user_name);

	i=0;
	gotoxy(20,12);
	cout<<"PASSWORD   :\t";
	i=0;
	while((c=getch())!=13)
	{
	    pass[i++]=c;
	    cout<<"*";
	}
	rewind(fp);
	while(fread(&log,resize,1,fp)==1)
	{

		k=strcmp(pass,log.password);
		if(k==0)
		{
		i=1;
		break;
		}
	  }
	if(i==1)
	{
		gotoxy(20,15);
		cout<<"LOG IN  SUCCESSFULLY ! ";
		gotoxy(20,16);
		cout<<"PRESS ANY KEY TO CONTINEU !";
		getch();
		comman();

	}
	else
	{
		gotoxy(20,15);
		cout<<"FAILED PASSWORD IS WRONG !";
		gotoxy(20,16);
		cout<<"DO YOU WANT RE ENTER (Y/N)..?";
		fflush(stdin);
		c=getch();
		if(c=='y'||c=='Y')
		goto pass;
		else
		exit(1);
	}


}


void comman()
{

	if(choice1==1)
	{
		students:
		clrscr();
		gotoxy(25,3);
		cout<<"FEEDBACK PORTAL FOR STUDENTS" ;
		gotoxy(25,4)  ;

		for(i=0;i<28;i++)
			cout<<"-";
	}
	 else if(choice1==2)
	{
		administrator:
		clrscr();
		gotoxy(25,3);
		cout<<"FEEDBACK PORTAL FOR ADMINSTRATOR" ;
		gotoxy(25,4)  ;

		for(i=0;i<33;i++)
			cout<<"-";

	}

	gotoxy(25,6) ;
	printf("1.Computer Science and Engineering");
	gotoxy(25,8) ;
	printf("2.Electrical and Electronics Engineering ");
	gotoxy(25,10) ;
	printf("3.Electronics & Electrical Engineering");
	gotoxy(25,12) ;
	printf("4.Mechanical Engineerrng");
	gotoxy(25,14) ;
	printf("5.Civil Engineering ");
	gotoxy(25,16) ;
	printf("6.Exit");
	gotoxy(25,18);
	cout<<"Enter your choice :\t";
	fflush(stdin);
	cin>>choice2;
	switch(choice2)
	{
		case 1:
		clrscr();
		cse();
		break;
		case 2:
		clrscr();
		eee();
		break;
		case 3:
		clrscr();
		ece();
		break;
		case 4:
		clrscr();
		mech();
		break;
		case 5:
		clrscr();
		civil();
		break;
		case 6:
		clrscr();
		exit(1);
		default:
		gotoxy(25,20);
		cout<<"\a\aWRONG CHOICE !! "  ;
		gotoxy(25,21);
		cout<<"PRESS ANY KEY TO RE ENTER ";
		if(choice1==1)
			goto students;
		else if(choice1==2)
			goto administrator;
	}
}

void cse()
{
	clrscr();
	gotoxy(25,3);
	cout<<"FEEDBACK PORTAL FOR CSE" ;
	gotoxy(25,4) ;

	for(i=0;i<28;i++)
		printf("-");

	gotoxy(25,7);
	cout<<"1.2009th BATCH";
	gotoxy(25,9);
	cout<<"2.2010th BATCH";
	gotoxy(25,11);
	cout<<"3.2011th BATCH";
	gotoxy(25,13);
	cout<<"4.2012th BATCH";
	gotoxy(25,15);
	cout<<"5.BACK";
	gotoxy(25,17);
	cout<<"6.EXIT";
	gotoxy(25,20);
	cout<<"ENTER YOUR CHOICE:  ";
	cin>>choice4;
	switch(choice4)
	{
		case 1:
		clrscr();
		if(choice5==1)
		cse_batch_2009();
		else if(choice5==2)
		admin_cse();
		break;
		case 2:
		clrscr();
		if(choice5==1)
		cse_batch_2010();
		else if(choice5==2)
		admin_cse();
		break;
		case 3:
		clrscr();
		if(choice5==1)
		cse_batch_2011();
		else if(choice5==2)
		admin_cse();
		break;
		case 4:
		clrscr();
		if(choice5==1)
		cse_batch_2012();
		else if(choice5==2)
		admin_cse();
		break;
		case 5:
		clrscr();
		comman();
		break;
		case 6:
		exit(1) ;
		default:
		gotoxy(25,22);
		cout<<"\a\aWRONG CHOICE !! "  ;
		gotoxy(25,23);
		cout<<"PRESS ANY KEY TO RE ENTER ";
		getch();
		cse();
	}


}

void cse_batch_2009()
{
	clrscr();
	gotoxy(25,3);
	cout<<"FEEDBACK PORTAL FOR CSE BATCH 2009" ;
	gotoxy(25,4) ;

	for(i=0;i<40;i++)
		printf("-");

	gotoxy(25,7);
	cout<<"1.STUDENTS";
	gotoxy(25,9);
	cout<<"2.STAFFS";
	gotoxy(25,11);
	cout<<"3.SUBJECTS";
	gotoxy(25,13);
	cout<<"4.EXIT";
	gotoxy(25,20);
	cout<<"ENTER YOUR CHOICE:  ";
	cin>>choice3;
	switch(choice3)
	{
		case 1:
		clrscr();
		students_login();
		break;
		case 2:
		clrscr();
		cse_staffs_2009();
		break;
		case 3:
		clrscr();
		cse_subjects_2009();
		break;
		default:
		gotoxy(25,22);
		cout<<"\a\aWRONG CHOICE !! "  ;
		gotoxy(25,23);
		cout<<"PRESS ANY KEY TO RE ENTER ";
		getch();
		cse_batch_2009();
	}



}

  void cse_batch_2010()
{
	clrscr();
	gotoxy(25,3);
	cout<<"FEEDBACK PORTAL FOR CSE BATCH 2010" ;
	gotoxy(25,4) ;

	for(i=0;i<40;i++)
		printf("-");

	gotoxy(25,7);
	cout<<"1.STUDENTS";
	gotoxy(25,9);
	cout<<"2.STAFFS";
	gotoxy(25,11);
	cout<<"3.SUBJECTS";
	gotoxy(25,13);
	cout<<"4.EXIT";
	gotoxy(25,20);
	cout<<"ENTER YOUR CHOICE:  ";
	cin>>choice3;
	switch(choice3)
	{
		case 1:
		clrscr();
		students_login();
		break;
		case 2:
		clrscr();
		cse_staffs_2010();
		break;
		case 3:
		clrscr();
		cse_subjects_2010();
		break;
		default:
		gotoxy(25,22);
		cout<<"\a\aWRONG CHOICE !! "  ;
		gotoxy(25,23);
		cout<<"PRESS ANY KEY TO RE ENTER ";
		getch();
		cse_batch_2010();
	}


}

void cse_batch_2011()
{
	clrscr();
	gotoxy(25,3);
	cout<<"FEEDBACK PORTAL FOR CSE BATCH 2011" ;
	gotoxy(25,4) ;

	for(i=0;i<40;i++)
		printf("-");

	gotoxy(25,7);
	cout<<"1.STUDENTS";
	gotoxy(25,9);
	cout<<"2.STAFFS";
	gotoxy(25,11);
	cout<<"3.SUBJECTS";
	gotoxy(25,13);
	cout<<"4.BACK";
	gotoxy(25,15);
	cout<<"5.EXIT";

	gotoxy(25,20);
	cout<<"ENTER YOUR CHOICE:  ";
	cin>>choice3;
	switch(choice3)
	{
		case 1:
		clrscr();
		students_login();
		break;
		case 2:
		clrscr();
		cse_staffs_2011();
		break;
		case 3:
		clrscr();
		cse_subjects_2011();
		break;
		case 4:
		clrscr();
		cse();
		break;
		case 5:
		exit(1);
		default:
		gotoxy(25,22);
		cout<<"\a\aWRONG CHOICE !! "  ;
		gotoxy(25,23);
		cout<<"PRESS ANY KEY TO RE ENTER ";
		getch();
		cse_batch_2011();
	}



}
void cse_students_2011()
{
	clrscr();
	gotoxy(25,3);
	cout<<"FEEDBACK FORM" ;
	gotoxy(25,4) ;
	for(i=0;i<15;i++)
		printf("-");
	gotoxy(25,7);
	cout<<"1.Mr.Sivakumar(PQT)";
	gotoxy(25,9);
	cout<<"2.Ms.P.Malarvizhi(DDA)";
	gotoxy(25,11);
	cout<<"3.Mr. M.Dinesh Kumar(MP)";
	gotoxy(25,13);
	cout<<"4.Mr. M.Senthil Kumar(COA)";
	gotoxy(25,15);
	cout<<"5.Mr. R Durai Ram(DBMS)";
	gotoxy(25,17);
	cout<<"6.Mrs. P.Poorrni(OS)";
	gotoxy(25,19);
	cout<<"7.Back";
	gotoxy(25,21);
	cout<<"8.Exit";
	gotoxy(25,23);
	cout<<"ENTER YOUR CHOICE:  ";
	cin>>students.staff;
	if(students.staff==7)
	{
		clrscr()  ;
		cse_batch_2011();
	}
	else if(students.staff==8)
	exit(1);
	else
	questions();

}
void questions()
{
	clrscr();
	gotoxy(25,3);
	cout<<"FEEDBACK FOR " ;
	switch(choice4)
	{
		case 1:
		case 2:
		case 3:
		switch(students.staff)
		{
			case '1':
			cout<<"Mr.Sivakumar(PQT)";
			break;
			case '2':
			cout<<"Ms.P.Malarvizhi(DDA)	";
			break;
			case '3':
			cout<<"Mr. M.Dinesh Kumar(MP)";
			break;
			case '4':
			cout<<"Mr. M.Senthil Kumar(COA)";
			break;
			case '5':
			cout<<"Mr. R Durai Ram(DBMS)";
			break;
			case '6':
			cout<<"Mrs. P.Poorrni(OS)";
			break;

		}
		break;

	}
	gotoxy(25,4) ;
	for(i=0;i<22;i++)
		printf("-");
	gotoxy(57,7);
	cout<<"MARK ALLOCATION";
	gotoxy(60,9);
	cout<<"VERYGOOD=5";
	gotoxy(60,10);
	cout<<"EXELENT=5";
	gotoxy(60,11);
	cout<<"VERYGOOD=4";
	gotoxy(60,12);
	cout<<"GOOD=3";
	gotoxy(60,13);
	cout<<"NORMAL=2";
	gotoxy(60,14);
	cout<<"POOR=1";

	gotoxy(25,6);
	cout<<"TEACHING METHOROLOGY";
	gotoxy(25,7);
	cout<<"YOUR MARK:\t" ;
	cin>>students.q1;
	gotoxy(25,9);
	cout<<"COVERAGE OF SUBJECT";
	gotoxy(25,10);
	cout<<"YOUR MARK:\t" ;
	cin>>students.q2;
	gotoxy(25,12);
	cout<<"DOUBT CLEAR";
	gotoxy(25,13);
	cout<<"YOUR MARK:\t" ;
	cin>>students.q3;
	gotoxy(25,14);
	cout<<"GIVEN NOTES IS USEFUL ?";
	gotoxy(25,15);
	cout<<"YOUR MARK:\t" ;
	cin>>students.q4;
	gotoxy(25,17);
	cout<<"PRACTICAL EXPLANATION";
	gotoxy(25,18);
	cout<<"YOUR MARK:\t" ;
	cin>>students.q5;
	gotoxy(25,20);
	cout<<"THANK YOU FOR YOUR FEED BACK !";
	gotoxy(25,21) ;
	cout<<"PRESS ANY KEY TO CONTINEU !";
	getch();
	switch(choice4)
	{
		case 1:
		fp=fopen("cstf2009.txt","rb+");
		if(fp==NULL)
			fp=fopen("cstf2009.txt","wb+");
		break;
		case 2:
		fp=fopen("cstf2010.txt","rb+");
		if(fp==NULL)
			fp=fopen("cstf2010.txt","wb+");
		break;
		case 3:
		fp=fopen("cstf2011.txt","rb+");
		if(fp==NULL)
			fp=fopen("cstf2011.txt","wb+");
		break;
		case 4:
		fp=fopen("cstf2012.txt","rb+");
		if(fp==NULL)
			fp=fopen("cstf2012.txt","wb+");
		break;
	}

	strcpy(students.register_no,log.user_name);
	fseek(fp,0,2);
	fwrite(&students,size,1,fp);
	fclose(fp);
	clrscr();
	cse_students_2011();


}


void admin_cse()
{

	clrscr();
	char staf;
	gotoxy(25,3);
	cout<<"RESULT OF FEEDBACK FORM " ;
	gotoxy(25,4) ;
	for(int i=0;i<25;i++)
		printf("-");
	switch(choice4)
	{
		case 1:
		case 2:
		case 3:
		gotoxy(25,7);
		cout<<"1.Mr.Sivakumar(PQT)";
		gotoxy(25,9);
		cout<<"2.Ms.P.Malarvizhi(DDA)";
		gotoxy(25,11);
		cout<<"3.Mr. M.Dinesh Kumar(MP)";
		gotoxy(25,13);
		cout<<"4.Mr. M.Senthil Kumar(COA)";
		gotoxy(25,15);
		cout<<"5.Mr. R Durai Ram(DBMS)";
		gotoxy(25,17);
		cout<<"6.Mrs. P.Poorrni(OS)";
		gotoxy(25,19);
		cout<<"7.Back";
		gotoxy(25,21);
		cout<<"8.Exit";
		gotoxy(25,23);
		cout<<"ENTER YOUR CHOICE:  ";
		cin>>staf;
		break;
		case 4:
		break;
	}

	switch(choice4)
	{
		case 1:
		fp=fopen("cstf2009.txt","rb+");
		if(fp==NULL)
			fp=fopen("cstf2009.txt","wb+");
		break;
		case 2:
		fp=fopen("cstf2010.txt","rb+");
		if(fp==NULL)
			fp=fopen("cstf2010.txt","wb+");
		break;
		case 3:
		fp=fopen("cstf2011.txt","rb+");
		if(fp==NULL)
			fp=fopen("cstf2011.txt","wb+");
		break;
		case 4:
		fp=fopen("cstf2012.txt","rb+");
		if(fp==NULL)
			fp=fopen("cstf2012.txt","wb+");
		break;
	}
	switch(staf)
	{
		case '7':
		cse();
		break;
		case '8':
		exit(1);
	}

	rewind(fp);
	clrscr();
	gotoxy(25,3);
	cout<<"RESULT FEEDBACK FOR  " ;
	switch(choice5)
	{
		case 1 :
		case 2:
		case 3:
		switch(staf)
		{
			case '1':
			cout<<"Mr.Sivakumar(PQT)";
			break;
			case '2':
			cout<<"Ms.P.Malarvizhi(DDA)	";
			break;
			case '3':
			cout<<"Mr. M.Dinesh Kumar(MP)";
			break;
			case '4':
			cout<<"Mr. M.Senthil Kumar(COA)";
			break;
			case '5':
			cout<<"Mr. R Durai Ram(DBMS)";
			break;
			case '6':
			cout<<"Mrs. P.Poorrni(OS)";

			break;

		}
		break;
	}
	gotoxy(25,4) ;
	for(i=0;i<40;i++)
		cout<<"-";
	gotoxy(10,5);
	cout<<"\nREG_NO\tQUE1\tQUE2\tQUE3\tQUE4\tQUE5\n";
	while(fread(&students,size,1,fp)==1)
	{
	      if(students.staff==staf)
	      {
		fseek(fp,0,1);
		printf("%s \t %c \t %c \t %c \t %c \t %c\n",students.register_no,students.q1,students.q2,students.q3,students.q4,students.q5,students.staff);
	     }
	}
	fclose(fp);
	cout<<"\n\nPRESS ANY KEY TO CONTINUE" ;
	getch();
	admin_cse();
}



void cse_batch_2012()
{
	clrscr();
	gotoxy(25,3);
	cout<<"FEEDBACK PORTAL FOR CSE BATCH 2012" ;
	gotoxy(25,4) ;

	for(i=0;i<40;i++)
		printf("-");

	gotoxy(25,7);
	cout<<"1.STUDENTS";
	gotoxy(25,9);
	cout<<"2.STAFFS";
	gotoxy(25,11);
	cout<<"3.SUBJECTS";
	gotoxy(25,13);
	cout<<"4.EXIT";
	gotoxy(25,20);
	cout<<"ENTER YOUR CHOICE:  ";
	cin>>choice3;
	switch(choice3)
	{
		case 1:
		clrscr();
		students_login();
		break;
		case 2:
		clrscr();
		cse_staffs_2012();
		break;
		case 3:
		clrscr();
		cse_subjects_2012();
		break;
		default:
		gotoxy(25,22);
		cout<<"\a\aWRONG CHOICE !! "  ;
		gotoxy(25,23);
		cout<<"PRESS ANY KEY TO RE ENTER ";
		getch();
		cse_batch_2012();
	}


}

void cse_staffs_2011()
{
	clrscr();
	gotoxy(25,3);
	cout<<"STAFFS 2ND CSE (2011th BATCH)" ;
	gotoxy(25,4) ;

	for(i=0;i<40;i++)
		printf("-");
		gotoxy(25,7);
		cout<<"1.Mr.Sivakumar(PQT)";
		gotoxy(25,9);
		cout<<"2.Ms.P.Malarvizhi(DDA)";
		gotoxy(25,11);
		cout<<"3.Mr. M.Dinesh Kumar(MP)";
		gotoxy(25,13);
		cout<<"4.Mr. M.Senthil Kumar(COA)";
		gotoxy(25,15);
		cout<<"5.Mr. R Durai Ram(DBMS)";
		gotoxy(25,17);
		cout<<"6.Mrs. P.Poorrni(OS)";
		gotoxy(25,21);
		cout<<"PRESS ANY KEY TO BACK..!  ";
		getch();
		clrscr();
		cse_batch_2011();




}
void cse_subjects_2011()
{
	clrscr();
	gotoxy(25,3);
	cout<<"SUBJECTS 2ND CSE (2011th BATCH)" ;
	gotoxy(25,4) ;

	for(i=0;i<40;i++)
		printf("-");
		gotoxy(25,7);
		cout<<"1.Probability and Queuing Theory";
		gotoxy(25,9);
		cout<<"2.Design and Analysis of Algorithms";
		gotoxy(25,11);
		cout<<"3.MicroProcessors and Microcontrollers";
		gotoxy(25,13);
		cout<<"4.Computer Organization and Architecture";
		gotoxy(25,15);
		cout<<"5.Data Base Management Systems";
		gotoxy(25,17);
		cout<<"6.Operating Systems";
		gotoxy(25,21);
		cout<<"PRESS ANY KEY TO BACK..!  ";
		getch();
		clrscr();
		cse_batch_2011();

}


void ece()
{
	clrscr();
	gotoxy(25,3);
	cout<<"FEEDBACK PORTAL FOR ECE" ;
	gotoxy(25,4) ;

	for(i=0;i<28;i++)
		printf("-");

	gotoxy(25,7);
	cout<<"1.2009th BATCH";
	gotoxy(25,9);
	cout<<"2.2010th BATCH";
	gotoxy(25,11);
	cout<<"3.2011th BATCH";
	gotoxy(25,13);
	cout<<"4.2012th BATCH";
	gotoxy(25,15);
	cout<<"5.EXIT";
	gotoxy(25,20);
	cout<<"ENTER YOUR CHOICE:  ";
	cin>>choice3;
	switch(choice3)
	{
		case 1:
		clrscr();
		ece_batch_2009();
		break;
		case 2:
		clrscr();
		ece_batch_2010();
		break;
		case 3:
		clrscr();
		ece_batch_2011();
		break;
		case 4:
		clrscr();
		ece_batch_2012();
		break;
		case 5:
		exit(1);
		default:
		gotoxy(25,22);
		cout<<"\a\aWRONG CHOICE !! "  ;
		gotoxy(25,23);
		cout<<"PRESS ANY KEY TO RE ENTER ";
		getch();
		ece();
	}


}

void ece_batch_2009()
{
	gotoxy(25,3);
	cout<<"FEEDBACK PORTAL FOR ECE BATCH 2009" ;
	gotoxy(25,4) ;

	for(i=0;i<40;i++)
		printf("-");

	gotoxy(25,7);
	cout<<"1.STUDENTS";
	gotoxy(25,9);
	cout<<"2.STAFFS";
	gotoxy(25,11);
	cout<<"3.SUBJECTS";
	gotoxy(25,13);
	cout<<"4.EXIT";
	gotoxy(25,20);
	cout<<"ENTER YOUR CHOICE:  ";
	cin>>choice3;
	switch(choice3)
	{
		case 1:
		clrscr();
		ece_students_2009();
		break;
		case 2:
		clrscr();
		ece_staffs_2009();
		break;
		case 3:
		clrscr();
		ece_subjects_2009();
		break;
		default:
		gotoxy(25,22);
		cout<<"\a\aWRONG CHOICE !! "  ;
		gotoxy(25,23);
		cout<<"PRESS ANY KEY TO RE ENTER ";
		getch();
		ece_batch_2009();
	}


}
void ece_batch_2010()
{
	clrscr();
	gotoxy(25,3);
	cout<<"FEEDBACK PORTAL FOR ECE BATCH 2010" ;
	gotoxy(25,4) ;

	for(i=0;i<40;i++)
		printf("-");

	gotoxy(25,7);
	cout<<"1.STUDENTS";
	gotoxy(25,9);
	cout<<"2.STAFFS";
	gotoxy(25,11);
	cout<<"3.SUBJECTS";
	gotoxy(25,13);
	cout<<"4.EXIT";
	gotoxy(25,20);
	cout<<"ENTER YOUR CHOICE:  ";
	cin>>choice3;
	switch(choice3)
	{
		case 1:
		clrscr();
		ece_students_2010();
		break;
		case 2:
		clrscr();
		ece_staffs_2010();
		break;
		case 3:
		clrscr();
		ece_subjects_2010();
		break;
		default:
		gotoxy(25,22);
		cout<<"\a\aWRONG CHOICE !! "  ;
		gotoxy(25,23);
		cout<<"PRESS ANY KEY TO RE ENTER ";
		getch();
		ece_batch_2010();
	}


}

void ece_batch_2011()
{
	clrscr();
	gotoxy(25,3);
	cout<<"FEEDBACK PORTAL FOR ECE BATCH 2011" ;
	gotoxy(25,4) ;

	for(i=0;i<40;i++)
		printf("-");

	gotoxy(25,7);
	cout<<"1.STUDENTS";
	gotoxy(25,9);
	cout<<"2.STAFFS";
	gotoxy(25,11);
	cout<<"3.SUBJECTS";
	gotoxy(25,13);
	cout<<"4.EXIT";
	gotoxy(25,20);
	cout<<"ENTER YOUR CHOICE:  ";
	cin>>choice3;
	switch(choice3)
	{
		case 1:
		clrscr();
		ece_students_2011();
		break;
		case 2:
		clrscr();
		ece_staffs_2011();
		break;
		case 3:
		clrscr();
		ece_subjects_2011();
		break;
		default:
		gotoxy(25,22);
		cout<<"\a\aWRONG CHOICE !! "  ;
		gotoxy(25,23);
		cout<<"PRESS ANY KEY TO RE ENTER ";
		getch();
		ece_batch_2011();
	}


}
void ece_batch_2012()
{
	clrscr();
	gotoxy(25,3);
	cout<<"FEEDBACK PORTAL FOR ECE BATCH 2012" ;
	gotoxy(25,4) ;

	for(i=0;i<40;i++)
		printf("-");

	gotoxy(25,7);
	cout<<"1.STUDENTS";
	gotoxy(25,9);
	cout<<"2.STAFFS";
	gotoxy(25,11);
	cout<<"3.SUBJECTS";
	gotoxy(25,13);
	cout<<"4.EXIT";
	gotoxy(25,20);
	cout<<"ENTER YOUR CHOICE:  ";
	cin>>choice3;
	switch(choice3)
	{
		case 1:
		clrscr();
		ece_students_2012();
		break;
		case 2:
		clrscr();
		ece_staffs_2012();
		break;
		case 3:
		clrscr();
		ece_subjects_2012();
		break;
		default:
		gotoxy(25,22);
		cout<<"\a\aWRONG CHOICE !! "  ;
		gotoxy(25,23);
		cout<<"PRESS ANY KEY TO RE ENTER ";
		getch();
		ece_batch_2012();
	}


}

void eee()
{
	eee:
	clrscr();
	gotoxy(25,3);
	cout<<"FEEDBACK PORTAL FOR EEE" ;
	gotoxy(25,4) ;

	for(i=0;i<28;i++)
		printf("-");

	gotoxy(25,7);
	cout<<"1.2009th BATCH";
	gotoxy(25,9);
	cout<<"2.2010th BATCH";
	gotoxy(25,11);
	cout<<"3.2011th BATCH";
	gotoxy(25,13);
	cout<<"4.2012th BATCH";
	gotoxy(25,15);
	cout<<"5.EXIT";
	gotoxy(25,20);
	cout<<"ENTER YOUR CHOICE:  ";
	cin>>choice3;
	switch(choice3)
	{
		case 1:
		clrscr();
		eee_students_2011();
		break;
		case 2:
		clrscr();
		eee_staffs_2011();
		break;
		case 3:
		clrscr();
		eee_subjects_2011();
		break;
		default:
		gotoxy(25,22);
		cout<<"\a\aWRONG CHOICE !! "  ;
		gotoxy(25,23);
		cout<<"PRESS ANY KEY TO RE ENTER ";
		getch();
		goto eee;
	}


}
void civil()
{
	civil:
	clrscr();
	gotoxy(25,3);
	cout<<"FEEDBACK PORTAL FOR CIVIL" ;
	gotoxy(25,4) ;

	for(i=0;i<28;i++)
		printf("-");

	gotoxy(25,7);
	cout<<"1.2009th BATCH";
	gotoxy(25,9);
	cout<<"2.2010th BATCH";
	gotoxy(25,11);
	cout<<"3.2011th BATCH";
	gotoxy(25,13);
	cout<<"4.2012th BATCH";
	gotoxy(25,15);
	cout<<"5.EXIT";
	gotoxy(25,20);
	cout<<"ENTER YOUR CHOICE:  ";
	cin>>choice3;
	switch(choice3)
	{
		case 1:
		clrscr();
		civil_students_2011();
		break;
		case 2:
		clrscr();
		civil_staffs_2011();
		break;
		case 3:
		clrscr();
		civil_subjects_2011();
		break;
		default:
		gotoxy(25,22);
		cout<<"\a\aWRONG CHOICE !! "  ;
		gotoxy(25,23);
		cout<<"PRESS ANY KEY TO RE ENTER ";
		getch();
		goto civil;
	}


}
void mech()
{
	mech:
	clrscr();
	gotoxy(25,3);
	cout<<"FEEDBACK PORTAL FOR MECH" ;
	gotoxy(25,4) ;

	for(i=0;i<28;i++)
		printf("-");

	gotoxy(25,7);
	cout<<"1.2009th BATCH";
	gotoxy(25,9);
	cout<<"2.2010th BATCH";
	gotoxy(25,11);
	cout<<"3.2011th BATCH";
	gotoxy(25,13);
	cout<<"4.2012th BATCH";
	gotoxy(25,15);
	cout<<"5.EXIT";
	gotoxy(25,20);
	cout<<"ENTER YOUR CHOICE:  ";
	cin>>choice3;
	switch(choice3)
	{
		case 1:
		clrscr();
		mech_students_2011();
		break;
		case 2:
		clrscr();
		mech_staffs_2011();
		break;
		case 3:
		clrscr();
		mech_subjects_2011();
		break;
		default:
		gotoxy(25,22);
		cout<<"\a\aWRONG CHOICE !! "  ;
		gotoxy(25,23);
		cout<<"PRESS ANY KEY TO RE ENTER ";
		getch();
		goto mech;
	}


}

void cse_students_2009()
{
 cout<<"students2011";
}

void cse_students_2010()
{
 cout<<"students2011";
}


void cse_students_2012()
{
 cout<<"students2012";
}
void cse_staffs_2009()
{
 cout<<"staff2011" ;
}void cse_staffs_2010()
{
 cout<<"staff2011" ;
}

void cse_staffs_2012()
{
 cout<<"staff2011" ;
}
void cse_subjects_2009()
{
 cout<<"subjects";
}
void cse_subjects_2010()
{
 cout<<"subjects";
}

void cse_subjects_2012()
{
 cout<<"subjects";
}

void ece_students_2009()
{
 cout<<"students2011";
}

void ece_students_2010()
{
 cout<<"students2011";
}

void ece_students_2011()
{
 cout<<"students2011";
}
void ece_students_2012()
{
 cout<<"students2011";
}

void ece_staffs_2009()
{
 cout<<"staff2011" ;
}
void ece_staffs_2010()
{
 cout<<"staff2011" ;
}
void ece_staffs_2011()
{
 cout<<"staff2011" ;
}
void ece_staffs_2012()
{
 cout<<"staff2011" ;
}
void ece_subjects_2009()
{
 cout<<"subjects2012";
}
void ece_subjects_2010()
{
 cout<<"subjects2012";
}


void ece_subjects_2011()
{
 cout<<"subjects";
}
void ece_subjects_2012()
{
 cout<<"subjects";
}


void eee_students_2011()
{
 cout<<"students2011";
}
void eee_staffs_2010()
{
 cout<<"staff2011" ;
}
void eee_staffs_2011()
{
 cout<<"staff2011" ;
}

void eee_staffs_2012()
{
 cout<<"staff2011" ;
}

void eee_subjects_2011()
{
 cout<<"subjects";
}


void civil_students_2011()
{
 cout<<"students2011";
}
void civil_staffs_2011()
{
 cout<<"staff2011" ;
}
void civil_subjects_2011()
{
 cout<<"subjects";
}


void mech_students_2011()
{
 cout<<"students2011";
}
void mech_staffs_2011()
{
 cout<<"staff2011" ;
}
void mech_subjects_2011()
{
 cout<<"subjects";
}
