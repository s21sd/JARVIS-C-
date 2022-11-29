#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<ctime> //to use the time function in your code
//MAKING JARVIS😊😊
using namespace std;
 void wishes()
    {
        time_t now=time(0);
        tm *time=localtime(&now);
        if(time-> tm_hour<12)
        {
            cout<<"GOOD MORNING SIR"<<endl;
            string phrase="GOOD MORNING SIR";
        string command="espeak \""+phrase +"\"";
        const char *charCommand=command.c_str();
        system(charCommand);
        }
        else if(time-> tm_hour>=12 && time->tm_hour<=16)
        {
            cout<<"GOOD AFTERNOON SIR"<<endl;
             string phrase="GOOD Afternoon SIR";
        string command="espeak \""+phrase +"\"";
        const char *charCommand=command.c_str();
        system(charCommand);
        }
        else if(time-> tm_hour>16 && time->tm_hour< 24)
        {
            cout<<"GOOD EVENING SIR"<<endl;
             string phrase="GOOD evening SIR";
        string command="espeak \""+phrase +"\"";
        const char *charCommand=command.c_str();
        system(charCommand);
        }
    }

    void datetiem()
    {
        time_t now=time(0);
        char *dt=ctime(&now);
        cout<<"The date and time is"<<endl
        <<dt<<endl;
    }



int main()
{
    //function to wish according to time
   
    system("cls");
     cout<<"\t\t\t<======================================= W E L C O M E ====================================================>"<<endl;
     cout<<"\t\t\t<======================================= I'M A VIRTUAL ASSISTANT ====================================================>"<<endl;
     cout<<"\t\t\t<======================================= MY NAME IS JARVIS ====================================================>"<<endl;
     cout<<"\t\t\t<======================================= I'M HERETO HELP YOU ====================================================>"<<endl;
    
    
    char password[20]; //for password
    char ch[100];//for taking command from user
    do
    {
        cout<<"========================"<<endl;
        cout<<"| ENTER YOUR PASSWORD SIR |"<<endl;
        cout<<"========================"<<endl<<endl;
        string phrase="enter your password sir";
        string command="espeak \""+phrase +"\"";
        const char *charCommand=command.c_str();
        system(charCommand);
        gets(password);

        STARTUPINFO startInfo={0};
        PROCESS_INFORMATION processInfo={0};

        if(strcmp(password,"jarvis")==0)

        {
            cout<<"\n<======================================================================>\n\n"<<endl;
            // cout<<"CORRECT PASSWORD"<<endl;
            wishes();
            do
            { cout<<"\n<======================================================================>\n\n"<<endl;
              cout<<endl<<"How can i help you sir...."<<endl;

               string phrase="How can i help you sir";
              string command="espeak \""+phrase +"\"";
              const char *charCommand=command.c_str();
              system(charCommand);


              cout<<"Your query ===>";
              gets(ch);
              cout<<"Here is the result for your quary===>";
              if(strcmp(ch,"hi")==0 || strcmp(ch,"hey")==0||strcmp(ch,"hello")==0)
              {
                cout<<"Hello Sir...."<<endl;
                 
               string phrase="Hello Sir";
              string command="espeak \""+phrase +"\"";
              const char *charCommand=command.c_str();
              system(charCommand);
                
              }

             else if(strcmp(ch,"bye")==0||strcmp(ch,"exit")==0||strcmp(ch,"stop")==0)
              {
                cout<<"Good Bye sir,have a nice day!!!!"<<endl;
                string phrase="Good Bye sir,have a nice day";
              string command="espeak \""+phrase +"\"";
              const char *charCommand=command.c_str();
              system(charCommand);
                
                exit(0);

              }

                else if(strcmp(ch,"who are you")==0||strcmp(ch,"tell me about ypurself")==0||strcmp(ch,"about")==0)
              {
                cout<<"I'm jarvis a virtual assistant created by MR.SUNNY SRIVASTAVA"<<endl;
                string phrase="I'm jarvis a virtual assistant created by MR SUNNY SRIVASTAVA";
              string command="espeak \""+phrase +"\"";
              const char *charCommand=command.c_str();
              system(charCommand);
                

              }

                else if(strcmp(ch,"how are you")==0||strcmp(ch,"whatsup")==0||strcmp(ch,"how is your day")==0)
              {
                cout<<"I'm good sir,tell me how can i help you.."<<endl;
                 string phrase="I'm good sir,tell me how can i help you";
              string command="espeak \""+phrase +"\"";
              const char *charCommand=command.c_str();
              system(charCommand);

              }
              else if(strcmp(ch,"time")==0||strcmp(ch,"date")==0)
              {
                    // make a function for a date and time
                    datetiem();
              }

                //for opennotepad😊😊
               else if(strcmp(ch,"open notepad")==0)
              {
                    cout<<"opening notepad...."<<endl;
                    string phrase="opening notepad sir";
                    string command="espeak \""+phrase +"\"";
                    const char *charCommand=command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\windows\\notepad.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);

              }

                //for open youtube😊😊
               else if(strcmp(ch,"open youtube")==0)
              {
                    cout<<"opening youtube...."<<endl;
                     
                    string phrase="opening youtube sir";
                    string command="espeak \""+phrase +"\"";
                    const char *charCommand=command.c_str();
                    system(charCommand);
                     system("start https://www.youtube.com"); 
              } 
              
              //for google😊😊
              else if(strcmp(ch,"open google")==0)
              {
                    cout<<"opening google...."<<endl;
                     
                    string phrase="opening google sir";
                    string command="espeak \""+phrase +"\"";
                    const char *charCommand=command.c_str();
                    system(charCommand);

                    system("start https://www.google.com"); 
              }

            //  else if(strcmp(ch,"open google")==0)
            //   {
            //         cout<<"opening hackrank...."<<endl;
            //         system("start https://www.google.com"); 
            //   }

            //       else if(strcmp(ch,"open google")==0)
            //   {
            //         cout<<"opening codestdio...."<<endl;
            //         system("start https://www.google.com"); 
            //   }

            //       else if(strcmp(ch,"open google")==0)
            //   {
            //         cout<<"opening youtube...."<<endl;
            //         system("start https://www.google.com"); 
            //   }

                // for open croem
                  else if(strcmp(ch,"open crome")==0)
              {
                    cout<<"opening crome...."<<endl;
                    string phrase="opening crome sir";
                    string command="espeak \""+phrase +"\"";
                    const char *charCommand=command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
              }





























                else{
                    cout<<"Sorry could not understand your query please try again";
                }

            } while(1);
            
        }
        else
        {
            cout<<"INCORRECT PASSWORD"<<endl;
        }
    } while (1);
        
        
    
    
return 0;
}