#include<iostream>
using namespace std;
class calender
{int year,month,date,mon;
public:
void getyear();
void getmonthdate();
void excep();
};

void calender :: getyear()
{char op;
cout<<"\n\n	Enter the Year: ";
cin>>year;

if((year==2001)||(year==2007)||(year==2018)||(year==2029)||(year==2035)||(year==2046)||(year==2057)||(year==2063)||(year==2074)||(year==2085)||(year==2091))
{cout<<"	Enter the Month: ";
cin>>mon;
if(mon==1)month=1;else if(mon==2)month=4;
else if(mon==3)month=4;else if(mon==4)month=7;
else if(mon==5)month=2;else if(mon==6)month=5;
else if(mon==7)month=7;else if(mon==8)month=3;
else if(mon==9)month=6;else if(mon==10)month=1;
else if(mon==11)month=4;else if(mon==12)month=6;
}
else if((year==2002)||(year==2013)||(year==2019)||(year==2030)||(year==2041)||(year==2047)||(year==2058)||(year==2069)||(year==2075)||(year==2086)||(year==2097))
{cout<<"	Enter the Month: ";
cin>>mon;
if(mon==1)month=2;else if(mon==2)month=5;
else if(mon==3)month=5;else if(mon==4)month=1;
else if(mon==5)month=3;else if(mon==6)month=6;
else if(mon==7)month=1;else if(mon==8)month=4;
else if(mon==9)month=7;else if(mon==10)month=2;
else if(mon==11)month=5;else if(mon==12)month=7;
}
else if((year==2003)||(year==2014)||(year==2025)||(year==2031)||(year==2042)||(year==2053)||(year==2059)||(year==2070)||(year==2081)||(year==2087)||(year==2098))
{cout<<"	Enter the Month: ";
cin>>mon;
if(mon==1)month=3;else if(mon==2)month=6;
else if(mon==3)month=6;else if(mon==4)month=2;
else if(mon==5)month=4;else if(mon==6)month=7;
else if(mon==7)month=2;else if(mon==8)month=5;
else if(mon==9)month=1;else if(mon==10)month=3;
else if(mon==11)month=6;else if(mon==12)month=1;
}
else if((year==2009)||(year==2015)||(year==2026)||(year==2037)||(year==2043)||(year==2054)||(year==2065)||(year==2071)||(year==2082)||(year==2093)||(year==2099))
{cout<<"	Enter the Month: ";
cin>>mon;
if(mon==1)month=4;else if(mon==2)month=7;
else if(mon==3)month=7;else if(mon==4)month=3;
else if(mon==5)month=5;else if(mon==6)month=1;
else if(mon==7)month=3;else if(mon==8)month=6;
else if(mon==9)month=2;else if(mon==10)month=4;
else if(mon==11)month=7;else if(mon==12)month=2;
}
else if((year==2010)||(year==2021)||(year==2027)||(year==2038)||(year==2049)||(year==2055)||(year==2066)||(year==2077)||(year==2083)||(year==2094)||(year==2100))
{cout<<"	Enter the Month: ";
cin>>mon;
if(mon==1)month=5;else if(mon==2)month=1;
else if(mon==3)month=1;else if(mon==4)month=4;
else if(mon==5)month=6;else if(mon==6)month=2;
else if(mon==7)month=4;else if(mon==8)month=7;
else if(mon==9)month=3;else if(mon==10)month=5;
else if(mon==11)month=1;else if(mon==12)month=3;
}
else if((year==2005)||(year==2011)||(year==2022)||(year==2033)||(year==2039)||(year==2050)||(year==2061)||(year==2067)||(year==2078)||(year==2089)||(year==2095))
{cout<<"	Enter the Month: ";
cin>>mon;
if(mon==1)month=6;else if(mon==2)month=2;
else if(mon==3)month=2;else if(mon==4)month=5;
else if(mon==5)month=7;else if(mon==6)month=3;
else if(mon==7)month=5;else if(mon==8)month=1;
else if(mon==9)month=4;else if(mon==10)month=6;
else if(mon==11)month=2;else if(mon==12)month=4;
}
else if((year==2006)||(year==2017)||(year==2023)||(year==2034)||(year==2045)||(year==2051)||(year==2062)||(year==2073)||(year==2079)||(year==2090))
{cout<<"	Enter the Month: ";
cin>>mon;
if(mon==1)month=7;else if(mon==2)month=3;
else if(mon==3)month=3;else if(mon==4)month=6;
else if(mon==5)month=1;else if(mon==6)month=4;
else if(mon==7)month=6;else if(mon==8)month=2;
else if(mon==9)month=5;else if(mon==10)month=7;
else if(mon==11)month=3;else if(mon==12)month=5;
}
else if((year==2024)||(year==2052)||(year==2080))
{cout<<"	Enter the Month: ";
cin>>mon;
if(mon==1)month=1;else if(mon==2)month=4;
else if(mon==3)month=5;else if(mon==4)month=1;
else if(mon==5)month=3;else if(mon==6)month=6;
else if(mon==7)month=1;else if(mon==8)month=4;
else if(mon==9)month=7;else if(mon==10)month=2;
else if(mon==11)month=5;else if(mon==12)month=7;
}
else if((year==2008)||(year==2036)||(year==2064)||(year==2092))
{cout<<"	Enter the Month: ";
cin>>mon;
if(mon==1)month=2;else if(mon==2)month=5;
else if(mon==3)month=6;else if(mon==4)month=2;
else if(mon==5)month=4;else if(mon==6)month=7;
else if(mon==7)month=2;else if(mon==8)month=5;
else if(mon==9)month=1;else if(mon==10)month=3;
else if(mon==11)month=6;else if(mon==12)month=1;
}
else if((year==2020)||(year==2048)||(year==2076))
{cout<<"	Enter the Month: ";
cin>>mon;
if(mon==1)month=3;else if(mon==2)month=6;
else if(mon==3)month=7;else if(mon==4)month=3;
else if(mon==5)month=5;else if(mon==6)month=1;
else if(mon==7)month=3;else if(mon==8)month=6;
else if(mon==9)month=2;else if(mon==10)month=4;
else if(mon==11)month=7;else if(mon==12)month=2;
}
else if((year==2004)||(year==2032)||(year==2060)||(year==2088))
{cout<<"	Enter the Month: ";
cin>>mon;
if(mon==1)month=4;else if(mon==2)month=7;
else if(mon==3)month=1;else if(mon==4)month=4;
else if(mon==5)month=6;else if(mon==6)month=2;
else if(mon==7)month=4;else if(mon==8)month=7;
else if(mon==9)month=3;else if(mon==10)month=5;
else if(mon==11)month=1;else if(mon==12)month=3;
}
else if((year==2016)||(year==2044)||(year==2072))
{cout<<"	Enter the Month: ";
cin>>mon;
if(mon==1)month=5;else if(mon==2)month=1;
else if(mon==3)month=2;else if(mon==4)month=5;
else if(mon==5)month=7;else if(mon==6)month=3;
else if(mon==7)month=5;else if(mon==8)month=1;
else if(mon==9)month=4;else if(mon==10)month=6;
else if(mon==11)month=2;else if(mon==12)month=4;
}
else if((year==2028)||(year==2056)||(year==2084))
{cout<<"	Enter the Month: ";
cin>>mon;
if(mon==1)month=6;else if(mon==2)month=2;
else if(mon==3)month=3;else if(mon==4)month=6;
else if(mon==5)month=1;else if(mon==6)month=4;
else if(mon==7)month=6;else if(mon==8)month=2;
else if(mon==9)month=5;else if(mon==10)month=7;
else if(mon==11)month=3;else if(mon==12)month=5;
}
else if((year==2012)||(year==2040)||(year==2068)||(year==2096))
{cout<<"	Enter the Month: ";
cin>>mon;
if(mon==1)month=7;else if(mon==2)month=3;
else if(mon==3)month=4;else if(mon==4)month=7;
else if(mon==5)month=2;else if(mon==6)month=5;
else if(mon==7)month=7;else if(mon==8)month=3;
else if(mon==9)month=6;else if(mon==10)month=1;
else if(mon==11)month=4;else if(mon==12)month=6;
}
else
cout<<"Invalid Input";}

void calender :: getmonthdate()
{if(month==1)
{cout<<"	Enter the Date: ";
cin>>date;
switch(date)
{case 1:case 8:case 15:case 22:case 29:cout<<"	The Day is Monday.";break;
case 2:case 9:case 16:case 23:case 30:cout<<"	The Day is Tuesday.";break;
case 3:case 10:case 17:case 24:case 31:cout<<"	The Day is Wednesday.";break;
case 4:case 11:case 18:case 25:cout<<"	The Day is Thursday.";break;
case 5:case 12:case 19:case 26:cout<<"	The Day is Friday.";break;
case 6:case 13:case 20:case 27:cout<<"	The Day is Saturday.";break;
case 7:case 14:case 21:case 28:cout<<"	The Day is Sunday.";break;}}
else if(month==2)
{cout<<"	Enter the Date: ";
cin>>date;
switch(date)
{case 1:case 8:case 15:case 22:case 29:cout<<"	The Day is Tuesday.";break;
case 2:case 9:case 16:case 23:case 30:cout<<"	The Day is Wednesday.";break;
case 3:case 10:case 17:case 24:case 31:cout<<"	The Day is Thursday.";break;
case 4:case 11:case 18:case 25:cout<<"	The Day is Friday.";break;
case 5:case 12:case 19:case 26:cout<<"	The Day is Saturday.";break;
case 6:case 13:case 20:case 27:cout<<"	The Day is Sunday.";break;
case 7:case 14:case 21:case 28:cout<<"	The Day is Monday.";break;}}
else if(month==3)
{cout<<"	Enter the Date: ";
cin>>date;
switch(date)
{case 1:case 8:case 15:case 22:case 29:cout<<"	The Day is Wednesday.";break;
case 2:case 9:case 16:case 23:case 30:cout<<"	The Day is Thursday.";break;
case 3:case 10:case 17:case 24:case 31:cout<<"	The Day is Friday.";break;
case 4:case 11:case 18:case 25:cout<<"	The Day is Saturday.";break;
case 5:case 12:case 19:case 26:cout<<"	The Day is Sunday.";break;
case 6:case 13:case 20:case 27:cout<<"	The Day is Monday.";break;
case 7:case 14:case 21:case 28:cout<<"	The Day is Tuesday.";break;}}
else if(month==4)
{cout<<"	Enter the Date: ";
cin>>date;
switch(date)
{case 1:case 8:case 15:case 22:case 29:cout<<"	The Day is Thursday.";break;
case 2:case 9:case 16:case 23:case 30:cout<<"	The Day is Friday.";break;
case 3:case 10:case 17:case 24:case 31:cout<<"	The Day is Saturday.";break;
case 4:case 11:case 18:case 25:cout<<"	The Day is Sunday.";break;
case 5:case 12:case 19:case 26:cout<<"	The Day is Monday.";break;
case 6:case 13:case 20:case 27:cout<<"	The Day is Tuesday.";break;
case 7:case 14:case 21:case 28:cout<<"	The Day is Wednesday.";break;}}
else if(month==5)
{cout<<"	Enter the Date: ";
cin>>date;
switch(date)
{case 1:case 8:case 15:case 22:case 29:cout<<"	The Day is Friday.";break;
case 2:case 9:case 16:case 23:case 30:cout<<"	The Day is Saturday.";break;
case 3:case 10:case 17:case 24:case 31:cout<<"	The Day is Sunday.";break;
case 4:case 11:case 18:case 25:cout<<"	The Day is Monday.";break;
case 5:case 12:case 19:case 26:cout<<"	The Day is Tuesday.";break;
case 6:case 13:case 20:case 27:cout<<"	The Day is Wednesday.";break;
case 7:case 14:case 21:case 28:cout<<"	The Day is Thursday.";break;}}
else if(month==6)
{cout<<"	Enter the Date: ";
cin>>date;
switch(date)
{case 1:case 8:case 15:case 22:case 29:cout<<"	The Day is Saturday.";break;
case 2:case 9:case 16:case 23:case 30:cout<<"	The Day is Sunday.";break;
case 3:case 10:case 17:case 24:case 31:cout<<"	The Day is Monday.";break;
case 4:case 11:case 18:case 25:cout<<"	The Day is Tuesday.";break;
case 5:case 12:case 19:case 26:cout<<"	The Day is Wednesday.";break;
case 6:case 13:case 20:case 27:cout<<"	The Day is Thursday.";break;
case 7:case 14:case 21:case 28:cout<<"	The Day is Friday.";break;}}
else if(month==7)
{cout<<"	Enter the Date: ";
cin>>date;
switch(date)
{case 1:case 8:case 15:case 22:case 29:cout<<"	The Day is Sunday.";break;
case 2:case 9:case 16:case 23:case 30:cout<<"	The Day is Monday.";break;
case 3:case 10:case 17:case 24:case 31:cout<<"	The Day is Tuesday.";break;
case 4:case 11:case 18:case 25:cout<<"	The Day is Wednesday.";break;
case 5:case 12:case 19:case 26:cout<<"	The Day is Thursday.";break;
case 6:case 13:case 20:case 27:cout<<"	The Day is Friday.";break;
case 7:case 14:case 21:case 28:cout<<"	The Day is Saturday.";break;}}
}

void calender::excep()
{if((year%4==0) && (year%100!=0))
{if (mon==2)
switch(date)
{case 29:case 30:case 31:cout<<"\n	It's a LEAP YEAR";break;}}
else if(year%100==0)
{cout<<"\nThis is not a Leap Year";}
else if(year%400==0)
{if (mon==2)
switch(date)
{case 29:case 30:case 31:cout<<"\n	It's a LEAP YEAR";break;}}
else
{cout<<"\nThis is not a Leap Year";}
}

int main(void)
{cout<<"\n			|------Hundread Year Calender------|\n\n";

calender obj;
for(int i=0;i<1;i++)
{obj.getyear();
obj.getmonthdate();
obj.excep();
}
}
