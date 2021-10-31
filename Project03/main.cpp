#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdio.h>
using namespace std;

int main()
{
	int i,entekhb,j,t,s,d,p,n,qq,qqq,felag,r,rr,rrr,pp,help;
    char pishfarz[120][15];
    char wordlist[30][15]={"mabani","hello","string","iran"};
    char wordlist1[30][15];
	char namayesh[20][20];
    char star[1][1]={'*'};
    s=0;
    qq=0;
    qqq=0;
    d='a'-'A';
	felag=1;
	{
			srand(time (NULL));
	for(int i=0;i<1;i++)
	{
		t=rand()%4;
			
	}
	
	}

	while (felag)
	{
		qq=0;
		qqq=0;


    for(i=0;wordlist[t][i];i++)
    {
		namayesh[0][i]=wordlist[t][i];
    }
	namayesh[0][i]='\0';


    cout<<"your number is ("<<i<<")harfi"<<endl;

     cout<<"please enter your guess"<<endl;
     for(j=0;j<i;j++)
     {

    cin>>pishfarz[s][j];

      if(pishfarz[s][j]>='a' && pishfarz[s][j]<='z')
      {
          pishfarz[s][j]=pishfarz[s][j]-d;
      }

     }

  /* for(j=0;j<i;j++)
     {
         cout<<pishfarz[s][j];
     }*/
     cout<<endl;
     for( pp=0;wordlist[t][pp];pp++)
     {
         wordlist1[t][pp]=wordlist[t][pp];
     }
     wordlist1[t][pp]='\0';
 

    for(int p=0;wordlist[t][p];p++)
     {
         if(wordlist1[t][p]>='a' && wordlist1[t][p]<='z')
         {
             wordlist1[t][p]=wordlist1[t][p]-d;
         }
     }

    /*  for(i=0;wordlist1[t][i];i++)
    {
        cout<<wordlist1[t][i];

    }*/

    for(i=0;wordlist1[t][i];i++)
    {


        if(wordlist1[t][i] == pishfarz[s][i])
        {
            qqq=qqq+1;
        }
    }
    n=i;
    for(i=0;pishfarz[s][i];i++)
    {
        for(n=0;wordlist1[t][n];n++)
        {
            if(pishfarz[s][i]==wordlist1[t][n])
            {
                wordlist1[t][n]=star[0][0];
                qq=qq+1;
                break;
            }

        }
    }
    cout<<endl;
    cout<<"right alphabet is="<<qq;
    cout<<endl;
      for(i=0;wordlist1[t][i];i++)
   /* {
        cout<<wordlist1[t][i];

    }*/

    cout<<endl;
	cout<<endl;
	cout<<endl;
    cout<<"right place is="<<qqq;
	cout<<endl;
	if(qqq==i)
	{
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"*********** VERY GOOD ***********"<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"key word was=";
		 for(int i=0;namayesh[0][i];i++)
	{

		cout<<namayesh[0][i];
	}

	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"do you want to finish this program????(if your answer is yes please enter (0)else please enter (1))"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cin>>r;
	cout<<endl;
	cout<<endl;
	if(r==0)
	{
		cout<<"key word was=";
      for(int i=0;namayesh[0][i];i++)
	{

		cout<<namayesh[0][i];
	}
		break;
	}
	if(r==1)
	{
		cout<<endl;
		cout<<endl;
		cout<<"do you want help???(if your answer is yes please enter (2)else please enter (1))"<<endl;
		cin>>rrr;
		if(rrr==2)
		
	
	{	 FILE *pfr;
    char buf[1000];
    int i,r;
    r=0;
    pfr=fopen("c:\\maman.txt","r");
    if(!pfr)
    {
        printf("error");
        exit(1);
    }
    i=0;
    while (i<4)
    {


    while (fgets(buf,1000,pfr))
    {

        if(i==t)
    {

        for(int i=0;buf[i];i++)
        {
            cout<<buf[i];
            if(buf[i]=='.')
            {
                r=1;

                break;
            }

        }


    }
    else
    {
        i+=1;
    }
   if(r==1)
    {
        break;
    }
    }
    if(r==1)
    {
        break;
    }

    }



    fclose(pfr);
		}
		
		if(rrr==0)
		{
		}
		

	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"do you want change your  word????(if your answer is yes please enter(1),else please enter (0))"<<endl;
	cin>>rr;
	if(rr==1)
	{
		srand(time (NULL));
	for(int i=0;i<1;i++)
	{
		t=rand()%4;
	}
	}
	if(rr==0)
	{
	}



	}

    getch();
    return 0;
}
