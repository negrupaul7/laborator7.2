#include<iostream>
#include<fstream>

using namespace std;

int exista(int);

int main()
{
 fstream fd;
 int s, c1, c2;
 char mesaj;
 mesaj='d';
 while(tolower(mesaj)=='d')
      {
       cout <<"Introduceti setul (s, c1, c2) : ";
       cin >> s >> c1 >> c2;
       if(exista(s))
         {
          cout <<"Sectia a mai fost introdusa" << endl;
         }
        else
            {
             fd.open("fdate.txt", ios::app);
             fd << s << '\t' << c1 << '\t' << c2;
             fd.close();
            }
        cout <<"Mai introduceti date? (d/n) ";
        cin.ignore();
        cin >> mesaj;
      }
 return 0;
}



