//Group(6)
//Section-C
//FirstYear
//C++Project
//TypingTest




#include<iomanip.h>
#include<iostream.h>
#include<windows.h>
#include<stdio.h>
#include<dir.h>
#include<dos.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>

struct users{
	char name[80];
};
int userchoose;
int realusernumber;
void login();						//NgeNge
void NewUser();						
void NewUserSetUp();
void OldUserSelect();
void OldUser();
void DelectUser();
void Deletefile(int);
void Info();

void Practice();					

void Tutorial();
void TutorialSelect();
void HandPositionReview();
void TutorialReview();
void TutorialReport();
void TutorialLesson1Review();
void TutorialLesson2Review();
void TutorialLesson3Review();
void TutorialLesson4Review();
void TutorialLesson5Review();
void TutorialLesson6Review();
void TutorialLesson7Review();
void TutorialLesson8Review();
void TutorialLesson9Review();
void TutorialLesson10Review();
void TutorialLessons();
void TutorialLesson1();
void TutorialLesson2();
void TutorialLesson3();
void TutorialLesson4();
void TutorialLesson5();
void TutorialLesson6();
void TutorialLesson7();
void TutorialLesson8();
void TutorialLesson9();
void TutorialLesson10();				//NgeNge


void Paragraph();						//
void ParagraphSelect();					
void ParagraphTest();
void ParagraphReview();
void ParagraphReport();
void ParagraphFashion();
void ParagraphComputing();
void ParagraphScience();
void ParagraphPoem();
void ParagraphPhilosophy();
void ParagraphSongLyrics();
void ParagraphStory();
void ParagraphJokes();
void ParagraphMedicine();
void ParagraphBusiness();
void ParagraphBeauty();
void ParagraphHistory();
void ParagraphTechnology();
void ParagraphLiterature();
void ParagraphYoga();
void ParagraphEarth();
void ParagraphTraveling();
void ParagraphMovie();					
void ParagraphHTMLSelect();
void ParagraphHTML1();
void ParagraphHTML2();
void ParagraphHTML3();					//

void Random();							//ZawGyi
void RandomSelect();
void RandomLessons();
void RandomReview();
void RandomReport();
void RandomLessonA();
void RandomLessonB();
void RandomLessonC();
void RandomLessonD();
void RandomLessonE();
void RandomLessonF();
void RandomLessonG();
void RandomLessonH();
void RandomLessonI();
void RandomLessonJ();
void RandomLessonK();
void RandomLessonL();
void RandomLessonM();
void RandomLessonN();
void RandomLessonO();
void RandomLessonP();
void RandomLessonQ();
void RandomLessonR();
void RandomLessonS();
void RandomLessonT();
void RandomLessonU();
void RandomLessonV();
void RandomLessonW();
void RandomLessonX();
void RandomLessonY();
void RandomLessonZ();
void RandomLessonMix();					//ZawGyi


void Score();							//YanPaingOo    
void ScoreReview();
void ScoreLessons();
void ScoreReport();
void ScoreSelect();
void ScoreParagraphS();
void ScoreNormalP();
void ScoreExpectP();
void ScoreProP();
void ScoreWord();						//YanPaingOo


void BestScore();						//AungMinThant
void Congratulation(int , int);
void Update(int, int);
int BestScoreFunction(int);				//AungMinThant
void SetColor(int);
int main()
{
	login();
	return 0;
}



void login()
{
	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"\t\t\t\t\tWelcome to Typing Test\t\t\t\t\t\t\t\t     Section(C)\n";
		cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	int choose;
	SetColor(2);
	cout<<"\t\t\t\t\t1.";
	SetColor(13);
	cout << "New user.\n\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\t2.";
	SetColor(13);
	cout << "Old user.\n\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\t3.";
	SetColor(13);
	cout << "Test Info.\n\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\tEsc.";
	SetColor(12);
	cout << "Exit.\n\n\n";
	SetColor(13);
	cout<<"\t\t\t\t\tSelect New User or Old User or Program Info-";
	choose=getche();
	
		switch(choose)
		{
			case '1': 
			{
				NewUser();
				break;
			}
			case '2':
			{
				OldUserSelect();
				break;
			}
			case '3':
			{
				Info();
				break;
			}
			case '\x1B':
			{
				char exit1;
				SetColor(12);
				cout<<"\n\t\t\t\t\tDo you want to exit(y/n)?";
				exit1=getche();
				switch(exit1)
				{
					case 'y':
				
					break;
					case 'Y':
					break;
					case 'N':
					login();
					break;
					case 'n':
					login();
					break;
				}
			}
			break;
			
		
		
	}
	return ;
}
void NewUser()
{
	 system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"\t\t\t\t\tWelcome to Typing Test\t\t\t\t\t\t\t\t     Section(C)\n";
			cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";

	
	users u[100];
	
	ifstream fileusernumber("usernumber.txt");
	while(!fileusernumber.eof())
	{
		fileusernumber>>realusernumber;
	}
	
	fileusernumber.close();
	
	SetColor(13);
	cout << "\t\t\t\t\tEnter your name:";
	ofstream os("username.txt",ios::app);
	SetColor(16);
	
	cin.getline(u[realusernumber].name,80);
	os.write((char*)&u[realusernumber], sizeof(users));
	ofstream outt("usernumber.txt");
	outt<<realusernumber+1<<endl;
	
	outt.close();
	os.close();
	
	NewUserSetUp();
	Practice();
	return ;
	
}

void NewUserSetUp()
{
	int k=1,j=1;
	int i;
	ofstream outt("ll.txt",ios::app);
	
	while(k<=4)
	{
		
		
		outt<<0<<"\t";
		k++;
	}
	outt<<endl;

	outt.close();
	return ;
	
}
void OldUserSelect()
{
	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"\t\t\t\t\tWelcome to Typing Test\t\t\t\t\t\t\t\t     Section(C)\n";
		cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
 SetColor(2);
	cout<<"\t\t\t\t\t1.";
	SetColor(13);
	cout<<"Choose Old Name.\n\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\t2.";
	SetColor(13);
	cout<<"Delect Old Name.\n\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\tEsc.";
	SetColor(12);
	cout<<"Exit.\n";
	SetColor(13);
	cout<<"\n\n\t\t\t\t\tChoose old name or delete name-";
	char choose;
	
	choose=getche();
	switch(choose)
	{
		case '1':
		OldUser();
		break;
		case '2':
		DelectUser();
		break;
			case '\x1B':
			{
				char exit1;
				SetColor(12);
				cout<<"\n\t\t\t\t\tDo you want to exit(y/n)?";
				exit1=getche();
				switch(exit1)
				{
					case 'y':
					login();
				
					break;
					case 'Y':
					login();
					break;
					case 'N':
					OldUserSelect();
					break;
					case 'n':
					OldUserSelect();
					break;
				}
			}
			break;
	}
	return ;
}
void OldUser()
{
	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"\t\t\t\t\tWelcome to Typing Test\t\t\t\t\t\t\t\t     Section(C)\n";
		cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	users u[100];
	int choose;
	ifstream is("username.txt");
	int o = 0;
	is.read((char*)&u[o], sizeof(u[o]));
	while(!is.eof())
	{               o++;
		is.read((char*)&u[o], sizeof(u[o]));
	}
	for(int i = 0; i < o; i ++)
	{      
		SetColor(2);          
		cout<<"\t\t\t\t\t"<<i+1<<".";
		SetColor(13);
		cout<<u[i].name<<endl<<endl;
	}
	cout << "\t\t\t\t\tChoose ur name:" ;
	cin>>realusernumber;
    
is.close();
Practice();
return ;

}

void DelectUser()
{
system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"\t\t\t\t\tWelcome to Typing Test\t\t\t\t\t\t\t\t     Section(C)\n";
		cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	users u[100];
	int choose;
	ifstream is("username.txt");
	int o = 0;
	is.read((char*)&u[o], sizeof(u[o]));
	while(!is.eof())
	{               o++;
		is.read((char*)&u[o], sizeof(u[o]));
	}
	for(int i = 0; i < o; i ++)
	{         
		SetColor(2);       
		cout<<"\t\t\t\t\t"<<i+1<<".";
		SetColor(3);
		cout<<u[i].name<<endl<<endl;
	}
	is.close();
	cout << "\t\t\t\t\tChoose name you want to delete or '0' to quit:" ;
	cin>>choose;
	switch(choose)
	{
		case 0:
		OldUserSelect();
		return;
		break;
	}
	ifstream iss("username.txt");
	ofstream oss("usernameupdate.txt");
	for(int j=0;j<o;j++)
	{
		if(j==choose-1)
		{
			
			iss.read((char*)&u[j], sizeof(u[j]));
		}
		
		else
		{
			iss.read((char*)&u[j], sizeof(u[j]));
			oss.write((char*)&u[j], sizeof(u[j]));
		}	
	}
	
	oss.close();
	iss.close();
	
	ifstream isss("usernameupdate.txt");
	ofstream osss("username.txt");
	for(int f=0;f<o-1;f++)
	{
		isss.read((char*)&u[f], sizeof(u[f]));
		osss.write((char*)&u[f], sizeof(users));
	}
	

	osss.close();
	isss.close();

	
	Deletefile(choose);
	DelectUser();
	
	return ;
}

void Deletefile(int delnumber)
{
	int a,b;
	ifstream unum("usernumber.txt");
	
	unum>>a;
	b=a-1;
	unum.close();
	ofstream unumout("usernumber.txt");
	unumout<<b;
	unumout.close();
	ifstream userscore("ll.txt");
	ofstream deletescore("update.txt");
	int score1;
	for(int i=1;i<=b+1;i++)
	{
		for(int j=1;j<=4;j++)
		{
			if(i==delnumber)
			{
				userscore>>score1;
				
			}
			else if(j==4 && i!=delnumber)
			{
				userscore>>score1;
				deletescore<<score1<<endl;
			}
			else 
			{
				userscore>>score1;
				deletescore<<score1<<"\t";
			}
		}
	}
	deletescore.close();
	userscore.close();
	
	int c;
	ifstream updatefile("update.txt");
	ofstream llfile("ll.txt");
	for(int i=1;i<=b;i++)
	{
		for(int j=1;j<=4;j++)
		{
			if(j==4)
			{
				
				updatefile>>c;
				llfile<<c<<endl;
				
			}
			else
			{
				
				updatefile>>c;
				llfile<<c<<"\t";
				
			}
			
		}
	}
	llfile.close();
	updatefile.close();
	return ;
}
void Info()
{
	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"\t\t\t\t\tWelcome to Typing Test\t\t\t\t\t\t\t\t     Section(C)\n";
		cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";

	SetColor(13);
	cout<<"\tTyping Test Program\n\n";
    SetColor(0);cout<<"\tThis program is aim for new computer students who can't type letters well.";
    cout<<"\n\tIn this program, you can practice tutorial test, paragraph test, random test, score test.";
    cout<<"\n\t\t-------------------------------------------------";
    cout<<"\n\n\tTutorial Test";
    cout<<"\n\n\tTutorial test is only for beginner.";
    cout<<"\n\tIf you have done practicing tutorial test, you can test other tests.";
    cout<<"\n\t\t-------------------------------------------------";
    
    cout<<"\n\n\tParagraph Test";
    cout<<"\n\n\tParagraph test has many paragraphs to practice.\n";
    cout<<"\tAfter typing, this program calculate your typing speed and you can see your score in your best score\n";
    cout<<"\n\t\t-------------------------------------------------";
    
    cout<<"\n\n\tRandom Test";
    cout<<"\n\n\tRandom test have 27 lessons.\n\tIn lesson 1, all words are started with character 'a' and other lessons start with character 'b','c',...,'z' respectively.";
    cout<<"\n\tThe last lesson starts with mixed characters.";
    cout<<"\tThese lessons calculate words per minute.";
    cout<<"\n\t\t-------------------------------------------------";
    
    cout<<"\n\n\tScore Test";
    cout<<"\n\n\t Paragraph Score Test have three levels.\n\n";
    cout<<"\n\t1.First is easy in which if your typing error is more than 10 words for one sentence, program will stop. \n";
    cout<<"\n\t2.Second  is normal in which if your typing error is more than 5 words for one sentence ,program will stop.\n";
    cout<<"\n\t3.Third level is hard in which  your typing error is only one time for  one sentence. \n";
    
    cout<<"\n\t\t-------------------------------------------------";
    
    
    cout<<"\n\t Word Score Test  ";
    cout<<"\n\n\t For one word , you will get 3 marks. If one letter is falsed ,score test will stop.";
    cout<<"\n ";
    cout<<"\n\t\t-------------------------------------------------";
    

    SetColor(9);
    cout<<"\n\tSpecial thanks to you! Best of luck in practicing! \n";
    char exit1;
    SetColor(12);
    cout<<"\n\tPress any key to exit test info-";
    exit1=getche();
    login();
	return ;
}


void Practice()
{
    system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"\t\t\t\t\tWelcome to Practice Selection\t\t\t\t\t\t\t     Section(C)\n";
		cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
 
    SetColor(2);
    cout<<"\t\t\t\t\t1.";
    SetColor(13);
    cout<<"Tutorial.\n\n\n";
    SetColor(2);
    cout<<"\t\t\t\t\t2.";
    SetColor(13);
    cout<<"Paragraph Test.\n\n\n";
    SetColor(2);
    cout<<"\t\t\t\t\t3.";
    SetColor(13);
    cout<<"Random Word Test.\n\n\n";
    SetColor(2);
    cout<<"\t\t\t\t\t4.";
    SetColor(13);
    cout<<"Score Test.\n\n\n";
    SetColor(2);
    cout<<"\t\t\t\t\t5.";
    SetColor(13);
    cout<<"Your Best Scores.\n\n\n";
    SetColor(2);
    cout<<"\t\t\t\t\tEsc.";
    SetColor(12);
    cout<<"Change User.\n";
    SetColor(13);
    cout<<"\n\n\t\t\t\t\tChoose one of them-";
    char num;
    num=getche();
    
    switch (num) 
	{
        case '1':
		Tutorial();
		break;
        case '2':
		Paragraph();
		break;
        case '3':
		Random();
		break;
        case '4':
		Score();
		break;
		case '5':
		BestScore();
		break;
		case '\x1B':
		cout<<"\n\n\t\t\t\t\tDo you want to change your name?(y/n)";
		char exit1;
		exit1=getche();
		switch(exit1)
		{
			case 'y':
			login();
			break;
			case 'Y':
			login();
			break;
			case 'n':
			Practice();
			break;
			case 'N':
			Practice();
			break;
		}
		
		
        break;
        default:
        break;
    }
    return ;
}

void Tutorial()
{
    TutorialSelect();
    return ;
}
void TutorialSelect()
{
system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"\t\t\t\t\tWelcome to Tutorial Test\t\t\t\t\t\t\t     Section(C)\n";
		cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	char choose;
	SetColor(2);
	
	cout<<"\t\t\t\t\t1.";
	SetColor(13);
	cout<<"Test.\n\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\t2.";
	SetColor(13);
	cout<<"Hand Position Review.\n\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\t3.";
	SetColor(13);
	cout<<"Tutorial Review.\n\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\t0.";
	SetColor(13);
	cout<<"Report.\n\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\tEsc.";
	SetColor(12);
	cout<<"Exit Tutorial Test.\n\n\n";
	SetColor(13);
	cout<<"\t\t\t\t\tChoose test or review or exit:";
	choose=getche();
	switch(choose)
	{
		case '1':
		TutorialLessons();
		break;
		case '2':
		HandPositionReview();
		break;
		case '3':
		TutorialReview();
		break;
		case '0':
		TutorialReport();
		break;
		case '\x1B':
		char exit1;
		SetColor(12);
		cout<<"\n\n\t\t\t\t\tDo you want to exit Tutorial Test(y/n)?";
		exit1=getche();
		switch(exit1)
		{
			case 'y':
			Practice();
			break;
			case 'n':
			TutorialSelect();
			break;
		}
		
		break;
	}
	cout<<endl;
	SetColor(4);
	return ;
	
	
}
void TutorialLessons()
{
			system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	int choose;
	SetColor(2);
	cout<<"\t\t\t\t\t A.";
	SetColor(13);
	cout<<"Lesson  1\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\t B.";
	SetColor(13);
	cout<<"Lesson  2\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\t C.";
	SetColor(13);
	cout<<"Lesson  3\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\t D.";
	SetColor(13);
	cout<<"Lesson  4\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\t E.";
	SetColor(13);
	cout<<"Lesson  5\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\t F.";
	SetColor(13);
	cout<<"Lesson  6\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\t G.";
	SetColor(13);
	cout<<"Lesson  7\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\t H.";
	SetColor(13);
	cout<<"Lesson  8\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\t I.";
	SetColor(13);
	cout<<"Lesson  9\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\t J.";
	SetColor(13);
	cout<<"Lesson 10\n\n";
	SetColor(12);
	cout<<"\t\t\t\t\t Esc.Back\n\n";
	SetColor(13);
	cout<<"\t\t\t\t\tChoose a lesson you want to Practice";
	choose=getche();
	
	switch(choose)
	{
		case 'a':
		TutorialLesson1();
		break;
		case 'A':
		TutorialLesson1();
		break;
		case 'b':
		TutorialLesson2();
		break;
		case 'B':
		TutorialLesson2();
		break;
		case 'c':
		TutorialLesson3();
		break;
		case 'C':
		TutorialLesson3();
		break;
		case 'd':
		TutorialLesson4();
		break;
		case 'D':
		TutorialLesson4();
		break;
		case 'e':
		TutorialLesson5();
		break;
		case 'E':
		TutorialLesson5();
		break;
		case 'f':
		TutorialLesson6();
		break;
		case 'F':
		TutorialLesson6();
		break;
		case 'g':
		TutorialLesson7();
		break;
		case 'G':
		TutorialLesson7();
		break;
		case 'h':
		TutorialLesson8();
		break;
		case 'H':
		TutorialLesson8();
		break;
		case 'i':
		TutorialLesson9();
		break;
		case 'I':
		TutorialLesson9();
		break;
		case 'j':
		TutorialLesson10();
		break;
		case 'J':
		TutorialLesson10();
		break;
		case '\x1B':
		char exit1;
		SetColor(12);
		cout<<"\n\t\t\t\t\tDo you want to exit Tutorial Lessons(y/n)?";
		exit1=getche();
		switch(exit1)
		{
			case 'y':
			TutorialSelect();
			break;
			case 'n':
			TutorialLessons();
			break;
		}
		
		break;
		
	}
}
void HandPositionReview()
{
			system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 char exit1;
	 SetColor(2);
	cout<<"\tHand position\n\n";
	SetColor(13);
	cout<<"\tLeft hand's index finger	='f', 't', 'g', 'v', 'b', '5',' 6'.\n";
	cout<<"\tLeft hand's middle finger	='d', 'e', '3', '4', 'c'.\n";
	cout<<"\tLeft hand's ring-finger		='s', 'w', '2', 'x'.\n";
	cout<<"\tLeft hand's pinkie		='a', 'q', '1', 'z', 'shift', 'ctrl', 'Caps Lock',   'Tab', 'Esc', '`', '~'.\n";
	cout<<"\tLeft hand's thumb		='spacebar'.\n";
	cout<<"\tRight hand's thumb 		='spacebar'.\n";
	cout<<"\tRight hand's index finger	='j', 'y', 'u', '7', 'n', 'm', 'h'.\n";
	cout<<"\tRight hand's middle finger 	='k', 'I', ',', '<', '8', '9'.\n";
	cout<<"\tRight hand's ring-finger	='l', 'o', '0', '-', '_', '+', '=', '.', '>'.\n";
	cout<<"\tRight hand's pinkie		=';', ':', ''','p', '[', '{', '}', '}', '|', '\', '?', '/', 'Enter', 'shift'.\n";
	SetColor(12);
	cout<<"Press any key to close 'review'";
	exit1=getche();
	TutorialSelect();
	return ;
}
void TutorialReview()
{
		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	char exit1;
	SetColor(2);
	cout<<"\tTutorial test\n\n";
	SetColor(13);
	cout<<"Tutorial test have 10 lessons.\n\n";
	cout<<"You can select a lesson you want to train by reading the following lesson's review. \n\n";
	cout<<"Lesson  1.\n";
	cout<<"\tYou have to type your left hand fingers' positions such as 'a', 's ', 'd', 'f' characters with your left hand.\n\n";
	cout<<"Lesson  2.\n";
	cout<<"\tYou have to type your right hand fingers' positions such as 'j', 'k ','l',';' characters with your right hand.\n\n";
	cout<<"Lesson  3.\n";
	cout<<"\tYou have to type characters in lesson 1 and lesson 2.\n\n";
	cout<<"Lesson  4.\n";
	cout<<"\tYou have to type characters in lesson 1 and your left hand's upper position characters such as 'q', 'w', 'e', 'r', 't'  with your left hand only.\n\n";
	cout<<"Lesson  5.\n";
	cout<<"\tYou have to type characters in lesson 2 and your right hand's upper position characters such as 'y', 'u', 'i', 'o', 'p'  with your right hand only.\n\n";
	cout<<"Lesson  6.\n";
	cout<<"\tYou have to type characters in lesson 4 and lesson 5.\n\n";
	cout<<"Lesson  7.\n";
	cout<<"\tYou have to type characters in lesson 4 and your left hand's lower position characters such as 'z', 'x', 'c', 'v', 'b' with your left hand only.\n\n";
	cout<<"Lesson  8.\n";
	cout<<"\tYou have to type characters in lesson 5 and your right hand's lower position characters such as 'n', 'm', ',', '.', '/' with your left hand only.\n\n";
	cout<<"Lesson  9.\n";
	cout<<"\tYou have to type characters in lesson 7 and lesson 8.\n\n";
	cout<<"Lesson 10.\n";
	cout<<"\tYou have to type integers and symbols and using key 'shift' symbols in keyboard.\n\n";
	SetColor(12);
	cout<<"Press any key to close 'review'";
	exit1=getche();
	TutorialSelect();
	return ;
} 
void TutorialReport()
{
		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 char exit1;
	char report;
	ofstream tutorialReport("TutorialReport.txt",ios::app);
	tutorialReport<<endl;
	SetColor(5);
	cout<<"\t\t\t\t\tWhat do you want to report?\n\t\t\t\t\t";
	while(report!='\r')
	{
		SetColor(6);
		report=getche();
		if(report=='\x1B')
		{
			break;
		}
		else if(report=='\x08')
		{
			cout<<" "<<"\b";
		}
		tutorialReport<<report;
	}
	
	tutorialReport.close();
	if(report=='\x1B')
	{
		TutorialSelect();
		return ;
	}
	SetColor(4);
	cout<<"\n\t\t\t\t\tPress any key to exit report:";
	exit1=getche();
	return ;
}
void TutorialLesson1Review()
{
			system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	SetColor(2);
	cout<<"\tLesson  1.\n\n";
	SetColor(13);
	cout<<"\tYou have to type your left hand fingers' positions such as 'a', 's ', 'd', 'f' characters with your left hand.\n\n";
	char exit1;
	SetColor(12);
	cout<<"Press any key to close review-";
	exit1=getche();
	return ;	
}
void TutorialLesson2Review()
{
		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	SetColor(2);
	cout<<"\tLesson  2.\n\n";
	SetColor(13);
	cout<<"\tYou have to type your right hand fingers' positions such as 'j', 'k ','l',';' characters with your right hand.\n\n";
	char exit1;
	SetColor(12);
	cout<<"Press any key to close review-";
	exit1=getche();
	return ;	
}
void TutorialLesson3Review()
{
	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	SetColor(2);
	cout<<"\tLesson  3.\n\n";
	SetColor(13);
	cout<<"\tYou have to type characters in lesson 1 and lesson 2.\n\n";
	char exit1;
	SetColor(12);
	cout<<"Press any key to close review-";
	exit1=getche();
	return ;	
}
void TutorialLesson4Review()
{
		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	SetColor(2);
	cout<<"\tLesson  4.\n\n";
	SetColor(13);
	cout<<"\tYou have to type characters in lesson 1 and your left hand's upper position characters such as 'q', 'w', 'e', 'r', 't'  with your left hand only.\n\n";
	char exit1;
	SetColor(12);
	cout<<"Press any key to close review-";
	exit1=getche();
	return ;	
}
void TutorialLesson5Review()
{
		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	SetColor(2);
	cout<<"\tLesson  5.\n\n";
	SetColor(13);
	cout<<"\tYou have to type characters in lesson 2 and your right hand's upper position characters such as 'y', 'u', 'i', 'o', 'p'  with your right hand only.\n\n";
	char exit1;
	SetColor(12);
	cout<<"Press any key to close review-";
	exit1=getche();
	return ;	
}
void TutorialLesson6Review()
{
		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	SetColor(2);
	cout<<"\tLesson  6.\n\n";
	SetColor(13);
	cout<<"\tYou have to type characters in lesson 4 and lesson 5.\n\n";
	char exit1;
	SetColor(12);
	cout<<"Press any key to close review-";
	exit1=getche();
	return ;	
}
void TutorialLesson7Review()
{
	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	SetColor(2);
	cout<<"\tLesson  7.\n\n";
	SetColor(13);
	cout<<"\tYou have to type characters in lesson 4 and your left hand's lower position characters such as 'z', 'x', 'c', 'v', 'b' with your left hand only.\n\n";
	char exit1;
	SetColor(12);
	cout<<"Press any key to close review-";
	exit1=getche();
	return ;	
}
void TutorialLesson8Review()
{
	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	SetColor(2);
	cout<<"\tLesson  8.\n\n";
	SetColor(13);
	cout<<"\tYou have to type characters in lesson 5 and your right hand's lower position characters such as 'n', 'm', ',', '.', '/' with your left hand only.\n\n";
	char exit1;
	SetColor(12);
	cout<<"Press any key to close review-";
	exit1=getche();
	return ;	
}

void TutorialLesson9Review()
{
		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	SetColor(2);
	cout<<"\tLesson  9.\n\n";
	SetColor(13);
	cout<<"\tYou have to type characters in lesson 7 and lesson 8.\n\n";
	char exit1;
	SetColor(12);
	cout<<"Press any key to close review-";
	exit1=getche();
	return ;		
}
void TutorialLesson10Review()
{
		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	SetColor(2);
	cout<<"\tLesson 10.\n\n";
	SetColor(13);
	cout<<"\tYou have to type integers and symbols and using key 'shift' symbols in keyboard.\n\n";
	char exit1;
	SetColor(12);
	cout<<"Press any key to close review-";
	exit1=getche();
	return ;	
}
void TutorialLesson1()
{
	 TutorialLesson1Review();
	 	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	 SetColor(13);
	 cout<<"\t\t\t\t\tLesson 1\n\n";
	 char str1;	
     char str2[10][80]={"asdf fdsa asfd asdf afds adsf asdf fdsa fsad fdsa fffa sa",
	 					"aaaa ssss dddd ffff sasa dsds fdfd sdfa dssd affa dfsa ss",
	 					"ffss ddss aasf ffds dsaf ffds ssdf ddaa aaff ddss fdsa ss",
	 					"ddss ddaa ffaa ssfd asdf fdsa sdfa fdsa asdf fdas dsfa sa",
	 					"safd fasd fdsa asdf dsaf fsas sasd fafs dsaf fdsa asdf fd",
	 					"sdfa fasd sdaf sfaf asfd afds afds asfd asdf fdsa fsad fa",
	 					"fads sadf ddas ffsa sadd ddsa aaff dsaf fdsa asdf fdsa ds",
	 					"adfd safd asdd dfsa dsaf fdsa fdsa fsad fsas fsad fdsa fd",
	 					"adfd sdfs asdf fdsa asdf fdsa ffds fdsa ddsa asaa aaaa ss",
 						"aadd ffff dddd sadf fdsa safd fdas fdsa fdsa dsad dasd ss"};
     
     	int error=0;
		int i=0;
		time_t start=clock();
		for(int b=0;b<10;b++)
		{
			SetColor(16);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else	
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			TutorialLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is-"<<average;
		cout<<"\n\t\tYour typing error is                          -"<<error;
		Congratulation(1,average);
		Update(1,average);
		char exit1;
		SetColor(12);
		cout<<"Press any key to exit Lesson1-";
		exit1=getche();
		
	
		TutorialLessons();
		
}
void TutorialLesson2()
{
	TutorialLesson2Review();
	 system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tLesson 2\n\n";
	 char str1;	
     char str2[10][80]={"jkl; ;lkj kl;j jjjj kkkk llll ;;;; ;lkj jkl; lk;j jkl; ;l",
	 					"kl;j lk;j jkl; jl;k jkk; jjkl ll;k kk;l ll;j kkl; jjj; ll",
	 					"ll;j ;;lk ;;;k kl;; jl;l ;klj ;kj; kj;l kl;l ;lkj jk;l kl",
	 					"lkj; jkl; l;kj ll;j kl;j jl;; ;k;j jl;j k;l; jl;j l;lj jl",
	 					";kkj l;jk jl;k jkl; ll;j jkl; jkl; ;lkj jk;l llk; jl;k kl",
	 					"l;kj kl;j kl;j jkl; ;ljk kkkk llll ;ljl jjjj ;klj jkl; kl",
	 					";lkj jkl; l;jj l;jk ;lkj jl;; l;jj kl;j jl;; kl;j k;jj kj",
	 					";klj jl;j k;jk k;kj k;kl ;ljk kjl; ;lkj jkl; ;ljk jklj jl",
	 					";ljk kl;; ;lkj jkl; ;lkj k;lj kl;l k;lj k;kk kl;j kl;j jl",
 						";lkj jkl; l;jk jkll k;jk klj; kl;k ;lkj jkl; kl;j kl;j j;"};
     
     	int error=0;
		int i=0;
		time_t start=clock();
		for(int b=0;b<10;b++)
		{
			SetColor(16);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			TutorialLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(1,average);
		Update(1,average);
		char exit1;
		SetColor(12);
		cout<<"Press any key to exit Lesson1-";
		exit1=getche();
		
		TutorialLessons();
}
void TutorialLesson3()
{
	TutorialLesson3Review();
	 system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tLesson 3\n\n";
	 char str1;	
     char str2[10][80]={"asdf jkl; ;lkj fdsa asds ;lkj fdsa l;jk askl jlsa ;klj dk",
	 					"ljds all; aaal sssl llls klsd ;;;; dsaf lkds asdl ;kd; ;l",
	 					"safl ljld lkjd ljsd salj salk kald kl;a l;jd ;kds lj;d al",
	 					"fd;l j;ld ads; kjl; lj;d kl;d ;lkd adsk ;kjf ;kad adk; ds",
	 					"asdk lsld lljd asdk ljdd ;;kj l;lj kdsa ldkd l;jd ;jff ff",
	 					"f;dk dflf flda ljfa lfjk ljff ;ljs ljjf ljff ;jkl lj;f la",
	 					"fald fjlk fflk fljf fljf fljj asd; lj;d adl; ljff ;jdf fd",
	 					"fdl; fda; fjkl fl;j l;jd ;f;k ;fj; kjf; kj;f ;asd ;f;k kl",
	 					"f;lk fl;j jfl; klas lsda l;jf ;;fj fjl; fl;j sadl lka; ;l",
 						"fl;l ljf; fl;; flj; lf;; ;;;; ;kja ;lkd asl; j;jg ;skf ss"};
     
     	int error=0;
		int i=0;
		time_t start=clock();
		for(int b=0;b<10;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			TutorialLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(1,average);
		Update(1,average);
		char exit1;
		SetColor(12);
		cout<<"Press any key to exit Lesson1-";
		exit1=getche();
		
		TutorialLessons();
}
void TutorialLesson4()
{
	 TutorialLesson4Review();
	 system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tLesson 4\n\n";
	 char str1;	
     char str2[10][80]={"ader rste east eats reqw qewe rewq tews serq safe sder fe",
	 					"asft taer tear tfer sats setf frte fsat fewt saft ffee we",
	 					"afdf fdsf fear ftst fest fast feqt qres qare sqar tfre es",
	 					"sddt tret tttt eeee wwww qqqq qwer rrrr reas srer tdte st",
	 					"asdk lsld lljd asdk ljdd ;;kj l;lj kdsa ldkd l;jd ;jff ff",
	 					"sdfe rewq adfe ewad saqe asqw fdsw qerf fewq weqs ewqr ef",
	 					"sdew rwqs asdw erwd deae dear frea ewqs asde fert tewq tt",
	 					"teat trea test teqw eera teas tsde tsas ewte qews tqws ta",
	 					"sadf erwq saee sdaw qase fsae dsae fqet tsaq tqwe teqw ad",
 						"qwed fewq aset were reeq aest tewq tear ffff eawe wqet te"};
     
     	int error=0;
		int i=0;
		time_t start=clock();
		for(int b=0;b<10;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			TutorialLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(1,average);
		Update(1,average);
		char exit1;
		SetColor(12);
		cout<<"Press any key to exit Lesson1-";
		exit1=getche();
		
		TutorialLessons();
}
void TutorialLesson5()
{
	TutorialLesson5Review();
	 	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tLesson 5\n\n";
	 char str1;	
     char str2[10][80]={"jl;u upou ypuu uppy yplu ypli youl jk;l j;up jlio uiop ii",
	 					";lkj l;oi ;oui j;ou j;;o l;ou ;;ou jl;o l;iu ;opp ppoi pp",
	 					"uuyy iioo oopp ppoo poui yuio uiop oupi ;jip ;kuo ;lki ;j",
	 					";lji ;kio jl;o ;lli ;lji jup[ ;kjp l;ji ;lki jk;o ol;o l;",
	 					";jlk jl;; jlou ;lko jkio ;opk youo l;ji l;ji jjiu uiop l;",
	 					";l;j j;li kiup l;op upop upup pupu oioi ioio yoyo yopp yi",
	 					"yiop yopk ;joo l;ou l;ji jlji opuk iuok uoil uol; uopl iu",
	 					";kui lulu lupl k;iu lj;i l;iu l;op l;ji l;ji ;jio ;kio ;i",
	 					";jki jl;i ljli ;ki; ;lkj jl;i ;lij ljli ;lkj l;ji ;lji io",
 						";jku uoip uiop iopp kjio lkjo io;l iokj uopk iopk uopk oi"};
     
     	int error=0;
		int i=0;
		time_t start=clock();
		for(int b=0;b<10;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			TutorialLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(1,average);
		Update(1,average);
		char exit1;
		SetColor(12);
		cout<<"Press any key to exit Lesson1-";
		exit1=getche();
		
		TutorialLessons();
}
void TutorialLesson6()
{
	TutorialLesson6Review();
	 system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tLesson 6\n\n";
	 char str1;	
     char str2[10][80]={";lje jlie youe aree test lous lupq jpso ljop lkji kies lo",
	 					"ldlk alsd ljie iolw loal lqoa load jlfe file ;prf juqa aq",
	 					"ldol liws kied fruj jurd aqp; kies slow jfur ;pqa aqp; aq",
	 					"ldoe oloe idol ioes kjfi asdf flee als; fjla slap jkie jf",
	 					"asdl elwq lfoa kemw a;de ljfe kief knif elif lift life ls",
	 					"jeoq jfod ldpa dsjw loes kjef kjie aswq lope lope loop la",
	 					"last iout outt lsaf ijje lpqe lief flee kear leaf diaa de",
	 					"your kyor ylis eaye easy esli slie lase dise side lape la",
	 					"lake jfoe joef ofee eoff pfff koew lole loaj laug tyoo sa",
 						"asdf l;ie jaoi ljoe qeld jfpe ljie lawe ;oid jloe ;kfp ;s"};
     
     	int error=0;
		int i=0;
		time_t start=clock();
		for(int b=0;b<10;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
						
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			TutorialLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(1,average);
		Update(1,average);
		char exit1;
		SetColor(12);
		cout<<"Press any key to exit Lesson1-";
		exit1=getche();
		
		TutorialLessons();
}
void TutorialLesson7()
{
	TutorialLesson7Review();
	 system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tLesson 7\n\n";
	 char str1;	
     char str2[10][80]={"sadf cxav xabb bast best fere fear carr cast vert vetb bb",
	 					"best badw bcxz bcxz zxcb zxcv bcxz xcvb vdwq acvw vxza dw",
	 					"dfev vdsa sadf dvew czae zaae zers zers fewf cccc vvvv bb",
	 					"bbbb cccc xxxx zzzz zxcv cvwq qrtv zbqt bztq bwez tbew sc",
	 					"ftvx vcxs wdxx vxdw cxsw asdc scwe cxse cxse cxve vzew vx",
	 					"avvr vxer verr veas vsdz dfve ewvz zvcx xcvw vxcs scer vs",
	 					"sdav vxzs erws adqq fewc fews fesa sasd fwes fase facx aa",
	 					"bcxa fasb advb saxa zvdd vszd vasw vxcw fvxz afve vxzd we",
	 					"sdav vdwe vedw verb bveq brav east feqe fewq sadv vdew ts",
 						"tvwq safe ferr fear fewq csqe dsvw dcev vzde vadw vder ss"};
     
     	int error=0;
		int i=0;
		time_t start=clock();
		for(int b=0;b<10;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			TutorialLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(1,average);
		Update(1,average);
		char exit1;
		SetColor(12);
		cout<<"Press any key to exit Lesson1-";
		exit1=getche();
		
		TutorialLessons();
}
void TutorialLesson8()
{
		TutorialLesson8Review();
	 	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tLesson 8\n\n";
	 char str1;	
     char str2[10][80]={";jo. l.op ,/lo m,.; ml/l ljpi upkl youl .n.k n.,/ /,.m ;o",
	 					"l,/. lopi ,/,n jlpu jopj jpiu j.,p jiop lkjp jn.; ;.,m ;l",
	 					";;., lj;o j;.n l;ji l;/l j;lp ljip ljp. j;op lj;, ljop j,",
	 					"l;op l;jo ;jio l;jj l;ji l;io ljll l;op l;ji ;jil ;j., ./",
	 					",.;p joki l;op loki lj.; ;.., l.,. ;jom .... mmmm nnnn ..",
	 					",,,, //// ljo. ,m;o n.ml mn.p jip. ljm. l;nl n.lp n.,; m.",
	 					"l;li lipl joip ,ml; l;ji ;jip ;,;k ;kj. ;jio ;jop j;l, ;.",
	 					"kl;; l;op ;,jj ;jlk ;l./ ;/,k lj;l ;lk/ ;lop ;j.j lkjp lk",
	 					"l;jo jiop l;ii ;jkp lj.j kj;k l;j; jk;l ;.mj ;lji ;jio l;",
 						"l;jo ;lji lj./ /,mj l;., l;.. ;jio ;l.k jiop j.mk ljom .."};
     
     	int error=0;
		int i=0;
		time_t start=clock();
		for(int b=0;b<10;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			TutorialLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(1,average);
		Update(1,average);
		char exit1;
		SetColor(12);
		cout<<"Press any key to exit Lesson1-";
		exit1=getche();
		
		TutorialLessons();
}
void TutorialLesson9()
{
	TutorialLesson9Review();
	 	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tLesson 9\n\n";
	 char str1;	
     char str2[10][80]={"okig okie oooo lete goes mone your best ofyr love isis ha",
	 					"clos earr ight estt alls ring rung wron gros eain have is",
	 					"ijus twan nalo veyo ubco zero neve rcom earr wrig htoo aa",
	 					"yous can. .,lt ,ajz .mop .z,m ea,. ljpv ;la, brak brea ko",
	 					"koko koch iklr loha pyaw nayy tall naww minn kaba barr lr",
	 					"toee maaa lozz larr apar kwat minn kaaa aaaa chou kkkk so",
	 					"drrr ngrr mayz twrr tall ahin hinn lozz lolo lolo aaaa jm",
	 					"lads cjpp zjop mle; j;.a llml njap quee kooo loee chin tl",
	 					"drpr plhe hehe ld;d asdf ljfn j;ao ljoe jjao ljss ljoc lo",
 						"fcpz ljal pase ljsp asdf l;pe jsap jlme jpad meoe ljpc jo"};
     
     	int error=0;
		int i=0;
		time_t start=clock();
		for(int b=0;b<10;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					cout<<"\b";
					i--;
				}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			TutorialLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(1,average);
		Update(1,average);
		char exit1;
		SetColor(12);
		cout<<"Press any key to exit Lesson1-";
		exit1=getche();
		TutorialLessons();
}
void TutorialLesson10()
{
	TutorialLesson10Review();
		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Tutorial Test \t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 	cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tLesson 10\n\n";
	 char str1;	
     char str2[10][80]={"-!#$ $@!! *()# ()#@ @)!_ #)@+ +_+! {}|} [][] ]()# |||| ??",
	 					"{{{{ }}}} |||| \\\\ :::: #### .... ,,,, //// ???? //./ ._",
					 	")))) (((( **** &&&& ^^^^ %%%% $$$$  #### !!!! !@! !#!! #$",
	 					"#$(# @**( #@@! !@#$ $$%$ $#*) :?>< <>?: >:?: $%#@ >?<: @@",
	 					"$&*@ @(*# #@$* **** (((( )))) @@!! #(@) (#)$(@ #((@)@$*@(",
	 					"@(&$ %*)@ $)@* @)(*# #**@$)*&%@)*)#*@)&%@)*$)*#)%*)#*$@@@",
	 					"$&(^%@@)$*)@&@&($&(#@%@#&(&#$(*#)(*$()#@*&)@&#%((!*&@$!@$",
	 					"(*&% @$(&@$ @$&(@&$ (@&$)#@(!&! !(&#!$) !$*!)*$! (*&$!#)&",
	 					"$&)*@$ $@)*$@)*$& !$)#*@&$!$*)*@)&$)@*%)@#$&)@#*$)@#$)*#@",
	 					"#$*)!& %#@)*$#@!_&!$@_!#_-_+_+_=-=$#%@ $(&%@()$&@(&$%&##",
 						
						 };
     
     	int error=0;
		int i=0;
		time_t start=clock();
		for(int b=0;b<10;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
		if(str1=='\x1B')
		{
			TutorialLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(1,average);
		Update(1,average);
		char exit1;
		SetColor(12);
		cout<<"Press any key to exit Lesson1-";
		exit1=getche();
		TutorialLessons();
}




void Paragraph()
{
   ParagraphSelect();
   return ;
}
void ParagraphSelect()
{
 system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"\t\t\t\t\tWelcome to Paragraph Test\t\t\t\t\t\t\t     Section(C)\n";
		cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";

	char choose;
	SetColor(2);
	cout<<"\t\t\t\t\t1.";
	SetColor(13);
	cout<<"Test.\n\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\t2.";
	SetColor(13);
	cout<<"Review.\n\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\t3.";
	SetColor(13);
	cout<<"Report.\n\n\n";
	
    SetColor(2);
	cout<<"\t\t\t\t\tEsc.";
	SetColor(12);
	cout<<"Exit.\n\n\n";
	SetColor(13);
	cout<<"\t\t\t\t\tChoose test or exit:";
	choose=getche();
	switch(choose)
	{
		case '1':
		ParagraphTest();
		break;
		case '2':
		ParagraphReview();
		break;
		case '3':
		ParagraphReport();
		break;
        case '\x1B':
		char exit1;
		SetColor(12);
		cout<<"\n\n\t\t\t\t\tDo you want to exit Paragraph Test(y/n)?";
		exit1=getche();
		switch(exit1)
		{
			case 'y':
			Practice();
			break;
			case 'n':
			ParagraphSelect();
			break;
		}
		
		break;
	}
	cout<<endl;
	SetColor(4);
	return ;
	
	
}

void ParagraphReview()
{
		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	SetColor(13);
	cout<<"\n\tParagraph Test Review\n\n";
	SetColor(13);
	cout<<"\tParagraph test has many paragraphs to practice.\n";
	cout<<"\tAfter typing, this program calculate your typing speed and you can see your score in your best score\n";
	
cout<<"\tThank You!";
	char exit1;
	SetColor(12);
	cout<<"\n\t\tPress any key to close review-";
	exit1=getche();
	ParagraphSelect();
	return ;	
}
void ParagraphReport()
{
			system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 char exit1;
	char report;
	ofstream tutorialReport("ParagraphReport.txt",ios::app);
	tutorialReport<<endl;
	SetColor(5);
	cout<<"\t\t\t\t\tWhat do you want to report?\n\t\t\t\t\t";
	while(report!='\r')
	{
		SetColor(6);
		report=getche();
		if(report=='\x1B')
		{
			break;
		}
		else if(report=='\x08')
		{
			cout<<" "<<"\b";
		}
		tutorialReport<<report;
	}
	
	tutorialReport.close();
	if(report=='\x1B')
	{
		ParagraphSelect();
		return ;
	}
	SetColor(12);
	cout<<"\n\t\t\t\t\tPress any key to exit report:";
	exit1=getche();
	return ;
}

 void ParagraphTest()
{
	 	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	
	char choose;
	SetColor(2);
	
	cout<<"\t\t\t\t\t"<<setw(4)<<"A.";
	SetColor(13);
	cout<<"Fashion.";
	SetColor(2);
	cout<<"\t\t\t"<<setw(4)<<"K.";
	SetColor(13);
	cout<<"Beauty.\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\t"<<setw(4)<<"B.";
	SetColor(13);
	cout<<"Computing.";
	SetColor(2);
	cout<<"\t\t\t"<<setw(4)<<"L.";
	SetColor(13);
	cout<<"History.\n\n";
	
	SetColor(2);
	cout<<"\t\t\t\t\t"<<setw(4)<<"C.";
	SetColor(13);
	cout<<"Science.";
	SetColor(2);
	cout<<"\t\t\t"<<setw(4)<<"M.";
	SetColor(13);
	cout<<"Technology.\n\n";
	
	SetColor(2);
	cout<<"\t\t\t\t\t"<<setw(4)<<"D.";
	SetColor(13);
	cout<<"Poem.";
		SetColor(2);
	cout<<"\t\t\t"<<setw(4)<<"N.";
	SetColor(13);
	cout<<"Literature.\n\n";
	
	SetColor(2);
	cout<<"\t\t\t\t\t"<<setw(4)<<"E.";
	SetColor(13);
	cout<<"Philosophy.";
	SetColor(2);
	cout<<"\t\t\t"<<setw(4)<<"O.";
	SetColor(13);
	cout<<"Yoga.\n\n";
	
	
	
	SetColor(2);
	cout<<"\t\t\t\t\t"<<setw(4)<<"F.";
	SetColor(13);
	cout<<"Song Lyrics.";
	SetColor(2);
	cout<<"\t\t"<<setw(4)<<"P.";
	SetColor(13);
	cout<<"Earth.\n\n";
	
	SetColor(2);
	cout<<"\t\t\t\t\t"<<setw(4)<<"G.";
	SetColor(13);
	cout<<"Story.";
	SetColor(2);
	cout<<"\t\t\t"<<setw(4)<<"Q.";
	SetColor(13);
	cout<<"Travelling.\n\n";
	
	SetColor(2);
	cout<<"\t\t\t\t\t"<<setw(4)<<"H.";
	SetColor(13);
	cout<<"Jokes.";
	SetColor(2);
	cout<<"\t\t\t"<<setw(4)<<"R.";
	SetColor(13);
	cout<<"Movie.\n\n";
	
	SetColor(2);
	cout<<"\t\t\t\t\t"<<setw(4)<<"I.";
	SetColor(13);
	cout<<"Medicine.";
	SetColor(2);
	cout<<"\t\t\t"<<setw(4)<<"S.";
	SetColor(13);
	cout<<"Hypertext Markup Language.\n\n";
	
	SetColor(2);
	cout<<"\t\t\t\t\t"<<setw(4)<<"J.";
	SetColor(13);
	cout<<"Business.\n\n";
	
	
	

	
	
	
	
	SetColor(2);
	cout<<"\t\t\t\t\tEsc.";
    SetColor(12);
    cout<<"Exit paragraph test..\n\n";
    SetColor(13);
    cout<<"\t\t\t\t\tChoose to practice or 'Esc' to exit!";
	choose=getche();
	switch(choose)
	{
		case 'A':
		ParagraphFashion();
		break;
		case 'a':
		ParagraphFashion();
		break;
		case 'B':
		ParagraphComputing();
		break;
		case 'b':
		ParagraphComputing();
		break;
		case 'C':
		ParagraphScience();
		break;
		case 'c':
		ParagraphScience();
		break;
		case 'D':
        ParagraphPoem();
		break;
		case 'd':
		ParagraphPoem();
		break;
		case 'E':		
		ParagraphPhilosophy();
		break;
		case 'e':
		ParagraphPhilosophy();
		break;
		case 'F':
		ParagraphSongLyrics();
		break;
		case 'f':
		ParagraphSongLyrics();
		break;
		case 'G':
		ParagraphStory();
		break;
		case 'g':
		ParagraphStory();
		break;
		case 'H':
		ParagraphJokes();
		break;
		case 'h':
		ParagraphJokes();
		break;
		case 'I':
		ParagraphMedicine();
		break;
		case 'i':
		ParagraphMedicine();
		break;
		case 'J':
		ParagraphBusiness();
		break;
		case 'j':
		ParagraphBusiness();
		break;
		case 'k':
		ParagraphBeauty();
		break;
		case 'K':
		ParagraphBeauty();
		break;
		case 'L':
		ParagraphHistory();
		break;
		case 'l':
		ParagraphHistory();
		break;
		case 'm':
		ParagraphTechnology();
		break;
		case 'M':
		ParagraphTechnology();
		break;
		case 'N':
		ParagraphLiterature();
		break;
		case 'n':
		ParagraphLiterature();
		break;
		case 'O':
		ParagraphYoga();
		break;
		case 'o':
		ParagraphYoga();
		break;
		case 'P':
		ParagraphEarth();
		break;
		case 'p':
		ParagraphEarth();
		break;
		case 'Q':
		ParagraphTraveling();
		break;
		case 'q':
		ParagraphTraveling();
		break;
		case 'R':
		ParagraphMovie();
		break;
		case 'r':
		ParagraphMovie();
		break;
		case 'S':
		ParagraphHTMLSelect();
		break;	
		case 's':
		ParagraphHTMLSelect();
		break;
		
		case '\x1B':
		char exit1;
		SetColor(12);
		cout<<"\n\t\t\t\t\tDo you want to exit Paragraph Test(y/n)?";
		exit1=getche();
		switch(exit1)
		{
			case 'y':
			Practice();
			break;
			case 'n':
			ParagraphTest();
			break;
		}
		
		break;
	}
	cout<<endl;
	SetColor(4);
	return ;
	
	
}
void ParagraphFashion()
{
	 		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tFashion\n\n";
	 char str1;	
	 char str2[14][150]={"Fashion is a popular style or practice,especially in clothing,footware,accessores,makeup,body,or furniture.",
	 "Fashion is a distinctive and often constant trend in the style in which a person dresses",
 "The more technological term COSTUME is regularly linked to the term fASHION.",
 "Although aspects of fashion can be feminie or masculine,some trends are androgynous.",
 "Fashion design is the art of application of design and aesthetics or natural beauty to clothing and accessories.",
 "Fashion design is influenced by culture and social attitude,and has varied over time and place.",
 "The notion of global fashion industry is a product of the modern age.",
 "Prior to the mid-19th century,most clothing  was custom-made.",
 "It was handmade for individuals,either as home production of order form dressmakers and tailors.",
 "By the beginning of the 20th century_with the rise of new technologies such as",
 "The development of the factory system of production,and the department stores_",
 "Although the fashion industry developed first in Europe and America,as of 2015,",
 "It is an international and highly globalized industry,with clothing and sold"};
     
     	int error=0;
		int i=0;
		time_t start=clock();
		for(int b=0;b<14;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			ParagraphTest();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((150*14)/5)/totaltime;
		SetColor(13);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(2,average);
		Update(2,average);
		char exit1;
		SetColor(4);
	cout<<"\n\t\tPress any key to exit ";
		exit1=getche();
		
		ParagraphTest();
}
void ParagraphComputing()
{			system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tComputing\n\n";
	 char str1;	
	      char str2[16][80]={"The Start button on the far-left side of the Lesson Dashboard lights up.",	
"The term 'computing' is also synonymous with counting.",	
"The field of computing includes software engineering,computer Science.",
"Moreover,using computer,we can write programs and web-page design like that.",
"we will show some of the key  terms in designing web page, ",
"which are used in HTML5,",
"<!DOCTYPE html>",
"<head>",
  "<meta charset= />",
 " <title>ex2</title>",
  "</head>",
"<body>",
	"<p>click</p>",
	"<img src= width=\"   \" ,height=\"   \",book name=\"  \">",
	"</body>",
	"</html>"};
 	int error=0;
		int i=0;
		time_t start=clock();
		for(int b=0;b<16;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			ParagraphTest();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*14)/5)/totaltime;
		SetColor(13);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(2,average);
		Update(2,average);
		char exit1;
		SetColor(4);
		cout<<"\n\t\tPress any key to exit ";
		exit1=getche();
		
		ParagraphTest();

    
}
void ParagraphScience()
{
   		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tScience\n\n";
	 char str1;	
	     char str2[11][200]={"Science(fron Latin scientia,meaning KNOWLEDGE) is a systematic enterprise.",
     "It builds and organizes knowledge in the form of testable explanations and predictions about the universe.",
     "Contemporary science is typically subdivided into the natural sciences,which study the material universe;",
     "They study people and societies;and the formal sciences,which study logic and mathematics.",
     "Disciplines which use science ,like engineering and medicine,may also be considered to be applied sciences. ",
     "From classical antiquity through the 19th century, science as a type pf knowledge was more closely linked to philosophy.",
     "And in the Western world the term NATURAL PHILOSOPHY once encompassed fields of study .",
     "They are today associated with science such as astronomy,medicine.",
     "Until recently,it was believed that the development of technology was restricted only to human-beings.",
     "But 21st century scientific study indicate that other primates and certain dolphin communities have.",
	 ",developed simple tools and passed their knowledge to other generations."};
     
 	int error=0;
		int i=0;
		time_t start=clock();
		for(int b=0;b<11;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			ParagraphTest();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((200*11)/5)/totaltime;
		SetColor(13);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(2,average);
		Update(2,average);
		char exit1;
		SetColor(4);
		cout<<"\n\t\tPress any key to exit ";
		exit1=getche();
		
		ParagraphTest();
}
void ParagraphPoem()
{
   		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tPoem\n\n";
	 char str1;	
	     char str2[13][80]={"Poem can make someone mind relaxed and bright.",
	 "So I will introduce a poem named Don't Let Fear Control Your Life:",
	 "No one was born to live a life with fear. ",
	 "Life should be enjoyed and should be scared and dear.",
	 "However,no one can be assured of a life without fear." ,
	 "This is the truth,but there is no need to shed tear.",
	 "Some experiences are much more fearful than others.",
	 "Fear isn't limited to fathers,mothers,sisters, or brothers.",
	 "Fear can even affect the bravest of men.",
	 "But those that are courageous,will fight it and never give in. ",
	 "If you are on an sinking ship and far from land;",
	 "You can't relieve you fear by holding somone's hand.",
	 "So I want to say that never GIVE UP and FIGHT BACK!"};
	 
		 int error=0;
		int i=0;
		time_t start=clock();
	for(int b=0;b<13;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			ParagraphTest();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*13)/5)/totaltime;
		SetColor(13);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(2,average);
		Update(2,average);
		char exit1;
		SetColor(4);
		cout<<"\n\t\tPress any key to exit ";
		exit1=getche();
		
		ParagraphTest();
}
void ParagraphPhilosophy()
{
    		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tPhilosophy\n\n";
	 char str1;	
	char str2[10][100]={"Philosophical methods include questioning,critical discussion,rational argument .",
	 "Classic philosophical questions  include:Is it possible to know anything ,", 	
	 "And to prove it?What is most real? However philosophers also might think that",
  	"IS there a best way to live? Is it better to be just or unjust? Do humans have free will?",
 	"Historically,PHILOSOPHY encompassed any body of knowledge .....",
 	"From the time of Ancient Greek philosopher Aristotle to the 19th century," ,
 	"NATURAL PHILOSOPHY encompassed astronomy,medicine and physics.",
 	"For example,Newton's 1687 Mathematical Principles of Natural Philosophy later become classified .",
 	"In the modern era ,there are some investigations that were traditionally part of philosophy.",
 	"They became separate academic disciplines,including psychology,sociology,linguistics and economics.",};
  int error=0;
		int i=0;
		time_t start=clock();
		for(int b=0;b<10;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			ParagraphTest();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((100*10)/5)/totaltime;
		SetColor(13);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(2,average);
		Update(2,average);
		char exit1;
		SetColor(4);
		cout<<"\n\t\tPress any key to exit ";
		exit1=getche();
		
		ParagraphTest();
 
}
void ParagraphSongLyrics()
{
    		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tSongLyrics\n\n";
	 char str1;	
	 char str2[11][90]={"We all always  listern to the music whenever we are tired of something,",
	 "and,being stressed and even we have a great time and for many reasons.",
	 "I will introduce emotional love song named NOTHING'S GONNA CHANGE MY LOVE FOR YOU...",
	 "If I had to live my life without you near me,the days would all be empty.",
	 "The night would seem so long,with you I see forever ok so clearly.",
	 "Our dreams are young and we both know,they'll take us where we want to go,",
	 "Hold me now......,Touch me now...,I don't wanna live without you....",
	 "Nothing's gonna change my love for you,you ought to know by now how much I love you",
	 "One thing you can be sure of,I'll never ask for more than your love.",
	 "Nothing's gonna change my love for you,you ought to know by now how much I love you",
	 "The world might change my whole life through but,Nothing's gonna change my love for you.."};
      int error=0;
		int i=0;
		time_t start=clock();
		for(int b=0;b<11;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			ParagraphTest();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((90*11)/5)/totaltime;
		SetColor(13);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(2,average);
		Update(2,average);
		char exit1;
		SetColor(4);
		cout<<"\n\t\tPress any key to exit ";
		exit1=getche();
		
		ParagraphTest();
 

}
void ParagraphStory()
{
     		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tStory\n\n";
	 char str1;	
 char str2[11][100]={"Once upon a time,a man and his wife  have a goose that can laid Gold Eggs;",
	 "They are not content which they get and they become greedy more and more.",
	 "So they thought if it can laid gold eggs,it's body will full with gold.",
	 "That's why, they killed the goose and they lost what they get.",
	 "From this story,we can get a MORAL: THINK BEFORE YOUU ACT !",
     "A popular proverb in English that is rooted in this story is....",
	 "Kill not the goose that lays golden eggs ........#####",
	 "When we use this proverb,we mean that anyone who feels entitled to tries ",
	 "to get more than he is already recieving ,is most likely to get nothing at all in the future.",
	 "Sometimes we are not content with what we have,and wish for more.",
	 "Such discontentment always results in unhappiness,and regret.."};
	  int error=0;
		int i=0;
		time_t start=clock();
		for(int b=0;b<11;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			ParagraphTest();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((100*11)/5)/totaltime;
		SetColor(13);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(2,average);
		Update(2,average);
		char exit1;
		SetColor(4);
		cout<<"\n\t\tPress any key to exit ";
		exit1=getche();
		
		ParagraphTest();
 
 
}
void ParagraphJokes()
{
  	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tJokes\n\n";
	 char str1;	
	   char str2[10][100]={"Someone says that laughing is a kind of medicine.",
	 "And I wanted bold and fun,and I think I achieved it.",
	 "It was mainly an excuse to keep my silly picture book covers up for the entire month of April ",
	 "I always thought it'd be something with interesting facts,",
	 "but I think jokes perfectly fit the format.",
	 "I especially hope to hear lots of children's laughter.",
	 "Some jokes are ..../ # ^ <> >< ^^ # /....",
	 "Why did the vampire check out a drawing book?",
	 "What do you do if your pet starts eating your libary book?",
	 "Take the words right out of its mouth!"}; 	

	int error=0;
		int i=0;
		time_t start=clock();
	for(int b=0;b<10;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			ParagraphTest();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((100*10)/5)/totaltime;
		SetColor(13);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(2,average);
		Update(2,average);
		char exit1;
		SetColor(4);
	cout<<"\n\t\tPress any key to exit ";
		exit1=getche();
		
		ParagraphTest();
 
  
}
void ParagraphMedicine()
{
  		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tMedicine\n\n";
	 char str1;	
	  char str2[11][90]={"Medicine has two basic meanings,it refers to 1,",
	 "The Science of healing;the practice of the diagnosis,treatment , ",
	 "and prevention of disease,the promotion of health. And 2 is..",
	 "Medications,drugs,substances used to treat and cure diseases,",
	 "and, to promote health.Moreover,modern medicine includes...",
	 "Science and practice including 1.Clinical practice, 2.Healthcare science.",
	 "Clinical pratice-the physician  assesses the patient personally;",
	 "the aim being to diagnose,treat,and prevent disease using *****",
	 "his/her training and judgment and next is Healthcare science.",
	 "Healthcare science-a multidisciplinary field which deals with ",
	 "the applicatiion of science,technology,engineering(maths)for the delivery of care"};	
	
  int error=0;
		int i=0;
		time_t start=clock();
	for(int b=0;b<11;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			ParagraphTest();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((90*11)/5)/totaltime;
		SetColor(13);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(2,average);
		Update(2,average);
		char exit1;
		SetColor(4);
	cout<<"\n\t\tPress any key to exit ";
		exit1=getche();
		
		ParagraphTest();
}
void ParagraphBusiness()
{
  		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tBusiness\n\n";
		char str1;	
     char str2[11][80]={"A business is an organizational entity involved in the provision",
"of goods and services to consumers. Business serve as conductors",
"of economic activity, and are prevalent in capitalist economies,",
"where most of them are privately owned and provide goods and",
"services allocated through a market to consrmers and customers",
"in exchange for other goods, services, money, or other forms of",
"exchange that hold intrinsic economic value. Business may also", 
"be social non-profit enerprises of state-owned public enterprises",
"operated by governments with specific social and economic objectives.",
"A business owned by multiple private individuals may form as an",
"incorporated company or jointly organise as a partnership."};	
	
  int error=0;
		int i=0;
		time_t start=clock();
	for(int b=0;b<11;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			ParagraphTest();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((90*11)/5)/totaltime;
		SetColor(13);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(2,average);
		Update(2,average);
		char exit1;
		SetColor(4);
	cout<<"\n\t\tPress any key to exit ";
		exit1=getche();
		
		ParagraphTest();
}
void ParagraphBeauty()
{
  		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tBeauty\n\n";
	char str1;	
     char str2[11][80]={"Beauty is a characteristic of an animal, idea, object, person or",
	 "place that provides a perceptual experience of pleasure or satisfacion.",
	 "Beauty is studied as part of aesthetics, culture, social psychology,",
	 "philosophy and sociology. An 'ideal beauty' is an entity which is",
	 "admired, or prossesses feature widely attributed to beauty in a",
	 "particular culture, for perfection.Ugliness is considered to be the",
	 "opposite of beauty. The experience of 'beauty' often involves an",
	 "interpretation of some entit as being in balance and harmony with",
	 "nature, which may lead to feelings of attraction and emotional",
     "well-being. Because this can be a subjective experience, it is",
	 "often said that 'beauty is in the eye of the beholder.'"};
	
  int error=0;
		int i=0;
		time_t start=clock();
	for(int b=0;b<11;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			ParagraphTest();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((90*11)/5)/totaltime;
		SetColor(13);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(2,average);
		Update(2,average);
		char exit1;
		SetColor(4);
		cout<<"\n\t\tPress any key to exit ";
		exit1=getche();
		
		ParagraphTest();
}
void ParagraphHistory()
{
  		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tHistory\n\n";
			char str1;	
     char str2[12][80]={"History is the study of the past as it is described in written",
	 "documents. Events occurring before written record are considered",
	 "prehistory. It is an umbrella term that relates to past events as",
 	 "well as the memory, discovery, collection, organization, presentation,",
     "and interpretation of information about these events. Scholars who",
	 "write about history are called historians. History can also refer",
	 "to the academic discipline which rses a narrative to examine and",
	 "analyse a sequence of past events, and objectively dertermine the",
	 "patterns of cause and effect that determine them. Historians",
	 "sometimes debate the nature of history and its usefulness by",
	 "discussing the study of the discipline as an end in itself and as",
	 "a way of providing 'perspective' on the problems of the present."};
	
  int error=0;
		int i=0;
		time_t start=clock();
	for(int b=0;b<12;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			ParagraphTest();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((90*11)/5)/totaltime;
		SetColor(13);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(2,average);
		Update(2,average);
		char exit1;
		SetColor(4);
		cout<<"\n\t\tPress any key to exit Paragraph9-";
		exit1=getche();
		
		ParagraphTest();
}
void ParagraphTechnology()
{
  		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tTechnology\n\n";
	char str1;	
     char str2[13][80]={"Technology is the collection of techniques, skills, methods and processes",
     "used in the production of goods or services or in the accomplishment of",
	 "objectives, such as scientific investigation. Technology can be the",
	 "knowledge of techniques, processess, and the like, or it can be embedded",
	 "in machines which can be operated without detailed knowledge of their",
	 "workings. The human species'use of technology began with the conversion",
	 "of natural resources into simple tools. The prehistoric discovery of",
	 "how to control fire and the later Neolithic Revoultion increased the",
	 "available sources of food and the invention of the wheel helped humans to",
	 "travel in andcontrol their environment. Developments in historic times,",
	 "including the printing press, the telephone, and the internet, have",
	 "lessened physical barriers to communication and allowed humans to interact",
	 "freely on a global scale."};
     
	
  int error=0;
		int i=0;
		time_t start=clock();
	for(int b=0;b<13;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			ParagraphTest();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((90*11)/5)/totaltime;
		SetColor(13);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(2,average);
		Update(2,average);
		char exit1;
		SetColor(4);
	cout<<"\n\t\tPress any key to exit ";
		exit1=getche();
		
		ParagraphTest();
}
void ParagraphLiterature()
{
  		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tLiterature\n\n";
	char str1;	
     char str2[12][80]={"Literature,in its broadest sense, is any single body of written works.",
	 "More restrictively, literature is writing that is considered to be an",
	 "art form, or any single writing deemed to have artistic or intellectual",
	 "value, often due to deploying language in ways that differ from ordinary",
	 "usage. Its Latin root literatura/litteratura was used to refer to all",
	 "written accounts, through contemporary definitions extend the term to",
	 "include texts that are spoken or sung. The concept has changed meaning",
	 "over time: nowadays it can broaden to have non-written verbal art forms,",
	 "and thus it is difficult to agree on its origin, which can be paired",
	 "with that of language or writing itself. Developments in print technology",
	 "have allowed an evergrowing distribution and proliferation of written",
	 "works, culminating in electron literature."};
	
  int error=0;
		int i=0;
		time_t start=clock();
	for(int b=0;b<12;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			ParagraphTest();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((90*11)/5)/totaltime;
		SetColor(13);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(2,average);
		Update(2,average);
		char exit1;
		SetColor(4);
		cout<<"\n\t\tPress any key to exit Paragraph9-";
		exit1=getche();
		
		ParagraphTest();
}
void ParagraphYoga()
{
  		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tYoga\n\n";
			
     char str1;	
     char str2[11][80]={"Yoga is a tool for gaining body-mind awareness to enhance whatever",
	 "spiritual/religious beliefs you have. A yoga session will leave",
	 "you felling energized and relaxed. You will work your muscles and",
	 "will properly align your bones; you will breath deeply, oxygenating",
	 "the lungs and blood; you will experience true deep relaxation. By",
	 "bringing awareness to the body, and working the muscles, you are",
	 "able to more deeply relax them then from any other form of exercises.",
	 "You will gain a deeper appreciation of your body and mind through",
	 "yoga in a way that no other exercise program will. The foundation",
	 "of traditional yoga is careful alignment of your body as you hold",
	 "the poses."};
  int error=0;
		int i=0;
		time_t start=clock();
	for(int b=0;b<11;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			ParagraphTest();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((90*11)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(1,average);
		Update(2,average);
		char exit1;
		SetColor(4);
		cout<<"\n\t\tPress any key to exit ";
		exit1=getche();
		
		ParagraphTest();
}
void ParagraphEarth()
{
  		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tEarth\n\n";
	char str1;	
     char str2[10][80]={"Earth, otherwise known as the World or the Globe, is the third",
	 "planet from the Sun and the only object in the Universe known",
	 "to harbor life. It is the densest planet in the Solar System",
	 "and the largest of the four terrestrial planets.According to",
	 "radiometric dating and other sources of evidence, Earth",
	 "formed about 4.54 billion years ago. Earth's gravity interacts",
	 "with other objects in space, especially the Sun and the Moon,",
	 "Earth's only natural satellite. During one orbit around the",
	 "Sun, Earth rotates about its axis about 365.26 times; thus",
	 "an Earth year is about 365.26 days long."};
	
  int error=0;
		int i=0;
		time_t start=clock();
	for(int b=0;b<10;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			ParagraphTest();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((90*11)/5)/totaltime;
		SetColor(13);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(2,average);
		Update(2,average);
		char exit1;
		SetColor(4);
	cout<<"\n\t\tPress any key to exit ";
		exit1=getche();
		
		ParagraphTest();
}
void ParagraphTraveling()
{
  	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tTravelling\n\n";
	 char str1;	
     char str2[11][80]={"One of the traveling benefits is finding and keeping humility.",
	 "Too often, people get wrapped up in their lives, their daily",
	 "routine of working, sleeping,eating and living. They become",
	 "self-absorbed to the point it affects their health, their",
	 "happiness, and their perspective. There is nothing quite like",
	 "traveling, like seeing a new place for the first time or returning",
	 "to a favorite place. People of all ages, from all countries,",
	 "travel to foreign places for many leisure. Whether by plane,",
	 "train, ship or automobile, travel is generally a pleasurable",
	 "experience, at least for the people who can financially afford",
	 "comfortable and safe methods of travel."};
     
	
  int error=0;
		int i=0;
		time_t start=clock();
	for(int b=0;b<11;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			ParagraphTest();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((90*11)/5)/totaltime;
		SetColor(13);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(2,average);
		Update(2,average);
		char exit1;
		SetColor(4);
		cout<<"\n\t\tPress any key to exit ";
		exit1=getche();
		
		ParagraphTest();
}
void ParagraphMovie()
{
  		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\tMovie\n\n";
		char str1;	
     char str2[10][80]={"Spider-Man:Homecoming is a 2017 American superhreo film based on",
	 "the Marvel Comics character Spider-Man, co-produced by Columbia",
	 "Pictures and Marvel Studios, and distributed by Sony Pictures",
	 "Releasing. It is the second Spider-Man film reboot and the sixteenth",
	 "film of the Marvel Cinematic Universe. The film is directed by",
	 "Jon Watts, with a screenplay by the writing teams of Jonathan",
	 "Goldstein and John Francis Daley, Watts and Christopher Ford,",
	 "and Chris McKenna and Erik Sommers. Tom Holland stars as Spider-Man,",
	 "alongside Michael Keaton, Jon Favreau, Zendaya, Donald Glover,",
	 "Tyne Daly, Marisa Tomei and Robert Downey Jr."};
  int error=0;
		int i=0;
		time_t start=clock();
	for(int b=0;b<11;b++)
		{
			SetColor(0);
			cout<<"\t\t";
			cout<<str2[b];
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r')
			{
				SetColor(10);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
				else if(str1=='\r')
						{
							cout<<"\b";
						}
				else if(str1=='\x08')
				{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
				}
				else
					{
	 		 			SetColor(12);
						cout<<"\b"<<str1;
						error++;
						i++;
					}
			
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
		}
			if(str1=='\x1B')
		{
			ParagraphTest();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((90*11)/5)/totaltime;
		SetColor(13);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(2,average);
		Update(2,average);
		char exit1;
		SetColor(4);
		cout<<"\n\t\tPress any key to exit ";
		exit1=getche();
		
		ParagraphTest();
}
void ParagraphHTMLSelect()
{
    
    	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	 SetColor(13);
    cout<<"\t\t\t\t\tHypertext Markup Language\n\n";
    char choose;
    SetColor(2);
    cout<<"\t\t\t\t\tA.";
    SetColor(13);
    cout<<"Document 1.\n\n";
    SetColor(2);
    cout<<"\t\t\t\t\tB.";
    SetColor(13);
    cout<<"Document 2.\n\n";
    SetColor(2);
    cout<<"\t\t\t\t\tC.";
    SetColor(13);
    cout<<"Document 3.\n\n";
    
    SetColor(2);
    cout<<"\t\t\t\t\tEsc.";
    SetColor(12);
    cout<<"Exit.\n\n";
    SetColor(13);
    cout<<"\t\t\t\t\tChoose test or exit:";
    choose=getche();
    switch(choose)
    {
        case 'A':
            ParagraphHTML1();
            break;
            case 'a':
            ParagraphHTML1();
            break;
        case 'B':
            ParagraphHTML2();
            break;
            case 'b':
            ParagraphHTML2();
            break;
        case 'C':
            ParagraphHTML3();
            break;
             case 'c':
            ParagraphHTML3();
            break;
        case '\x1B':
            char exit1;
            SetColor(12);
            cout<<"\n\t\t\t\t\tDo you want to exit HTML Paragraph Test(y/n)?";
            exit1=getche();
            switch(exit1)
        {
            case 'y':
                ParagraphTest();
                break;
            case 'n':
                ParagraphHTMLSelect();
                break;
        }
            
            break;
    }
    cout<<endl;
    SetColor(4);
    return ;
    
}
void ParagraphHTML1()
{
    system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	 SetColor(13);
    cout<<"\t\t\t\t\tHTML Document 1\n\n";
    
    char str1;
    char str2[60][60]={
        "<!DOCTYPE html>",
        "<html>",
        "<head>",
        "<title>",
        "E-Library",
        
        "</title>",
        "</head>",
        "<body>",
        "<header>",
        "<b>Welcome from our E-Library</b>",
        "</header>",
        "<nav>",
        "<ul>",
        "<li>",
        "<a> Home</a>",
        
        "</li>",
        "<li>",
        "<a>About us</a>",
        "</li>",
        "<li>",
        "<a>Login</a>",
        "</li>",
        "</ul>",
        "</nav>",
        "</div>",
        
        "<b><i>Author: Susan Southard</i></b>",
        "</div>",
        "</a>",
        "<br />",
        "<a><div>This is a test<b><i>",
        "An Introduction To Mobile Technologies and Services</i></b>",
        "<br>",
        "<br/>",
        "<br/>",
        "<br>",
        
        "<b><i>Auother-Michael Sharon, Co-founder</i></b>",
        "</div>",
        "</a>",
        "</div>",
        "</div>",
        "<div>",
        "Copyright &copy; by team.<br/> All Rights Reserved.",
        "</div>",
        "</body>",
        "</html>"
    };
    int error=0;
    int i=0;
    time_t start=clock();
    for(int b=0;b<45;b++)
    {
        SetColor(0);
        cout<<"\t\t";
        cout<<str2[b];
        cout<<endl;
        cout<<"\t\t";
        str1='a';
        while(str1!='\r')
        {
            SetColor(10);
            str1=getche();
            if(str1==str2[b][i])
                i++;
            else if(str1=='\x1B')
            {
                break;
            }
            else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
            {
                str1=='\0';
                cout<<' '<<'\b';
                i--;
            }
            else
            {
                SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
            
        }
        
        i=0;
        cout<<endl;
        if(str1=='\x1B')
        {
            cout<<"\bEXIT\n";
            break;
        }
    }
    if(str1=='\x1B')
    {
        ParagraphHTMLSelect();
        return ;
    }
    time_t end=clock();
    time_t totaltime=end-start;
    totaltime=(totaltime/1000)/60;
    int average=((90*11)/5)/totaltime;
    SetColor(13);
    cout<<"\n\t\tGood job!";
    cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
    cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
    Congratulation(2,average);
    Update(2,average);
    char exit1;
    SetColor(4);
    cout<<"\n\t\tPress any key to exit ";
    exit1=getche();
    
    ParagraphTest();

}

void ParagraphHTML2()
{
    system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	  SetColor(13);
    cout<<"\t\t\t\t\tHTML Document 2\n\n";
    
    char str1;
    char str2[60][70]={
        "<!DOCTYPE html>",
        "<html>",
        "<head>",
        "<style>",
        "table",
        "{font-family: arial, sans-serif;",
            "border-collapse: collapse;",
        "width: 100%;}",
        "td, th",
        "{border: 1px solid #dddddd;",
        
            "text-align: left;",
        "padding: 8px;}",
        "tr:nth-child(even)",
        "{background-color: #dddddd;}",
        "</style>",
        "</head>",
        "<body>",
        "<table>",
        "<tr>",
        "<th>Company</th>",
        
        "<th>Contact</th>",
        "<th>Country</th>",
        "</tr>",
        "<tr>",
        "<td>Alfreds Futterkiste</td>",
        "<td>Maria Anders</td>",
        "<td>Germany</td>",
        "</tr>",
        "<tr>",
        "<td>Centro comercial Moctezuma</td>",
        
        "<td>Francisco Chang</td>",
        "<td>Mexico</td>",
        "</tr>",
        "<tr>",
        "<td>Ernst Handel</td>",
        "<td>Roland Mendel</td>",
        "<td>Austria</td>",
        "</tr>",
        "<tr>",
        "<td>Island Trading</td>",
        
        "<td>Helen Bennett</td>",
        "<td>UK</td>",
        "</tr>",
        "<tr>",
        "<td>Laughing Bacchus Winecellars</td>",
        "<td>Yoshi Tannamuri</td>",
        "<td>Canada</td>",
        "</tr>",
        "<tr>",
        "<td>Magazzini Alimentari Riuniti</td>",
        
        "<td>Giovanni Rovelli</td>",
        "<td>Italy</td>",
        "</tr>",
        "</table>",
        "</body>",
        "</html>",
    };
    int error=0;
    int i=0;
    time_t start=clock();
    for(int b=0;b<56;b++)
    {
        SetColor(0);
        cout<<"\t\t";
        cout<<str2[b];
        cout<<endl;
        cout<<"\t\t";
        str1='a';
        while(str1!='\r')
        {
            SetColor(10);
            str1=getche();
            if(str1==str2[b][i])
                i++;
            else if(str1=='\x1B')
            {
                break;
            }
            else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
            {
                str1=='\0';
                cout<<' '<<'\b';
                i--;
            }
            else
            {
                SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
            
        }
        
        i=0;
        cout<<endl;
        if(str1=='\x1B')
        {
            cout<<"\bEXIT\n";
            break;
        }
    }
    if(str1=='\x1B')
    {
        ParagraphHTMLSelect();
        return ;
    }
    time_t end=clock();
    time_t totaltime=end-start;
    totaltime=(totaltime/1000)/60;
    int average=((90*11)/5)/totaltime;
    SetColor(13);
    cout<<"\n\t\tGood job!";
    cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
    cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
    Congratulation(2,average);
    Update(2,average);
    char exit1;
    SetColor(4);
    cout<<"\n\t\tPress any key to exit Paragraph9-";
    exit1=getche();
    
    ParagraphTest();

}
void ParagraphHTML3()
{
    system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Paragraph Test\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n";
	  SetColor(13);
    cout<<"\t\t\t\t\tHTML Document 3\n\n";
    
    char str1;
    char str2[60][70]={
        "<!DOCTYPE html>",
        "<html>",
        "<head>",
        "<style>",
        "ul {",
            "list-style-type: none;",
        "margin: 0;",
        "padding: 0;",
        "overflow: hidden;",
            "background-color: #333333;",
            
        "}",
        "li {",
         "   float: left;",
        "}",
        "li a{",
        "display: block;",
        "color: white;",
            "text-align: center;",
        "padding: 16px;",
            "text-decoration: none;",
            
        "}",
        "li a:hover",
        "{",
            "background-color: #111111;",
        "}",
        "</style>",
        "</head>",
        "<body>",
        "<ul>",
        "<li><a href=\"#home\">Home</a></li>",
        
        "<li><a href=\"#news\">News</a></li>",
        "<li><a href=\"#contact\">Contact</a></li>",
        "<li><a href=\"#about\">About</a></li>",
        "</ul>",
        "</body>",
        "</html>",
        
    };
        
        int error=0;
        int i=0;
        time_t start=clock();
        for(int b=0;b<36;b++)
        {
            SetColor(0);
            cout<<"\t\t";
            cout<<str2[b];
            cout<<endl;
            cout<<"\t\t";
            str1='a';
            while(str1!='\r')
            {
                SetColor(10);
                str1=getche();
                if(str1==str2[b][i])
                    i++;
                else if(str1=='\x1B')
                {
                    break;
                }
                else if(str1=='\r')
                {
                    cout<<"\b";
                }
                else if(str1=='\x08')
                {
                    str1=='\0';
                    cout<<' '<<'\b';
                    i--;
                }
                else
                {
                    SetColor(12);
                    cout<<"\b"<<str1;
                    error++;
                    i++;
                }
                
            }
            
            i=0;
            cout<<endl;
            if(str1=='\x1B')
            {
                cout<<"\bEXIT\n";
                break;
            }
        }
        if(str1=='\x1B')
        {
            ParagraphHTMLSelect();
            return ;
        }
        time_t end=clock();
        time_t totaltime=end-start;
        totaltime=(totaltime/1000)/60;
        int average=((90*11)/5)/totaltime;
        SetColor(13);
        cout<<"\n\t\tGood job!";
        cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
        cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
        Congratulation(2,average);
        Update(2,average);
        char exit1;
        SetColor(4);
        cout<<"\n\t\tPress any key to exit Paragraph9-";
        exit1=getche();
        
        ParagraphTest();
}

void Random()
{
	RandomSelect();
	return ;
	
}
void RandomSelect()
{
	 system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"\t\t\t\t\tWelcome to Random Test\t\t\t\t\t\t\t\t     Section(C)\n";
		cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";

	char choose;
	SetColor(2);
	cout<<"\t\t\t\t\t1.";
	SetColor(13);
	cout<<"Test.\n\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\t2.";
	SetColor(13);
	cout<<"Review.\n\n\n";
	SetColor(2);
	cout<<"\t\t\t\t\t3.";
	SetColor(13);
	cout<<"Report.\n\n\n";
	
    SetColor(2);
	cout<<"\t\t\t\t\tEsc.";
	SetColor(12);
	cout<<"Exit.\n\n\n";
	SetColor(13);
	cout<<"\t\t\t\t\tChoose test or exit:";
	choose=getche();
	switch(choose)
	{
		case '1':
		RandomLessons();
		break;
		case '2':
		RandomReview();
		break;
		case '3':
		RandomReport();
		break;
        case '\x1B':
		char exit1;
		SetColor(12);
		cout<<"\n\n\t\t\t\t\tDo you want to exit Random Test(y/n)?";
		exit1=getche();
		switch(exit1)
		{
			case 'y':
			Practice();
			break;
			case 'n':
			RandomSelect();
			break;
		}
		
		break;
	}
	cout<<endl;
	SetColor(4);
	return ;
	
	
}
void RandomReview()
{
			system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	SetColor(13);
	cout<<"\tRandom Test Review\n\n";
	SetColor(13);
	cout<<"\tRandom test have 27 lessons.\n\tIn lesson 1, all words are started with character 'a' and other lessons start with character 'b','c',...,'z' respectively.";
	cout<<"\n\tThe last lesson starts with mixed characters.\n";
	cout<<"\tThese lessons calculate words per minute.\n";
	cout<<"\tThank You!\n";
	char exit1;
	SetColor(12);
	cout<<"Press any key to close review-";
	exit1=getche();
	RandomSelect();
	return ;	
}
void RandomReport()
{
		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 char exit1;
	char report;
	ofstream tutorialReport("RandomReport.txt",ios::app);
	tutorialReport<<endl;
	SetColor(5);
	cout<<"\t\t\t\t\tWhat do you want to report?\n\t\t\t\t\t";
	while(report!='\r')
	{
		SetColor(6);
		report=getche();
		if(report=='\x1B')
		{
			break;
		}
		else if(report=='\x08')
		{
			cout<<" "<<"\b";
		}
		tutorialReport<<report;
	}
	
	tutorialReport.close();
	if(report=='\x1B')
	{
		RandomSelect();
		return ;
	}
	SetColor(12);
	cout<<"\n\t\t\t\t\tPress any key to exit report:";
	exit1=getche();
	return ;
}

void RandomLessons()
{
		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	int choose;
	SetColor(2);
	cout<<"\t\t\t\t\t A.";
	SetColor(13);
	cout<<"RandomLesson  A.";
	SetColor(2);
	cout<<"\t\t\t\t\t O.";
	SetColor(13);
	cout<<"RandomLesson  O.\n\n";


	
	
	SetColor(2);
	cout<<"\t\t\t\t\t B.";
	SetColor(13);
	cout<<"RancomLesson  B.";
		SetColor(2);
	cout<<"\t\t\t\t\t P.";
	SetColor(13);
	cout<<"RandomLesson  P.\n\n";
	
	
	SetColor(2);
	cout<<"\t\t\t\t\t C.";
	SetColor(13);
	cout<<"RandomLesson  C.";
		SetColor(2);
	cout<<"\t\t\t\t\t Q.";
	SetColor(13);
	cout<<"RandomLesson  Q\n\n";
	
	
	
	SetColor(2);
	cout<<"\t\t\t\t\t D.";
	SetColor(13);
	cout<<"RandomLesson  D.";
	SetColor(2);
	cout<<"\t\t\t\t\t R.";
	SetColor(13);
	cout<<"RandomLesson  R.\n\n";
	
	
	SetColor(2);
	cout<<"\t\t\t\t\t E.";
	SetColor(13);
	cout<<"RandomLesson  E.";
	SetColor(2);
	cout<<"\t\t\t\t\t S.";
	SetColor(13);
	cout<<"RandomLesson  S.\n\n";
	
	
	
	SetColor(2);
	cout<<"\t\t\t\t\t F.";
	SetColor(13);
	cout<<"RandomLesson  F.";
	SetColor(2);
	cout<<"\t\t\t\t\t T.";
	SetColor(13);
	cout<<"RandomLesson  T.\n\n";
	
	
	
	SetColor(2);
	cout<<"\t\t\t\t\t G.";
	SetColor(13);
	cout<<"RandomLesson  G.";
	SetColor(2);
	cout<<"\t\t\t\t\t U.";
	SetColor(13);
	cout<<"RandomLesson  U.\n\n";
	
	SetColor(2);
	cout<<"\t\t\t\t\t H.";
	SetColor(13);
	cout<<"RandomLesson  H.";
	SetColor(2);
	cout<<"\t\t\t\t\t V.";
	SetColor(13);
	cout<<"RandomLesson  V.\n\n";
	
	
	SetColor(2);
	cout<<"\t\t\t\t\t I.";
	SetColor(13);
	cout<<"RandomLesson  I.";
		SetColor(2);
	cout<<"\t\t\t\t\t W.";
	SetColor(13);
	cout<<"RandomLesson  W.\n\n";
	
	
	SetColor(2);
	cout<<"\t\t\t\t\t J.";
	SetColor(13);
	cout<<"RandomLesson  J.";
		SetColor(2);
	cout<<"\t\t\t\t\t X.";
	SetColor(13);
	cout<<"RandomLesson  X.\n\n";
	
	
	SetColor(2);
	cout<<"\t\t\t\t\t K.";
	SetColor(13);
	cout<<"RandomLesson  K.";
	SetColor(2);
	cout<<"\t\t\t\t\t Y.";
	SetColor(13);
	cout<<"RandomLesson  Y.\n\n";
	
	SetColor(2);
	cout<<"\t\t\t\t\t L.";
	SetColor(13);
	cout<<"RandomLesson  L.";
	SetColor(2);
	cout<<"\t\t\t\t\t Z.";
	SetColor(13);
	cout<<"RandomLesson  Z.\n\n";
	
	SetColor(2);
	cout<<"\t\t\t\t\t M.";
	SetColor(13);
	cout<<"RandomLesson  M";
	SetColor(2);
	cout<<"\t\t\t\t\t 1.";
	SetColor(13);
	cout<<"RandomLesson Mix.\n\n";
	
	SetColor(2);
	cout<<"\t\t\t\t\t N.";
	SetColor(13);
	cout<<"RandomLesson  N\n\n";
	

	SetColor(2);
	cout<<"\t\t\t\t\t Esc.";
	SetColor(12);
	cout<<"Back\n\n";
	SetColor(13);
	cout<<"\t\t\t\t\tChoose a lesson you want to Practice";
	choose=getche();
	
	switch(choose)
	{
		case 'a':
		RandomLessonA();
		break;
		case 'A':
		RandomLessonA();
		break;
		case 'b':
		RandomLessonB();
		break;
		case 'B':
		RandomLessonA();
		break;
		case 'c':
		RandomLessonC();
		break;
		case 'C':
		RandomLessonA();
		break;
		case 'd':
		RandomLessonD();
		break;
		case 'D':
		RandomLessonA();
		break;
		case 'e':
		RandomLessonE();
		break;
		case 'E':
		RandomLessonA();
		break;
		case 'f':
		RandomLessonF();
		break;
		case 'F':
		RandomLessonA();
		break;
		case 'g':
		RandomLessonG();
		break;
		case 'G':
		RandomLessonA();
		break;
		case 'h':
		RandomLessonH();
		break;
		case 'H':
		RandomLessonA();
		break;
		case 'i':
		RandomLessonI();
		break;
		case 'I':
		RandomLessonA();
		break;
		case 'j':
		RandomLessonJ();
		break;
		case 'J':
		RandomLessonA();
		break;
			case 'k':
		RandomLessonK();
		break;
		case 'K':
		RandomLessonA();
		break;
			case 'l':
		RandomLessonL();
		break;
		case 'L':
		RandomLessonA();
		break;
			case 'm':
		RandomLessonM();
		break;
		case 'M':
		RandomLessonA();
		break;
			case 'n':
		RandomLessonN();
		break;
		case 'N':
		RandomLessonA();
		break;
			case 'o':
		RandomLessonO();
		break;
		case 'O':
		RandomLessonA();
		break;
			case 'p':
		RandomLessonP();
		break;
		case 'P':
		RandomLessonA();
		break;
			case 'q':
		RandomLessonQ();
		break;
		case 'Q':
		RandomLessonA();
		break;
			case 'r':
		RandomLessonR();
		break;
		case 'R':
		RandomLessonA();
		break;
			case 's':
		RandomLessonS();
		break;
		case 'S':
		RandomLessonA();
		break;
			case 't':
		RandomLessonT();
		break;
		case 'T':
		RandomLessonA();
		break;
			case 'u':
		RandomLessonU();
		break;
		case 'U':
		RandomLessonA();
		break;
			case 'v':
		RandomLessonV();
		break;
		case 'V':
		RandomLessonA();
		break;
			case 'w':
		RandomLessonW();
		break;
		case 'W':
		RandomLessonA();
		break;
			case 'x':
		RandomLessonX();
		break;
		case 'X':
		RandomLessonA();
		break;
			case 'y':
		RandomLessonY();
		break;
		case 'Y':
		RandomLessonA();
		break;
			case 'z':
		RandomLessonZ();
		break;
		case 'Z':
		RandomLessonA();
		break;
		case '1':
		RandomLessonMix();
		break;
		case '\x1B':
		char exit1;
		SetColor(12);
		cout<<"\n\t\t\t\t\tDo you want to exit Random Lessons(y/n)?";
		exit1=getche();
		switch(exit1)
		{
			case 'y':
			RandomSelect();
			break;
			case 'n':
			RandomLessons();
			break;
		}
		
		break;
		
	}
}

void RandomLessonA()
{
	 
	 	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n";
	 char str1;	
     char str2[50][80]={"aback", "abaft", "aalone", "abase", "abate", 
	                    "aattoir","abbe", "abduct", "abeam", "abet", 
	                    "abhor", "abide", "abject", "abort", "above", 
                        "accord", "accost",  "acid", "air", "actual",
	                    "adder", "add", "adapt", "addition", "address", 
						"adjoin", "adjust", "admin", "admiral", "admire", 
						 "adobe", "adore", "adorn", "advance", "adverb", 
						"advert", "advice", "advise", "aerial", "access",
	                    "aero", "aeroplane", "afar", "affair", "affect", 
						"affix", "afford", "affray", "afoot", "afraid", 
						
	                    };
     
     	int error=0;
		int i=0;
		int countt=50;
		time_t start=clock();
		for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
			if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is-"<<average;
		cout<<"\n\t\tYour typing error is                          -"<<error;
		Congratulation(3,average);
		Update(3,average);char exit1;
		SetColor(12);
		
		cout<<"\n\t\tPress any key to exit RandomLessonA-";
		exit1=getche();
		RandomLessons();
		Update(1,average);
		
}
void RandomLessonB()
{

	 	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson B\n\n";
	 char str1;	
     char str2[50][80]={"babe","baby","babusit","baccy","back",
                        "backfire","background","backlist","backlog","bad",
                        "bade","blood","badly","bag","bah",
                        "ball","brain","bait","bake","balance",
                        "bald","bale","balk","ballboy","ballon",
                        "balm","balsa","balti","bamboo","banal",
                        "banana","band","bandit","bane","banish",
                        "banjo","bank","banner","banns","banshee",
                        "banter","bap","bar","bus","buffer",
                        "bed","book","burn","bell","below",};
     
     	int error=0;
		int i=0;
		time_t start=clock();
		int countt=50;
	for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
			if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonB-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonC()
{
	
	 system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson C\n\n";
	 char str1;	
     char str2[50][80]={"cab","car","cup","cut","cabal",
	                    "cabbage","caber","cabin","cable","cacao",
						"cackle","cactus","cad","caddy","cadet",
						"cadre","caecum","cafe","cage","cain",
						"cairn","cake","cook","care","cat",
						"call","class","clock","cross","chat",
						"calcium","calm","chair","callus","cam",
						"camper","campus","canalize","canary","cane",
						"cannon","can","capacity","capital","capo",
						"capon","card","carer","carrier","carnal",};
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
		for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
			if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonC-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonD()
{
	
	 system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson D\n\n";
	 char str1;	
     char str2[50][80]={"dab","dace","dark","dog","doll",
	                    "daily","dirty","dais","dam","dally",
						"dame","damn","damper","dance","dander",
						"dandy","dane","danger","dangerous","danish",
						"dank","daphne","dapper","dare","daring",
						"dash","data","date","davy","dative",
						"daub","davit","daw","draw","day",
						"done","dead","deadly","dealt","dear",
						"deathly","deb","debate","debit","debut",
						"dragon","decency","decide","deck","decline",};
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
		for(int b=0;b<50;b++)
		{
			system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
			if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonD-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonE()
{
	
	 	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson E\n\n";
	 char str1;	
     char str2[50][80]={"eat","enough","ear","eye","each",
	                    "eagle","eager","early","earn","earphone",
						"earring","earth","earthen","earthquake","earwig",
						"ease","easily","east","easter","easy",
						"eaves","eb","ebony","echo","echt",
						"ecocide","ecology","edam","edge","edgy",
						"edible","edict","edit","education","educe",
						"effect","effigy","effort","effuse","egg",
						"egret","eider","eight","either","eject",
						"eke","eland","elastic","elate","elder",};
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
		for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
			if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonE-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonF()
{
	
	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson F\n\n";
	 char str1;	
     char str2[50][80]={"fab","fable","face","facer","facia",
	                    "facile","facing","fact","factor","function",
						"fork","flag","fan","funny","field",
						"farmer","flow","fat","finnger","fresh",
						"factory","fade","face","fail","fain",
						"faint","fair","fake","false","follow",
						"falter","fame","frame","family","fish",
						"fancy","far","farm","fashion","fast",
						"force","flip","fate","father","fatten",
						"favourite","feat","feather","feature","fed",};
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
	for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
			if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonF-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonG()
{

	 system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson G\n\n";
	 char str1;	
     char str2[50][80]={"gab","gable","gun","goat","get",
	                    "glass","got","game","gamin","ginger",
						"goal","good","god","gap","garden",
						"garfish","garlic","garner","garden","garret",
						"gas","gash","gasp","gassy","gastro",
						"gate","gather","gaul","gaunt","give",
						"gay","gaze","gear","gel","geld",
						"gem","gen","gene","general","genetic",
						"genie","genius","gent","google","german",
						"ghee","ghost","giant","gray","gibe",};
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
		for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
			if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonG-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonH()
{
		
	 system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson H\n\n";
	 char str1;	
     char str2[50][80]={"habit","hear","hair","hat","hope",
	                    "hall","hell","hack","had","have",
						"hole","haircut","hairdo","hairline","hale",
						"hate","half","hello","halm","halva",
						"hammer","hammy","hamper","hand","handbell",
						"handbill","handbook","handful","homework","help",
						"handset","handsome","handy","hang","hank",
						"happen","happy","hard","harp","hart",
						"hash","haste","hatter","haul","haw",
						"haze","head","health","hot","heart",};
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
		for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
			if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonH-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonI()
{
	
	 system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson I\n\n";
	 char str1;	
     char str2[50][80]={"ice","icon","icicle","icing","idea",
	                    "ideal","ideally","identify","ides","idiocy",
						"idiot","ignore","ill","illness","image",
						"impossible","immoral","immure","imp","impact",
						"impair","impala","impale","impart","impasse",
						"important","invisible","impede","implicit","implode",
						"imply","import","impose","impound","impress",
						"imprint","ink","inborn","inbuilt","incest",
						"inch","incidence","incident","incise","include",
						"income","inertia","infarct","infer","infest",};
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
		for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
			if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonI-";
		exit1=getche();
		RandomLessons();
}

void RandomLessonJ()
{
	
	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson J\n\n";
	 char str1;	
     char str2[50][80]={"jab","jabot","jack","jackal","jackass",
	                    "jacket","jackdaw","jacket","jackpot","jade",
						"jail","jain","jam","jammy","jan",
						"japan","jape","jar","jaunt","jaw",
						"jay","jazz","jazzy","jeep","jeans",
						"jeer","jehad","jelly","jell","jerk",
						"jerry","jest","jet","jew","jiff",
						"jiggle","jilt","jinx","jitter","jink",
						"job","jobless","jock","jog","john",
						"join","joint","joke","jot","journal",
 						
						 };
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
		for(int b=0;b<50;b++)
		{
			system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
		if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonJ-";
		exit1=getche();
	RandomLessons();
}
void RandomLessonK()
{

		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson K\n\n";
	 char str1;	
     char str2[50][80]={"kaffir","kite","know","knock","kick",
                        "kale","kill","kaput","keel","keep",
                        "keg","kelp","kelt","ken","kendo",
                        "kent","kernel","ketch","kettle","key",
                        "keyboard","keyhole","keypad","keystone","keyword",
                        "kid","kilogram","kind","king","kink",
                        "kip","kirs","kiss","kit","knack",
                        "knave","knee","knead","knew","knob",
                        "knoll","kook","koppie","koran","kraal",
                        "krone","kung","krill","krall","kraut",
 						
						 };
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
		for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
		if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonK-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonL()
{
	
	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson L\n\n";
	 char str1;	
     char str2[50][80]={"lab","label","labial","labium","labor",
                        "labour","lace","lac","lack","look",
                        "like","light","law","luck","line",
                        "lead","lacy","lad","ladder","lade",
                        "lady","lag","laid","lair","lake",
                        "lamb","lame","lime","lamp","lancer",
                        "land","language","lark","larva","laser",
                        "lose","lash","last","latch","late",
                        "latent","lateral","lath","latin","latter",
                        "letter","launder","lava","lavatory","lawful",};
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
		for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
		if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonL-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonM()
{

	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson M\n\n";
	 char str1;	
     char str2[50][80]={"maam","mac","macaw","mace","mach",
                        "machine","macho","mango","more","marry",
                        "might","may","moon","man","mark",
                        "macro","madly","madman","magic","main",
                        "maintain","maize","majesty","major","make",
                        "mode","malady","malaise","malaria","malay",
                        "male","malice","malign","mall","mallard",
                        "mallet","mallow","malmsey","malt","mambo",
                        "mammal","mammary","mane","map","many",
                        "money","maple","meet","march","maria",
 						
						 };
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
		for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
		if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonM-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonN()
{
	
	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson N\n\n";
	 char str1;	
     char str2[50][80]={"nadir","nacre","naevus","naff","nag",
                        "nail","naked","name","nan","nancy",
                        "nappy","nark","narrate","narrative","narrow",
                        "nasal","nasent","nasty","nation","new",
                        "native","natty","natural","nature","nave",
                        "navel","nay","neap","near","neat",
                        "next","neath","nebula","necessary","neck",
                        "necklace","nectar","need","needle","negative",
                        "negelct","neigh","neither","neon","nerve",
                        "nervous","nervy","nestle","nether","nett",
 						
						 };
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
	for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
		if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonN-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonO()
{
	
	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson O\n\n";
	 char str1;	
     char str2[50][80]={"oat","oak","oath","oatcake","obey",
                        "obese","obelus","object","oblate","obligate",
                        "oblige","oblong","oboe","observe","obstruct",
                        "obtain","obtuse","obvious","occiput","occlude",
                        "occult","occupy","occur","ocean","ocelot",
                        "octane","octave","octavo","octet","october",
                        "ocular","odd","odd","ode","odium",
                        "odour","oestrus","off","offcut","offend",
                        "offer","office","official","offline","offset",
                        "oilfield","oil","okay","old","omen",
 						
						 };
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
		for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
		if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonO-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonP()
{
	
	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson P\n\n";
	 char str1;	
     char str2[50][80]={"pace","pacific","pacy","pad","paddle",
                        "packer","paddy","padre","paedo","paella",
                        "page","pagoda","palate","pale","pall",
                        "palmy","palsy","pamper","pampas","pan",
                        "pander","pandit","panel","pang","panicle",
                        "pannier","panoply","pansy","pant","paint",
                        "panther","panties","pantile","panto","pantograph",
                        "pantomime","pantry","pants","pap","papa",
                        "papaw","paper","parador","paragon","parallel",
                        "paralytic","paramour","parapet","paragraph","parasol",
 						
						 };
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
		for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
		if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonP-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonQ()
{
	
	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson Q\n\n";
	 char str1;	
     char str2[50][80]={"quack","quad","quadrant","quick","quake",
                        "qualify","quality","qualm","quango","quanta",
                        "quark","quarrel","quart","quash","quiz",
                        "quay","queen","quell","quern","quest",
                        "queue","quid","quiet","quiff","quill",
                        "quim","quince","quin","quire","quirk",
                        "quirk","quite","quits","quod","quoin",
                        "quoit","quota","quote","quoth","quetry",
                        "quadric","quadruple","quaker","quantum","quarterly",
                        "quasi","queasy","quayside","querulous","question",
 						
						 };
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
	for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
		if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonQ-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonR()
{

	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson R\n\n";
	 char str1;	
     char str2[50][80]={"rabbet","rabbi","rabbit","rabble","rabid",
                        "race","raceme","racial","rack","racoon",
                        "rad","raddle","radial","raddle","radiant",
                        "radiate","radiator","radio","radish","radix",
                        "radon","raffle","raft","rag","rage",
                        "raglan","ragout","ragtag","ragtime","raid",
                        "railcar","railing","rain","raincoat","rainbow",
                        "raise","rainy","raisin","raja","rake",
                        "rape","rally","real","ram","ramp",
                        "ranch","rancid","rand","randy","rang",
                        };
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
		for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
		if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonR-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonS()
{
	
	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson S\n\n";
	 char str1;	
     char str2[50][80]={"saber","sale","sabot","sabotage","sabre",
                        "sac","sack","sachet","sacral","sacred",
                        "seed","sad","sold","say","sun",
                        "son","success","suck","saddle","safe",
                        "safety","sag","saga","sage","said",
                        "sail","sailor","saint","sake","salad",
                        "salary","sale","salesman","silent","salient",
                        "saline","sally","sallow","salmon","salon",
                        "salsa","salt","salty","salute","salve",
                        "salvo","same","samba","sampan","sample",
						 };
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
		for(int b=0;b<50;b++)
		{
			system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
		if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonS-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonT()
{
	
	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson T\n\n";
	 char str1;	
     char str2[50][80]={"tabby","tab","tabla","table","tablet",
                        "take","tool","teach","touch","tear",
                        "turn","talk","telephone","tabulator","tack",
                        "tact","tag","taffy","tennis","tail",
                        "tailor","taint","taker","talent","toilet",
                        "tall","thin","thing","throw","talus",
                        "tame","team","tangent","tangle","tank",
                        "tannic","tansy","tantra","tap","tapas",
                        "tape","tappet","tar","tare","target",
                        "tarn","taro","tarry","tart","task",};
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
		for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
		if(str1=='\x1B')
		{
		RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonT-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonU()
{

		system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson U\n\n";
	 char str1;	
     char str2[50][80]={"ugly","ulcer","ullage","ulna","ulster",
                        "ulterior","ultimo","ultra","ululate","umber",
                        "umbra","umbilical","umbrella","umpire","umpteen",
                        "unable","unadvised","unafraid","unalike","unaware",
                        "unbar","unbelief","unbelieve","unbend","unbind",
                        "under","unblock","unborn","unbound","unbroken",
                        "unbutton","uncapped","uncaring","unceasing","unchain",
                        "unchanged","uncial","unclasp","uncle","unclear",
                        "unclothe","uncoil","unconcern","uncooked","uncover",
                        "uncross","unctuous","uncured","uncut","underbid",
 						
						 };
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
		for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
		if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonU-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonV()
{
	
	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson V\n\n";
	 char str1;	
     char str2[50][80]={"vacant","vacancy","vacate","vacation","vacuole",
                        "vacuous","vacuum","vagary","vagina","vagrant",
                        "vain","vague","vale","valency","valentine",
                        "valet","valid","valise","valley","valour",
                        "value","valve","vamp","van","vane",
                        "vanilla","vanity","vantage","vapid","vapor",
                        "vapour","variant","varied","various","varlet",
                        "varnish","vary","varsity","vas","vascular",
                        "vase","vast","vassal","vault","vaunt",
                        "veal","veg","vegan","vegetable","veggie",
 						
						 };
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
		for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
		if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);
		char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonV-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonW()
{

	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson W\n\n";
	 char str1;	
     char str2[50][80]={"wacky","wad","waddle","wade","wader",
                        "wadi","wafer","waffle","waft","wear",
                        "wage","wager","waggly","waif","wain",
                        "waist","wait","waive","wake","wale",
                        "walk","wall","wallet","wallon","walnut",
                        "walrus","wan","wand","wane","wank",
                        "weight","work","warn","woman","west",
                        "well","war","ward","ware","warm",
                        "warp","warrior","wart","was","wash",
                        "wasp","waste","watch","water","wave",
 						
						 };
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
		for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
		if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);
		char exit1;
		SetColor(4);
		cout<<"\n\t\tPress any key to exit RandomLessonW-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonX()
{
	
	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson X\n\n";
	 char str1;	
     char str2[9][80]={"xenon","xmas","xylem","xerox","xylophone",
                        "xenophoia","xerography","xerox","xion"};
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
		for(int b=0;b<50;b++)
		{
			system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
		if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(13);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<45<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);
		char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonX-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonY()
{

	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson Y\n\n";
	 char str1;	
     char str2[50][80]={"yacht","yack","yah","yahoo","yak",
                        "yam","yammer","yang","yank","young",
                        "yankee","yap","yard","yardie","yarn",
                        "yarrow","yarn","yaw","year","yeast",
                        "yell","yellow","yelp","yen","yes",
                        "yet","yew","yield","yin","yoga",
                        "yoke","yolk","yonder","yore","you",
                        "young","your","yours","youth","yowl",
                        "yuck","yuk","yule","yup","yuppie",
                        "yowl","yourself","your","yorkist","yore",
 						
						 };
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
		for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
		if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);
		char exit1;
		SetColor(12);
		cout<<"\n\t\tPress any key to exit RandomLessonY-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonZ()
{

	system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson Z\n\n";
	 char str1;	
     char str2[50][80]={"zeal","zealot","zealous","zebra","zed",
                        "zen","zend","zenith","zero","zest",
                        "zilch","zinc","zing","zion","zip",
                        "zipper","zircon","zit","zloty","zone",
                        "zoo","zoom","zygote","zydeco","zucchini",
                        "zoophyte","zoology","zoological","zonked","zombie",
                        "zloty","zither","zircon","zipper","zany",
                        "zappy","zealous","zed","zee","zephyr",
                        "zeppelin","zeta","zeugma","ziggurate","zillion",
                        "zinnia","zirconium","zulu","zydeco","zoroastrain",
 						
						 };
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
		for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
		if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);
		char exit1;
		SetColor(12);
		 
		cout<<"\n\t\tPress any key to exit RandomLessonZ-";
		exit1=getche();
		RandomLessons();
}
void RandomLessonMix()

{

system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Random Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t     Section(C)\n";
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tRandomLesson Z\n\n";
	 char str1;	
     char str2[50][80]={"apple","aeroplane","banana","best","crush",
                        "class","dangerous","delicious","elephant","ear",
                        "fly","fine","genius","goat","history",
                        "hero","iron","illness","jealous","jetplane",
                        "knife","knock","laugh","loud","minimum",
                        "money","nurse","name","orange","owl",
                        "pen","pencil","queen","quick","rest",
                        "rule","stay","shame","tear","teach",
                        "umbrella","ugly","violet","view","weight",
                        "wake","xylophone","xmas","year","zoroastrain",
 						
						 };
     
     	int error=0;
		int i=0;
		time_t start=clock();int countt=50;
		for(int b=0;b<50;b++)
		{
				system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"Random Testt\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
	 cout<<"--------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(13);
	 cout<<"\t\t\t\t\t RandomLesson A \n\n\n\n";
			cout<<"\t\tType word\t\t\t\tWords left\n\n";
			SetColor(0);
			
			cout<<"\t\t";
			cout<<str2[b];
			cout<<"\t\t\t\t\t";
			cout<<countt;
			cout<<endl;
			cout<<"\t\t";
			str1='a';
			while(str1!='\r' && str1!='\x20')
			{
				SetColor(2);
				str1=getche();
				if(str1==str2[b][i])
				i++;
				else if(str1=='\x1B')
				{
					break;
				}
			else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
			
			}
			if(str1=='\r')
			{
				cout<<"\b";
			}
		
			i=0;
			cout<<endl;
			if(str1=='\x1B')
			{
				cout<<"\bEXIT\n";
				break;
			}
			countt--;
		}
		if(str1=='\x1B')
		{
			RandomLessons();
			return ;
		}
		time_t end=clock();
		time_t totaltime=end-start;
		totaltime=(totaltime/1000)/60;
		int average=((80*10)/5)/totaltime;
		SetColor(3);
		cout<<"\n\t\tGood job!";
		cout<<"\n\t\tYour average typing speed (Word Per Minute) is:"<<average<<" WPM";
		cout<<"\n\t\tYour typing error is                          :"<<error<<" errors\n";
		Congratulation(3,average);
		Update(3,average);
		char exit1;
		SetColor(12);
		 
		cout<<"Press any key to exit RandomLessonMix-";
		exit1=getche();
		RandomLessons();
		return ;
}


void Score()
{
    ScoreSelect();
    return ;
}
void ScoreReview()
{
   system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Score Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
		cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
   char exit1;
    SetColor(2);
    cout<<"\tScore Test Review for Paragraph\n\n";
    SetColor(13);
    cout<<"\t Paragraph Score Test have three levels.\n\n";
    cout<<"\t\n1.First is easy in which if your typing error is more than 10 words for one sentence, program will stop. \n";
    cout<<"\t\n2.Second  is normal in which if your typing error is more than 5 words for one sentence ,program will stop.\n";
    cout<<"\t\n3.Third level is hard in which  your typing error is only one time for  one sentence. \n";
    SetColor(2);
    cout<<"\n\n\tScore Review for Random Word Test\n\n";
    SetColor(13);
    cout<<"\t Word Score Test  ";
    cout<<"\t\n For one word , you will get 3 marks. ";
    cout<<"\n ";
    
    SetColor(4);
    cout<<"\n\tPress any key to close 'Review'";
    exit1=getche();
    ScoreSelect();
    return ;
}
void ScoreSelect()
{
     system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"\t\t\t\t\tWelcome to score Test\t\t\t\t\t\t\t\t     Section(C)\n";
		cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";

    char choose;
    SetColor(2);
    
    cout<<"\t\t\t\t\t1.";
    SetColor(13);
    cout<<"Test.\n\n\n";
    SetColor(2);
    cout<<"\t\t\t\t\t2.";
    SetColor(13);
    cout<<"Score Review.\n\n\n";
    SetColor(2);
    cout<<"\t\t\t\t\t3.";
    SetColor(13);
    cout<<"Report.\n\n\n";
    SetColor(2);
    cout<<"\t\t\t\t\tEsc.";
    SetColor(12);
    cout<<"Exit Score Test.\n\n\n";
    SetColor(13);
    cout<<"\t\t\t\t\tChoose test or review or exit:";
    choose=getche();
    switch(choose)
    {
        case '1':
            ScoreLessons();
            break;
        case '2':
            ScoreReview();
            break;
        case '3':
            ScoreReport();
            break;
            
        case '\x1B':
            char exit1;
            SetColor(12);
            cout<<"\n\n\t\t\t\t\tDo you want to exit Score Test(y/n)?";
            exit1=getche();
            switch(exit1)
        {
            case 'y':
                Practice();
                break;
            case 'n':
                TutorialSelect();
                break;
        }
            
            break;
    }
    cout<<endl;
    SetColor(4);
    return ;
    
    
    
}
void ScoreLessons()
{
    system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Score Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
		cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	int choose;
    SetColor(2);
    cout<<"\t\t\t\t\t A.";
    SetColor(13);
    cout<<"Paragraph.\n\n";
    SetColor(2);
    cout<<"\t\t\t\t\t B.";
    SetColor(13);
    cout<<"Word.\n\n";
    SetColor(2);
    cout<<"\t\t\t\t\t Esc.";
    SetColor(12);
	cout<<"Back\n\n";
    SetColor(13);
    cout<<"\t\t\t\t\tChoose a lesson you want to Practice-";
    choose=getche();
    
    switch(choose)
    {
        case 'A':ScoreParagraphS();break;
        case 'a':ScoreParagraphS();break;
        case 'B':ScoreWord();break;
        case 'b':ScoreWord();break;
        case '\x1B':
            char exit1;
            SetColor(12);
            cout<<"\n\t\t\t\t\tDo you want to exit Score Test(y/n)?";
            exit1=getche();
            switch(exit1)
        {
            case 'y':
                ScoreSelect();
                break;
            case 'n':
                ScoreLessons();
                break;
        }
            
            break;
            
    }
    
    
    
    
    
    
}
void ScoreReport()
{
   system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Score Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
		cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
		
    char exit1;
    char report;
    ofstream scoreReport("ScoreReport.txt",ios::app);
    scoreReport<<endl;
    SetColor(5);
    cout<<"\t\t\t\t\tWhat do you want to report?\n\t\t\t\t\t";
    while(report!='\r')
    {
        SetColor(6);
        report=getche();
        if(report=='\x1B')
        {
            break;
        }
        scoreReport<<report;
    }
    
    scoreReport.close();
    if(report=='\x1B')
    {
        ScoreSelect();
        return ;
    }
    SetColor(12);
    cout<<"\n\t\t\t\t\tPress any key to exit report:";
    exit1=getche();
    return ;
}
void ScoreParagraphS()
{
     system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Score Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
		cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
    SetColor(13);
    cout<<"\t\t\t\t\tParagraph Score Test\n\n";
    
    SetColor(2);
    cout<<"\n\n\t\t\t\t\tA.";
    SetColor(13);
    cout<<"Easy.";
    SetColor(2);
    cout<<"\n\n\t\t\t\t\tB.";
    SetColor(13);
    cout<<"Normal.";
    SetColor(2);
    cout<<"\n\n\t\t\t\t\tC.";
    SetColor(13);
    cout<<"Hard.";
    SetColor(2);
    cout<<"\n\n\t\t\t\t\tEsc.";
    SetColor(12);
    cout<<"Exit.\n\n";
    SetColor(13);
    cout<<"\t\t\t\t\tChoose Level........";
    char choose;
    choose=getche();
    
    switch(choose)
    {
        case 'A':ScoreNormalP();break;
        case 'a':ScoreNormalP();break;
        case 'B':ScoreExpectP();break;
        case 'b':ScoreExpectP();break;
        case 'c':ScoreProP();break;
        case 'C':ScoreProP();
            break;
        case '\x1B':
            char exit1;
            SetColor(12);
            cout<<"\n\t\t\t\t\tDo you want to exit Paragraph Score Test(y/n)?";
            exit1=getche();
            switch(exit1)
        {
            case 'y':
                ScoreSelect();
                break;
            case 'n':
                ScoreLessons();
                break;
        }
            
            break;
            
    }
    return ;
    
}

void ScoreNormalP()
{
    system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Score Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
		cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
	
    SetColor(13);
    cout<<"\t\t\t\t\tEasy Paragraph Score Test\n\n";
    
    
    
    char str1='a';
    
    char str2[35][210]={"A business (also known as an enterprise, a company or a firm) is an organizational entity",
        " involved in the provision of goods and services to consumers.",
        "Businesses serve as conductors of economic activity,",
        "and are prevalent in capitalist economies,",
        "where most of them are privately owned and provide goods and services allocated", "through a market to consumers and customers in exchange for other goods,",
        "services, money, or other forms of exchange that hold intrinsic economic value.", "Businesses may also be social non-profit enterprises or state-owned public ",
        "enterprises operated by governments with specific social and economic objectives.",
        "A business owned by multiple private individuals may form as an incorporated",
        "company or jointly organise as a partnership. Countries have different laws that",
        "may ascribe different rights to the various business entities.",
        "The word 'business' can refer to a particular organization or to an entire marketsector",
        "(for example, 'the finance business' is 'the financial sector') or to all economic",
        "sectors collectively ('the business sector'). Compound forms such as 'agribusiness'"
        "represent subsets of the concept's broader meaning, which encompasses all activity",
        "by suppliers of goods and services.",
        "Typically private-sector businesses aim to maximize their profit, although in some",
        "contexts they may aim to maximize their sales revenue or their market share.",
        "Government-run businesses may aim to maximize some measure of social welfare.",
        "Forms of business ownership vary by jurisdiction, but several common entities exist:",
        "Sole proprietorship: A sole proprietorship, also known as a sole trader, is owned by one person and operates for their benefit.",
         "The owner operates the business alone and may hire employees.","A sole proprietor has unlimited liability for all obligations incurred by the business,","whether from operating costs or judgements against the business.",
         "All assets of the business belong to a sole proprietor, including, for example, computer infrastructure, any inventory, manufacturing equipment",
            "or retail fixtures, as well as any real property owned by the sole proprietor.",
         "A partnership is a business owned by two or more people. In most forms of partnerships","each partner has unlimited liability for the debts incurred by the business.","The three most prevalent types of for-profit partnerships are: general partnerships,limited partnerships, and limited liability partnerships","The owners of a corporation have limited liability and the business has a separate legal personality from its owners.","Corporations can be either government-owned or privately owned.","They can organize either for profit or as nonprofit organizations.","A privately owned, for-profit corporation is owned by its shareholders, who elect a board of directors to"," to direct the corporation and hire its managerial staff. A privately owned, for-profit corporation ","can be either privately held by a small group of individuals or publicly held, with publicly traded shares listed on a stock exchange."
    };
    int score=0;
    int error=0;
    time_t start=clock();

    for( int  k=0;k<35;k++)
    {
        
        
       SetColor(0);
			cout<<"\t\t";
			cout<<str2[k];
			cout<<endl;
			cout<<"\t\t";
        str1='a';
        
        
        int i=0;
        while(str1!='\r')
        {
            
            
            
            SetColor(10);
            str1=getche();
            if(str1==str2[k][i])
                i++;
            else if(str1=='\x1B')
            {
                
                break;
            }
            else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
            if(error==10)
            {
                break;
            }
            
            
        }
        
        if (error<10) {
            score+=10;
        }
        if(str1=='\x1B')
        {
            cout<<"Exit";
            break;
        }
        else if(error==10)
        {
            break;
        }
    }
    if (str1=='\x1B')
    {
        ScoreParagraphS();
        return ;
    }
    SetColor(13);
		cout<<"\n\t\tGood job!";
    cout<<"\n\t\tYour socre is"<<score<<" scores\n\n ";//<<//totaltime<<"mintues"<<endl;
    
		Congratulation(4,score);
		Update(4,score);
		char exit1;
		SetColor(12);
		cout<<"Press any key to exit ";
		exit1=getche();
		ScoreParagraphS();
    
    
}
void ScoreExpectP()
{
    
     system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Score Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
		cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
		
    SetColor(13);
    cout<<"\t\t\t\t\tNormal Paragraph Score Test\n\n";
    
    char str1='a';
    char str2[35][210]={"A business (also known as an enterprise, a company or a firm) is an organizational entity",
        " involved in the provision of goods and services to consumers.",
        "Businesses serve as conductors of economic activity,",
        "and are prevalent in capitalist economies,",
        "where most of them are privately owned and provide goods and services allocated", "through a market to consumers and customers in exchange for other goods,",
        "services, money, or other forms of exchange that hold intrinsic economic value.", "Businesses may also be social non-profit enterprises or state-owned public ",
        "enterprises operated by governments with specific social and economic objectives.",
        "A business owned by multiple private individuals may form as an incorporated",
        "company or jointly organise as a partnership. Countries have different laws that",
        "may ascribe different rights to the various business entities.",
        "The word 'business' can refer to a particular organization or to an entire marketsector",
        "(for example, 'the finance business' is 'the financial sector') or to all economic",
        "sectors collectively ('the business sector'). Compound forms such as 'agribusiness'"
        "represent subsets of the concept's broader meaning, which encompasses all activity",
        "by suppliers of goods and services.",
        "Typically private-sector businesses aim to maximize their profit, although in some",
        "contexts they may aim to maximize their sales revenue or their market share.",
        "Government-run businesses may aim to maximize some measure of social welfare.",
        "Forms of business ownership vary by jurisdiction, but several common entities exist:",
        "Sole proprietorship: A sole proprietorship, also known as a sole trader, is owned by one person and operates for their benefit.",
        "The owner operates the business alone and may hire employees.","A sole proprietor has unlimited liability for all obligations incurred by the business,","whether from operating costs or judgements against the business.",
        "All assets of the business belong to a sole proprietor, including, for example, computer infrastructure, any inventory, manufacturing equipment",
        "or retail fixtures, as well as any real property owned by the sole proprietor.",
        "A partnership is a business owned by two or more people. In most forms of partnerships","each partner has unlimited liability for the debts incurred by the business.","The three most prevalent types of for-profit partnerships are: general partnerships,limited partnerships, and limited liability partnerships","The owners of a corporation have limited liability and the business has a separate legal personality from its owners.","Corporations can be either government-owned or privately owned.","They can organize either for profit or as nonprofit organizations.","A privately owned, for-profit corporation is owned by its shareholders, who elect a board of directors to"," to direct the corporation and hire its managerial staff. A privately owned, for-profit corporation ","can be either privately held by a small group of individuals or publicly held, with publicly traded shares listed on a stock exchange."

        
    };
    
	int score=0;    
    int error=0;
    time_t start=clock();
    
    for( int k=0;k<35;k++)
    {
        
        
       SetColor(0);
			cout<<"\t\t";
			cout<<str2[k];
			cout<<endl;
			cout<<"\t\t";
        str1='a';
        
        
        int i=0;
        while(str1!='\r')
        {
            
            
            
            
            
            SetColor(10);
            str1=getche();
            if(str1==str2[k][i])
                i++;
            else if(str1=='\x1B')
            {
                
                break;
            }
            else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
            
            if(error==5)
            {
                
                break;
            }
            
        }
        
        if (error<5) {
            score+=10;
        }
        if(str1=='\x1B')
        {
            cout<<"\bExit\n";
            break;
        }
        if(error==5)
        {
            break;
        }
    }
    if (str1=='\x1B') {
        ScoreParagraphS();
        return ;
    }
    
     SetColor(13);
		cout<<"\n\t\tGood job!";
    cout<<"\n\t\tYour socre is"<<score<<" scores\n\n ";//<<//totaltime<<"mintues"<<endl;
    
		Congratulation(4,score);
		Update(4,score);
		char exit1;
		SetColor(12);
		cout<<"Press any key to exit ";
		exit1=getche();
		ScoreParagraphS();
    
}

void ScoreProP()
{
    
  system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Score Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
		cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
		
    SetColor(13);
    cout<<"\t\t\t\t\tHard Paragraph Score Test\n\n";
    
    char str1='a';
    char str2[35][210]={"A business (also known as an enterprise, a company or a firm) is an organizational entity",
        " involved in the provision of goods and services to consumers.",
        "Businesses serve as conductors of economic activity,",
        "and are prevalent in capitalist economies,",
        "where most of them are privately owned and provide goods and services allocated", "through a market to consumers and customers in exchange for other goods,",
        "services, money, or other forms of exchange that hold intrinsic economic value.", "Businesses may also be social non-profit enterprises or state-owned public ",
        "enterprises operated by governments with specific social and economic objectives.",
        "A business owned by multiple private individuals may form as an incorporated",
        "company or jointly organise as a partnership. Countries have different laws that",
        "may ascribe different rights to the various business entities.",
        "The word 'business' can refer to a particular organization or to an entire marketsector",
        "(for example, 'the finance business' is 'the financial sector') or to all economic",
        "sectors collectively ('the business sector'). Compound forms such as 'agribusiness'"
        "represent subsets of the concept's broader meaning, which encompasses all activity",
        "by suppliers of goods and services.",
        "Typically private-sector businesses aim to maximize their profit, although in some",
        "contexts they may aim to maximize their sales revenue or their market share.",
        "Government-run businesses may aim to maximize some measure of social welfare.",
        "Forms of business ownership vary by jurisdiction, but several common entities exist:",
        "Sole proprietorship: A sole proprietorship, also known as a sole trader, is owned by one person and operates for their benefit.",
        "The owner operates the business alone and may hire employees.","A sole proprietor has unlimited liability for all obligations incurred by the business,","whether from operating costs or judgements against the business.",
        "All assets of the business belong to a sole proprietor, including, for example, computer infrastructure, any inventory, manufacturing equipment",
        "or retail fixtures, as well as any real property owned by the sole proprietor.",
        "A partnership is a business owned by two or more people. In most forms of partnerships","each partner has unlimited liability for the debts incurred by the business.","The three most prevalent types of for-profit partnerships are: general partnerships,limited partnerships, and limited liability partnerships","The owners of a corporation have limited liability and the business has a separate legal personality from its owners.","Corporations can be either government-owned or privately owned.","They can organize either for profit or as nonprofit organizations.","A privately owned, for-profit corporation is owned by its shareholders, who elect a board of directors to"," to direct the corporation and hire its managerial staff. A privately owned, for-profit corporation ","can be either privately held by a small group of individuals or publicly held, with publicly traded shares listed on a stock exchange."

        
    };
    
    int score=0;
    int error=0;
    time_t start=clock();
    
    for( int k=0;k<35;k++)
    {
        
        
        SetColor(0);
			cout<<"\t\t";
			cout<<str2[k];
			cout<<endl;
			cout<<"\t\t";
        str1='a';
        
        
        int i=0;
        while(str1!='\r')
        {
            
            
            
            
            
            SetColor(10);
            str1=getche();
            if(str1==str2[k][i])
                i++;
            else if(str1=='\x1B')
            {
                
                break;
            }
             else if(str1=='\r')
            {
                cout<<"\b";
            }
            else if(str1=='\x08')
			{
					str1=='\0';
					cout<<' '<<'\b';
					i--;
			}
            else
			{
				SetColor(12);
                cout<<"\b"<<str1;
                error++;
                i++;
            }
            if(error==2)
            {
                
                break;
            }
            
        }
        
        if (error<=1) {
            score+=10;
        }
        if(str1=='\x1B')
        {
            cout<<"\bExit\n";
            break;
        }
        if(error==2)
        {
            break;
        }
    }
    if (str1=='\x1B') {
        ScoreParagraphS();
        return ;
    }
      SetColor(13);
		cout<<"\n\t\tGood job!";
    cout<<"\n\t\tYour socre is"<<score<<" scores\n\n ";//<<//totaltime<<"mintues"<<endl;
    
	Congratulation(4,score);
		Update(4,score);
		char exit1;
		SetColor(12);
		cout<<"Press any key to exit ";
		exit1=getche();
		ScoreParagraphS();
    
}
void ScoreWord()
{
   system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 cout<<"  Score Test\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Section(C)\n";
		cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n";
		SetColor(13);
    cout<<"\t\t\t\t\tRandom Word Score Test\n\n";
    char str1;
    char str2[200][80]={
        "packer","aback", "babe","abaft","caddy",
        "aalone","incest","immure","abase","bade",
        "land","aattoir","blood","caber","abbe",
        "backfire","abduct", "abet","babusit","cactus",
        "abhor","team", "fair","abide",  "abort",
        "kernel","wall", "above","baby","warp",
        "baccy","incidence","kale","back","keyboard",
        "background", "icicle","abate","cook","backlist",
        "backlog","palmy","bad","kilogram","badly",
        "toilet","bag","abeam","bah","koppie",
        "ideal","cabbage","wait","cabin","facile",
        "cable","wage","cacao","cackle","pantomime",
        "cad","farmer","cadet","family","cadre","paralytic",
        "caecum","tact","cafe","waste","cage",
        "cain","cairn","tailor","cake","pannier",
        "finnger","care","cat","call","thin",
        "class","abject","clock","cross","favourite",
        "chat","umber","letter","fine","yelp",
        "launder","lava","crush","lavatory","banana",
        "lawful","ulterior","ultra","yes","ululate",
        "umbra","umbilical","umbrella","umpire","umpteen",
        "best","yell","dangerous","yellow","yen",
        "yet","elephant","yew","minimum","yin",
        "apple","aeroplane","ultimo","loud","illness",
        "class","laugh","delicious","ear","yield",
        "fly","knock","genius","goat","history",
        "hero","iron","jealous","yoga","jetplane",
        "knife","love","Macbook","Laptop","phone",
        "knife","knock","laugh","loud","minimum",
        "money","nurse","name","orange","owl",
        "pen","pencil","queen","quick","rest",
        "rule","stay","shame","tear","teach",
        "umbrella","ugly","violet","view","weight",
        "wake","xylophone","xmas","year","zoroastrain",
    };
    
    
    int score=0;
    int error=0;
    int i=0;
    int countt=0;
    //time_t start=clock();
    for(int b=0;b<200;b++)
    {
        system("CLS");
        SetColor(9);
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group (6)\n";
        cout<<"Random Word Score Test\n\n\n";
        SetColor(13);
        
        cout<<"\t\tType word\t\t\t\tScore\n\n";
        SetColor(0);
        
        cout<<"\t\t";
        cout<<str2[b];
        cout<<"\t\t\t\t\t";
        
        cout<<score;
        cout<<endl;
        cout<<"\t\t";
        str1='a';
        while(str1!='\r' && str1!='\x20' )
        {
            SetColor(10);
            str1=getche();
            if(str1==str2[b][i])
            {
                i++;
                
            }
                else if(str1=='\x1B')
            {
                break;
            }
            
            else if(str1=='\x08')
            {
                str1=='\0';
                cout<<' '<<'\b';
                i--;
            }
            else
            {
               SetColor(12);
                cout<<"\b"<<str1;
                
                break;
            }
           
        }
         
        if(str1=='\r' || str1=='\x20')
        {
            cout<<"\b";
        }
        else if(str1!=str2[b][i])
        {
        	break;
        }
        score+=3;
        
        i=0;
        cout<<endl;
        if(str1=='\x1B')
        {
            cout<<"\bEXIT\n";
            break;
        }
        //countt++;
    }
    if(str1=='\x1B')
    {
        
        ScoreLessons();
        return ;
    }
    /*time_t end=clock();
    time_t totaltime=end-start;
    totaltime=(totaltime/1000)/60;
    int average=((80*10)/5)/totaltime;
    
    cout<<"\n\t\tYour average typing speed (Word Per Minute) is-"<<average;*/
    SetColor(12);
	cout<<"\n\n\n\t\tPlease wait 5 seconds";
    Sleep(5000);
    SetColor(13);
	cout<<"\n\t\tYour score is-"<<score<<" scores.";
	Congratulation(4,score);
		Update(4,score);
    //Congratulation(3,average);
    //Update(3,average);
    char exit1;
    SetColor(12);
    cout<<"\n\t\tPress any key to exit Score Word Test-";
    exit1=getche();
    ScoreLessons();
    //Update(1,average);
   // char exit1;
            
    
    
    
    
    
    
}


void BestScore()
{
		 system("CLS");
	 SetColor(9);
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tTyping Test--Group  (6)\n";
	 
	 cout<<"  Your Best Score\t\t\t\t\t\t\t\t\t\t\t\t\t\t   Section(C)\n";
	 cout<<"  --------------------------------------------------------------------------------------------------------------------------------\n\n\n";
	
	 SetColor(3);
	 cout<<"\t\t\t\t\tTutorial test typing speed		-"<<BestScoreFunction(1);
	 SetColor(2);
	 BestScoreFunction(1);
	 cout<<"WPM.";
	 SetColor(3);
	 cout<<"\n\n\t\t\t\t\tParagraph test typing speed		-"<<BestScoreFunction(2);
	 SetColor(2);
	 
	 cout<<"WPM.";
	 SetColor(3);
	 cout<<"\n\n\t\t\t\t\tRandom test typing speed		-"<<BestScoreFunction(3);
	 SetColor(2);
	 
	 cout<<"WPM.";
	 SetColor(3);
	 cout<<"\n\n\t\t\t\t\tBest scores of Score test		-"<<BestScoreFunction(4);
	 SetColor(2);
	 
	 cout<<"scores.";
	 char exit1;
	 cout<<"\n\n\t\t\t\t\tPress any key to close your best scores.";
	 exit1=getche();
	 
	 Practice();
	 return ;
}
void Update(int updateplace,int updateitem)
{
	
	int j;
	
	ifstream inn("ll.txt");
	ofstream outt("update.txt");
	int unumber;
	ifstream innnnn("usernumber.txt");
	innnnn>>unumber;
	innnnn.close();
	
	for(int i=1;i<=unumber;i++)
	{
		
		for(int o=1;o<=4;o++)
		{
			inn>>j;
		
			if(o==updateplace && i==realusernumber)
			{
				if(updateplace==4 && updateitem>j)
				{
					outt<<updateitem<<"\n";
				}
				else if(updateitem>j && updateplace!=4)
				{
					outt<<updateitem<<"\t";
				}
				else if(updateitem<j && o==4)
				{
					outt<<j<<"\n";
				}
				else if(updateitem<j && o!=4)
				{
					outt<<j<<"\t";
				}
			}
				
			
			else if( o==4)
			{
				outt<<j<<endl;
			}
			else
			{
			outt<<j<<"\t";
			}
					
				
			
			
			
		}
	}
    outt.close();
	inn.close();
			int k,l=1;
	ifstream innn("update.txt");
	ofstream outtt("ll.txt");
	for(int i=0;i<unumber;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(j==3)
			{
				innn>>k;
				outtt<<k<<endl;
			}
			else
			{
				innn>>k;
				outtt<<k<<"\t";
		
			}
		
		}
	}
	

	outtt.close();
	innn.close();
	return ;
}
int BestScoreFunction(int score)
{
	int k;
	ifstream is("ll.txt");
	for(int i=1;i<=realusernumber;i++)
	{
		for(int j=1;j<=4;j++)
		{
			if(i==realusernumber && j==score)
			{
				is>>k;
				
				is.close();
				return k;
			}
			else
			{
				is>>k;
			}
		}
	}
	is.close();
	return k;
}
void Congratulation(int scoreplace,int score)
{
	int k;
	ifstream is("ll.txt");
	for(int i=1;i<=realusernumber;i++)
	{
		for(int j=1;j<=4;j++)
		{
			if(i==realusernumber && j==scoreplace)
			{
				is>>k;
				if(score>k)
				{
					SetColor(10);
					cout<<"\n\n\t\tCongratulation! YOu got a new high score \n";
					is.close();
					return ;
				}
				else
				{
					is.close();
					return ;
				
				}
				
				
				
			}
			else
			{
				is>>k;
			}
		}
	}
	is.close();

	return;
}
void SetColor(int ForgC)
{
    WORD wColor;
    
    HANDLE hStdOut=GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor=(csbi.wAttributes& 0xF0)+ (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut,wColor);
    }
    return ;
}
//whooo whoooo wooooo waaaaa
