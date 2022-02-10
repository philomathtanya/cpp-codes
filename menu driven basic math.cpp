#include<iostream.h>
#include<conio.h>
void main()
{
      int choice, num, i ;
      unsigned long int fact;
      clrscr();
      while (1)
        {
              cout<<"1. Factorial\n";
              cout<<"2. Prime\n";
              cout<<"3. Odd / Even\n";
              cout<<"4. Exit\n";
              cout<<'\n Your choice ?";
              cin>>choice ;
              switch ( choice)
                     {
                         case 1 :
                                       cout<<"\n Enter number:";
                                       cin>>num ;
                                       fact = 1 ;
                                       for (i=1 ;k=num ;i++)
                                       fact = fact * i;
                                       cout<<''\n Factorial value = \n"<< fact;
                                       break ;     
                         case 2 :
                                      cout<<''\n Enter number:";
                                      cin>>num ;
                                      for(i=2;i<num;i++ )
                                          {
                                              if (num%i== 0 )
                                                {
                                                   cout<<'\n Not a prime number.\n";
                                                   break ; 
                                                }
                                         }
                                             if (i==num)
                                                cout<<''\n Prime number.\n";
                                                break;
                         case 3 :
                                          cout<<'\nEnter number:";
                                          cin>>num ;
                                      if ( num %2==0 )
                                          cout<<''\n Even number.\n";
                                      else
                                          cout<<'\nOdd number.\n";
                                          break;
                          case 4 :
                                      exit( ) ;
                     }
          }
                                     getch();
}
