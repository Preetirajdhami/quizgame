
#include <iostream>

using namespace std;

int guess;

class Question
{
    public:
    int setValues();
void display();
    int score=0;
    
    
};
    int Question::setValues()
  {
      
      cout<<"A.First page of Website is called?"<<endl;
      cout<<"1.Homepage"<<endl;
      cout<<"2.Index"<<endl;
      cout<<"3.Navigation"<<endl;
      cout<<"4.About page"<<endl;
      
      cout<< "write your answer in number."<<endl;
      cin>>guess;
      if(guess==1)
      {
          cout<<"You are correct !!"<<endl;
          cout<<"you scored a point."<<endl;
          score=score+1;
          
      }
      else
      {
          cout<<"You are wrong !!"<<endl;
          cout<<"you scored 0."<<endl;
          score=score+0;
          
      }
      cout<<"B.A computer can not boot if it does not have the"<<endl;
      cout<<"1.Compiler"<<endl;
      cout<<"2.Loader"<<endl;
      cout<<"3.Operating System"<<endl;
      cout<<"4.Assembler"<<endl;
      
      cout<< "write your answer in number."<<endl;
      cin>>guess;
      if(guess==3)
      {
          cout<<"You are correct 11"<<endl;
          cout<<"you scored a point."<<endl;
          score=score+1;
          
      }
      else
      {
          cout<<"You are wrong !!"<<endl;
          cout<<"you scored 0."<<endl;
          score=score+0;
          
      }
      cout<<"C.CPU consists of "<<endl;
      cout<<"1.ALU+cu"<<endl;
      cout<<"2.ROM+ALU"<<endl;
      cout<<"3.RAM+ROM"<<endl;
      cout<<"4.ALL"<<endl;
      
      cout<< "write your answer in number."<<endl;
      cin>>guess;
      if(guess==1)
      {
          cout<<"You are correct 11"<<endl;
          cout<<"you scored a point."<<endl;
          score=score+1;
          
      }
      else
      {
          cout<<"You are wrong !!"<<endl;
          cout<<"you scored 0."<<endl;
          score=score+0;
          
      }
     cout<<"D.Who is the father of computer?"<<endl;
      cout<<"1.James Gosling"<<endl;
      cout<<"2.Charles Babbage"<<endl;
      cout<<"3.Dennis Ritchie"<<endl;
      cout<<"4.Bjarne Stroustrup"<<endl;
      
      cout<< "write your answer in number."<<endl;
      cin>>guess;
      if(guess==2)
      {
          cout<<"You are correct 11"<<endl;
          cout<<"you scored a point."<<endl;
          score=score+1;
          
      }
      else
      {
          cout<<"You are wrong !!"<<endl;
          cout<<"you scored 0."<<endl;
          score=score+0;
          
      }
      cout<<"E.Which device is used as the standard pointing device in graphical user environment ?"<<endl;
      cout<<"1.Keyboard"<<endl;
      cout<<"2.Mouse"<<endl;
      cout<<"3.Joystick"<<endl;
      cout<<"4.Trackball"<<endl;
      
      cout<< "write your answer in number."<<endl;
      cin>>guess;
      if(guess==2)
      {
          cout<<"You are correct !!"<<endl;
          cout<<"you scored a point."<<endl;
          score=score+1;
          
      }
      cout<<"F.joystick is used for ?"<<endl;
      cout<<"1.Gaming"<<endl;
      cout<<"2.Word processing"<<endl;
      cout<<"3.scanning"<<endl;
      cout<<"4.printing"<<endl;
      
      cout<< "write your answer in number."<<endl;
      cin>>guess;
      if(guess==1)
      {
          cout<<"You are correct !!"<<endl;
          cout<<"you scored a point."<<endl;
          score=score+1;
          
      }
      else
      {
          cout<<"You are wrong !!"<<endl;
          cout<<"you scored 0."<<endl;
          score=score+0;
          
      }
      
      
      cout<<"G.which of the following is the valid measurement unit of memory?"<<endl;
      cout<<"1.GB"<<endl;
      cout<<"2.MB"<<endl;
      cout<<"3.KB"<<endl;
      cout<<"4.All"<<endl;
      
      cout<< "write your answer in number."<<endl;
      cin>>guess;
      if(guess==4)
      {
          cout<<"You are correct !!"<<endl;
          cout<<"you scored a point."<<endl;
          score=score+1;
          
      }
      else
      {
          cout<<"You are wrong !!"<<endl;
          cout<<"you scored 0."<<endl;
          score=score+0;
          
      }
      cout<<"H.Which of the following is not OS ?"<<endl;
      cout<<"1.Andriod"<<endl;
      cout<<"2.MAC"<<endl;
      cout<<"3.Samsung"<<endl;
      cout<<"4.LINUX"<<endl;
      
      cout<< "write your answer in number."<<endl;
      cin>>guess;
      if(guess==3)
      {
          cout<<"You are correct !!"<<endl;
          cout<<"you scored a point."<<endl;
          score=score+1;
          
      }
      else
      {
          cout<<"You are wrong !!"<<endl;
          cout<<"you scored 0."<<endl;
          score=score+0;
          
      }
      cout<<"I._______ is the appearance of typed characters?"<<endl;
      cout<<"1.size"<<endl;
      cout<<"2.point"<<endl;
      cout<<"3.colour"<<endl;
      cout<<"4.format"<<endl;
      
      cout<< "write your answer in number."<<endl;
      cin>>guess;
      if(guess==4)
      {
          cout<<"You are correct !!"<<endl;
          cout<<"you scored a point."<<endl;
          score=score+1;
          
      }
      else
      {
          cout<<"You are wrong !!"<<endl;
          cout<<"you scored 0."<<endl;
          score=score+0;
          
      }
      cout<<"J.VLSI is used in _______ generation of the computers  ?"<<endl;
      cout<<"1.first"<<endl;
      cout<<"2.second"<<endl;
      cout<<"3.third"<<endl;
      cout<<"4.fourth"<<endl;
      
      cout<< "write your answer in number."<<endl;
      cin>>guess;
      if(guess==4)
      {
          cout<<"You are correct !!"<<endl;
          cout<<"you scored a point."<<endl;
          score=score+1;
          
      }
      else
      {
          cout<<"You are wrong !!"<<endl;
          cout<<"you scored 0."<<endl;
          score=score+0;
          
      }
      return score;
  }
    
    
    
    
 
  void Question::display()
  {
      cout<<"your total score is "<<score<<"out of 10"<<endl;
      if(score>7)
      {
          cout<<"you did a great job !!"<<endl;
      }
      else
      {
          cout<<"Better Luck Next Time"<<endl;
      }
  }
  
int main()
{
    cout<<"\t\t\t===========================================\n";
    cout<<"\t\t\t**** Welcome to Quiz Game ****\n";
   
    cout<<"\t\t\t****Developed by Preeti Rajdhami****\n";
    cout<<"\t\t\t===========================================\n";
// Input
    cin.get();
 
    string Name;
    int Age;
 
    // Input the details
    cout << "What is your name?"<< endl;
    cin >> Name;
    cout << endl;
    cout << "How old are you?"<< endl;
    cin >> Age;
    cout << endl;
     string Respond;
    cout << "Are you ready to take the quiz " << Name<<endl;
    cout<< "? yes/no" << endl;
    cin >> Respond;
 
    if (Respond == "yes")
     {
        cout << endl;
        cout << " Good luck with the questions " << endl;
        cout<<" There will be 10 questions. "<<endl;
     }
    else
     { 
        cout << "Okay Good Bye! you are dumb" << endl;
        
     }

Question q1;


q1.setValues();

q1.display();


return 0;
}
