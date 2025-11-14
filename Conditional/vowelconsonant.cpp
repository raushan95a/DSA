#include<iostream>
using namespace std;
int main(){
   char ch;
   cout<<"Enter a character :";
   cin>>ch;
   //cout<<(int)ch<<endl;
   //a to z-> 97 to 122
   // A to Z -> 65 to 90
   int ascii=(int)ch;
      if((ascii>=65 && ascii<=90)||(ascii>=97 && ascii<=122)) {
        cout<<"the character is alphabet\n";
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        cout<<"vowel";
        else cout<<"consonant";
      }
      else cout<<"not an alphabet";
    return 0;

}
