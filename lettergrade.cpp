#include<iostream>
using namespace std;

int main(){
 int mark;
 cout<<" your result is:";
 cin>>mark;

   if(mark>100){
    cout<<" invalid result";

 }else if( mark<0){
   cout<<" invalid number";
   }
     else if ( mark>=80){
    cout<<" you have got A+";
  }   else if (mark>=70){
  cout<<" you have got A";
  }
    else if (mark>=60){
   cout<<" you have got A-";}


     else if (mark<40){
         cout<<" you have failed \n";
      cout<<"best of luck for the next time ";}

}





