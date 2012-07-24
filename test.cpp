#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

void
showUNO_color (int color, string S);
void
showUNO (int color, int N);

int
main ()
{
  showUNO ('R', 8);
  showUNO ('G', 5);
  showUNO ('B', 0);
  showUNO ('Y', 3);
  showUNO ('G', 10);
  showUNO ('R', 11);
  showUNO ('Y', 12);
  showUNO (-1, 13);
  showUNO (-1, 14);
  return 0;
}

void
showUNO (int color, int N)
{
if(N>=0&&N<=9){char temp[3];sprintf(temp,"%d",N);showUNO_color(color,string(temp));}
else if(N==10)showUNO_color(color, "reverse");
else if(N==11)showUNO_color(color, "skip");
else if(N==12)showUNO_color(color, "+2");
else if(N==13)showUNO_color(color, "wild");
else if(N==14)showUNO_color(color, "+4");
}
void
showUNO_color (int color, string S)
{
  int fixed=11;
  int lenS=S.length();
  switch (color)
    {
    case 'R':
      cout << "\033[41;37m" << "===========" << "\033[0m" << endl;
      cout << "\033[47;31m" << "#" << S << "\033[0m";
      for(int i=0;i<fixed-lenS-2;i++)
	      cout << "\033[41;37m" << " " << "\033[0m";
      cout << "\033[41;37m" << "#" << "\033[0m" << endl;
      cout << "\033[41;37m" << "#         #" << "\033[0m" << endl;
      cout << "\033[47;31m" << "#    " << S.c_str()[0] << "    #" << "\033[0m" << endl;
      cout << "\033[41;37m" << "#         #" << "\033[0m" << endl;
      	cout << "\033[41;37m" << "#" << "\033[0m";
      for(int i=0;i<fixed-lenS-2;i++)
      	cout << "\033[41;37m" << " " << "\033[0m";
      cout << "\033[47;31m" << S << "#" << "\033[0m" << endl;
      cout << "\033[41;37m" << "===========" << "\033[0m" << endl;
      break;
    case 'Y':
      cout << "\033[43;37m" << "===========" << "\033[0m" << endl;
      cout << "\033[47;33m" << "#" << S << "\033[0m";
      for(int i=0;i<fixed-lenS-2;i++)
	      cout << "\033[43;37m" << " " << "\033[0m";
      cout << "\033[43;37m" << "#" << "\033[0m" << endl;
      cout << "\033[43;37m" << "#         #" << "\033[0m" << endl;
      cout << "\033[47;33m" << "#    " << S.c_str()[0] << "    #" << "\033[0m" << endl;
      cout << "\033[43;37m" << "#         #" << "\033[0m" << endl;
      cout << "\033[43;37m" << "#" << "\033[0m";
      for(int i=0;i<fixed-lenS-2;i++)
	      cout << "\033[43;37m" << " " << "\033[0m";
      cout << "\033[47;33m" << S << "#" << "\033[0m" << endl;
      cout << "\033[43;37m" << "===========" << "\033[0m" << endl;
      break;
    case 'B':
      cout << "\033[44;37m" << "===========" << "\033[0m" << endl;
      cout << "\033[47;34m" << "#" << S << "\033[0m";
      for(int i=0;i<fixed-lenS-2;i++)
	      cout << "\033[44;37m" << " " << "\033[0m";
      cout << "\033[44;37m" << "#" << "\033[0m" << endl;
      cout << "\033[44;37m" << "#         #" << "\033[0m" << endl;
      cout << "\033[47;34m" << "#    " << S.c_str()[0] << "    #" << "\033[0m" << endl;
      cout << "\033[44;37m" << "#         #" << "\033[0m" << endl;
      cout << "\033[44;37m" << "#" << "\033[0m";
      for(int i=0;i<fixed-lenS-2;i++)
	      cout << "\033[44;37m" << " " << "\033[0m";
      cout << "\033[47;34m" << S << "#" << "\033[0m" << endl;
      cout << "\033[44;37m" << "===========" << "\033[0m" << endl;
      break;
    case 'G':
      cout << "\033[42;37m" << "===========" << "\033[0m" << endl;
      cout << "\033[47;32m" <<  "#" << S << "\033[0m";
      for(int i=0;i<fixed-lenS-2;i++)
	      cout << "\033[42;37m" << " " << "\033[0m";
      cout << "\033[42;37m" << "#" << "\033[0m" << endl;
      cout << "\033[42;37m" << "#         #" << "\033[0m" << endl;
      cout << "\033[47;32m" << "#    " << S.c_str()[0] << "    #" << "\033[0m" << endl;
      cout << "\033[42;37m" << "#         #" << "\033[0m" << endl;
      cout << "\033[42;37m" << "#" << "\033[0m";
      for(int i=0;i<fixed-lenS-2;i++)
	      cout << "\033[42;37m" << " " << "\033[0m";
      cout << "\033[47;32m" << S << "#" << "\033[0m" << endl;
      cout << "\033[42;37m" << "===========" << "\033[0m" << endl;
      break;
    case -1:
//line1
      cout << "\033[42;37m" << "=====" << "\033[0m" ;
      cout << "\033[43;37m" << "======" << "\033[0m" << endl;
//line2
      cout << "\033[42;37m" <<  "#" << S << "\033[0m";
      for(int i=0;i<fixed/2-lenS-1;i++)
	      cout << "\033[42;37m" << " " << "\033[0m";
      for(int i=0;i<fixed/2;i++)
	      cout << "\033[43;37m" << " " << "\033[0m";
      cout << "\033[43;37m" << "#" << "\033[0m" << endl;
//line3
      cout << "\033[42;37m" << "#    " << "\033[0m" ;
      cout << "\033[43;37m" << "     #" << "\033[0m" << endl;
//line4      
      cout << "\033[47;35m" << "#    " << S.c_str()[0] << "    #" << "\033[0m" << endl;
//line5      
      cout << "\033[44;37m" << "#    " << "\033[0m" ;
      cout << "\033[41;37m" << "     #" << "\033[0m" << endl;
//lin6      
      cout << "\033[44;37m" << "#" << "\033[0m";
      for(int i=0;i<fixed/2-1;i++)
	      cout << "\033[44;37m" << " " << "\033[0m";
      for(int i=0;i<fixed/2-lenS;i++)
	      cout << "\033[41;37m" << " " << "\033[0m";
      cout << "\033[41;37m" << S << "#" << "\033[0m" << endl;
//line7      
      cout << "\033[44;37m" << "=====" << "\033[0m" ;
      cout << "\033[41;37m" << "======" << "\033[0m" << endl;
      break;
    }
return;
}

