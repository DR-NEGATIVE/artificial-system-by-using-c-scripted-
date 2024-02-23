#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<dos.h>
#include <bits/stdc++.h>
#include <windows.h>
int main(){
	char s[1055];
    //try this code in dev c++ or c++ compiler some funcation are written in c++
printf("Hi i am ACCO,I am a scripted Artificial inteligence System \nReady For Your command\nfor calculation Use add,multiply,divide as command :-)\n");
printf("\t  *********\n\t  ***********\n\t  *************\n\t******************\n\t******************\n\t  *************\n\t  ***********\n\t  *********\n");
message:gets(s);

if(strcasecmp ("hello",s)==0||strcasecmp("hey",s)==0||strcasecmp("hi acco",s)==0)
{

printf("Hello sir,How can I Help You :-)\n");
goto message;
}
else if(strcasecmp("acco",s)==0)
{
	printf("Yes sir any Help\n");
	goto message;
}
else if(strcasecmp("Who makes you",s)==0||strcasecmp("who design you",s)==0||strcasecmp("who is acco",s)==0)
{

printf("I am a scripteed AI system coded by:Vinay sharma\n");

goto message;
}
else if(strcasecmp("full form of acco",s)==0||strcasecmp("define acco",s)==0||strcasecmp("what is acco",s)==0)
{ 
printf("A=Artificial\nC=Computer\nC=Command\nO=Operator\n");
goto message;

}
else if(strcasecmp("not fine",s)==0||strcasecmp("fever",s)==0||strcasecmp("exam pressure",s)==0||strcasecmp("cold",s)==0||strcasecmp("not good",s)==0)
{
	printf("Ohhh,:-(\n");
	printf("Don't worry,i will help you\n");
	goto message;
	
}

else if(strcasecmp("your name",s)==0)
{
printf("My name is :ACCO\n");

goto message;
}
else if(strcasecmp("good morning",s)==0||strcasecmp("good evening",s)==0||strcasecmp("good after noon",s)==0||strcasecmp("good night",s)==0)
{ 
printf("%s Sir \n",s);
goto message;

}
else if(strcasecmp("hi",s)==0){

printf("Hi\nHow are you?\n");
goto message;
}
else if(strcasecmp("fine",s)==0)
{ printf("Glad to hear it\n");
goto message;
}
else if(strcasecmp("time",s)==0||strcasecmp("show me time",s)==0){

time_t s,val=1;
	struct tm*current_time;
	s=time(NULL);
	current_time = localtime(&s);
	printf("%02d:%02d:%02d",current_time->tm_hour,current_time->tm_min,current_time->tm_sec);
goto message;
}
else if(strcasecmp("date",s)==0)
{
	time_t tt;
	struct tm*ti;
	time(&tt);
ti=localtime(&tt);
 printf("%d/%d/%d",asctime(ti));
 printf("correct error please");
 goto message;
 
}
else if(strcasecmp("add",s)==0)
{
	printf("Enter two value:A&B\n");
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Addition:%d\n",a+b);
		goto message;
}
else if(strcasecmp("multiply",s)==0)
{	printf("Enter two value:A&B\n");
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",a*b);
	goto message;
}
else if(strcasecmp("divide",s)==0)
	{printf("Enter two value:A&B\n");
	float a,b;
	scanf("%f%f",&a,&b);
	printf("%f",a/b);
	goto message;
	}
else if(strcasecmp("open calculator",s)==0)
{system("cmd /c calc");
goto message;
}
else if(strcasecmp("open browser",s)==0||strcasecmp("open google",s)==0||strcasecmp("google",s)==0)
{ system("explorer http://www.google.com");
goto message;
}
else if(strcasecmp("open youtube",s)==0||strcasecmp("youtube",s)==0)
{
	system("explorer https://www.youtube.com/");
	goto message;
}
else if(strcasecmp("analyze system",s)==0||strcasecmp("tree",s)==0)
{
	system("cmd /c tree");
	goto message;
}
else if(strcasecmp("open wordpad",s)==0||strcasecmp("wordpad",s)==0)
{
	system("cmd /c write");
	goto message;
}
else if(strcasecmp("bye",s)==0)
{ printf("ACCO:-Bye sir ");
}
else if(strcasecmp("open paint",s)==0||strcasecmp("paint",s)==0)
{
	system("mspaint");
	goto message;
}
else if(strcasecmp("what about you",s)==0){
	printf("Basically I AM GOOD\n");
	goto message;
}
else if(strcasecmp("who vinay sharma",s)==0||strcasecmp("who is vinay sharma",s)==-0||strcasecmp("vinay sharma",s)==0){

printf("Vinay sharma is my creator and designer \n studies first year of B.Technology\n");
goto message;}
else
{ 

    ShellExecute(NULL, "open",s, NULL, NULL, SW_SHOWNORMAL); 
    printf("i did'nt get that'\n");
    goto message;
}
}



