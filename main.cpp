//Make a C++ program to print grades based on there scored entered using if-else
#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter your Score to see your grades: ";
    cin>>score;
    if(score >= 90)
    {
      cout<<"For the entered score "<<score<<" You get A+"<<endl;
    }
  else if(score >= 80){
  cout<<"For the entered score "<<score<<" You get A"<<endl;
  }
  else if(score >= 60){
  cout<<"For the entered score "<<score<<" You get B+"<<endl;
  }
  else if(score >= 40){
  cout<<"For the entered score "<<score<<" You get B"<<endl;
  }
  else if(score < 40){
  cout<<"For the entered score "<<score<<" You are FAIL"<<endl;
  }
    return 0;
}
