#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
void cse();
void ece();
void eee();
void mech();
void civil();
void comman();
void cse_batch_2009();
void cse_batch_2010();
void cse_batch_2011();
void cse_batch_2012();
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
int i,choice1,choice2,choice3;
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
		gotoxy(33,10);
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
			i=10;
			clrscr();
			comman();
			break;
			case 2:
			i=20;
			clrscr();
			comman();
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
	cout<<"5.EXIT";
	gotoxy(25,20);
	cout<<"ENTER YOUR CHOICE:  ";
	cin>>choice3;
	switch(choice3)
	{
		case 1:
		clrscr();
		cse_batch_2009();
		break;
		case 2:
		clrscr();
		cse_batch_2010();
		break;
		case 3:
		clrscr();
		cse_batch_2011();
		break;
		case 4:
		clrscr();
		cse_batch_2012();
		break;
		case 5:
		exit(1) ;
		break;
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
		cse_students_2009();
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
		cse_students_2010();
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
	cout<<"4.EXIT";
	gotoxy(25,20);
	cout<<"ENTER YOUR CHOICE:  ";
	cin>>choice3;
	switch(choice3)
	{
		case 1:
		clrscr();
		cse_students_2011();
		break;
		case 2:
		clrscr();
		cse_staffs_2011();
		break;
		case 3:
		clrscr();
		cse_subjects_2011();
		break;
		default:
		gotoxy(25,22);
		cout<<"\a\aWRONG CHOICE !! "  ;
		gotoxy(25,23);
		cout<<"PRESS ANY KEY TO RE ENTER ";
		getch();
		cse_batch_2011();
	}



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
		cse_students_2012();
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
		ece_bacht_2009();
		break;
		case 2:
		clrscr();
		ece_bacht_2010();
		break;
		case 3:
		clrscr();
		ece_bacht_2011();
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

void cse_students_2011()
{
 cout<<"students2011";
}

void cse_staffs_2011()
{
 cout<<"staff2011" ;
}
void cse_subjects_2011()
{
 cout<<"subjects";
}
void ece_students_2011()
{
 cout<<"students2011";
}
void ece_staffs_2011()
{
 cout<<"staff2011" ;
}
void ece_subjects_2011()
{
 cout<<"subjects";
}

void ece_students_2012()
{
 cout<<"students2012";
}

void ece_subjects_2012()
{
 cout<<"subjects2012";
}

void eee_students_2011()
{
 cout<<"students2011";
}
void eee_staffs_2011()
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
