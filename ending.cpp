#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "universal.h"
using namespace std;

// Ending file has diverse types of Endings with Pologamy Ending, Girl Friend Ending,
// Best Friend Ending, Dean's List Ending, and lastly Solo Ending.
// Perid of the day ==> 1. morning 2. afternoon 3. evening
// Location ==> 0. Library 1. Garden 2. Student Cafeteria  3. Lecture Room
// Iris = [0], Olivia = [1], Daisy = [2]

void ending(status &stat_data){
  int run = 1;
  double poly_flag = 6;
  double love_flag = 10;
  double friend_flag = 6.5;
  double good_student_flag = 4;

  int affi_largest = stat_data.affi_level[0];
  int inti_largest = stat_data.inti_level[0];

  for(int i = 0; i < 3; i++)
  {
    if(stat_data.affi_level[i] > affi_largest) {
      affi_largest = stat_data.affi_level[i];
    }
    if(stat_data.inti_level[i] > inti_largest) {
      inti_largest = stat_data.inti_level[i];
    }
  }


  while (run == 1) {
    //If everyone's affinity level is beyond the poly_flag, you become lover with all of them
    if(stat_data.affi_level[0] >= poly_flag && stat_data.affi_level[1] >= poly_flag && stat_data.affi_level[2] >= poly_flag)
    {
      cout << "------------------------------[POLYGAMY ENDING]------------------------------" << endl;
      cout << " Congratulations!!! Iris, Olivia, and Daisy all of them have fallen love with you!!! " << endl;
      cout << " Coming Christmas, you are not alone!!! You are going to have a happy time with " << endl;
      cout << " Iris, Olivia, and Daisy!!! " << endl;
      cout << " You have gained All you wanted " << endl;
      cout << " Going outside the street, everyone is looking at you with three girl friends " << endl;
      cout << " Then, You start to laugh out loud " << endl;
      cout << " This Christmas is full of bliss and happiness " << endl;
      cout << " What a Successful Ending!!! " << endl;
      cout << " ";
      cout << stat_data.names[0] << " Affinity Level: " << stat_data.affi_level[0] << "  Intimacy Level:  " << stat_data.inti_level[0];
      getchar();
      cout << stat_data.names[1] << " Affinity Level: " << stat_data.affi_level[1] << "  Intimacy Level:  " << stat_data.inti_level[1];
      getchar();
      cout << stat_data.names[2] << " Affinity Level: " << stat_data.affi_level[2] << "  Intimacy Level:  " << stat_data.inti_level[2];
      getchar();
      cout << "GPA: " << stat_data.GPA << setfill(' ') << setw(27) << "  Health Point: " << stat_data.hp << endl;
      getchar();
      cout << setw(55) << " Thank you for playing this Game!!";
      getchar();
      cout << setw(45) << " CREDITS TO " << endl;
      cout << setw(47) << " PARK HYEON BEOM " << endl;
      cout << setw(46) << " LEE SEUNG HUN " << endl;
      getchar();
      // Christmas Tree For Happy Ending
      int num = 6, count = 0;
      int mid = 30;
      cout << "";
      count = num - 2;
      int joint = 0;
      while(count > 0)
       {
         for(int row=0;row<num-count+1;row++) {
           for(int blank=num-joint+mid;blank>=row; blank--)
            {
              cout << " ";
            }
            for(int left =0;left<=row+joint;left++)
            {
              cout << "*";
            }
            for(int right =0;right<=row+joint;right++)
            {
              cout << "*";
            }
        cout << endl;
      }
    count--;
    joint++;
    }
    int v;
    for(int stem = 0; stem < 2; stem++)
     {
       if(num == 4)
        v = 1;
       else
        v=0;
       cout << setw(v + mid + num + num - num / 2);
       cout << "  | |" << endl;
     }
      cout <<  "----------------------------------Game Over---------------------------------" << endl;
    }
    // Otherwise, if at least one of the character's affinity level is greater than the lover_flag,
    // you become a lover with the character with the highest affinity level
    else if(affi_largest >= love_flag)
    {
      if(affi_largest == stat_data.affi_level[0])
      {
        cout << "--------------------------------[IRIS ENDING]--------------------------------" << endl;
        cout << " Congratulations!!! IRIS has fallen love with you!!! "<< endl;
        cout << " Coming Christmas, you are not alone!!! You are going to have a happy time " << endl;
        cout << " with Iris!! ";
        getchar();
        cout << " Since Iris is in the dean's list, she will help you with your academic support as well!" << endl;
        cout << " This Christmas, you have gained both love as well as GPA..." << endl;
        cout << " What a Successful Ending!!!" << endl;
        cout << " ";
        cout << "Affinity Level: " << stat_data.affi_level[0] << "  Intimacy Level:  " << stat_data.inti_level[0] << endl;
        cout << "GPA: " << stat_data.GPA << setfill(' ') << setw(27) <<"  Health Point: " << stat_data.hp << endl;
        cout << setw(55) << " Thank you for playing this Game!!" << endl;
        cout << setw(45) << " CREDITS TO " << endl;
        cout << setw(47) << " PARK HYEON BEOM " << endl;
        cout << setw(46) << " LEE SEUNG HUN " << endl;
        // Christmas Tree For Happy Ending
        int num=6, count=0;
          int mid = 30;
        cout << "";
        count=num-2;
        int joint=0;
        while(count>0)
          {
            for(int row=0;row<num-count+1;row++) { for(int blank=num-joint+mid;blank>=row; blank--)
              {
                cout<<" ";
              }
            for(int left =0;left<=row+joint;left++)
              {
                cout<<"*";
              }
            for(int right =0;right<=row+joint;right++)
              {
                cout<<"*";
              }
          cout << endl;
        }
        count--;
        joint++;
        }
        int v;
        for(int stem = 0;stem<2;stem++)
          {
            if(num==4)
                v=1;
            else
                v=0;
            cout << setw(v+mid+num+num-num/2);
            cout << "  | |"<<endl;
          cout <<  "----------------------------------Game Over---------------------------------" << endl;
          }
        }
      else if(affi_largest == stat_data.affi_level[1])
      {
        cout << "--------------------------------[OLIVIA ENDING]--------------------------------" << endl;
        cout << " Congratulations!!! Olivia has fallen love with you!!! "<< endl;
        cout << " Coming Christmas, you are not alone!!! You are going to have a happy time " << endl;
        cout << " with Olivia!! ";
        getchar();
        cout << " As Olivia is your hallmate who is one of the members in Hall Readmission, " << endl;
        cout << " You have greater chance for getting readmitted for the next year and so on..!!" << endl;
        cout << " This Christmas, You have gained both love as well as readmission for your University Life!! " << endl;
        cout << " ";
        cout << "Affinity Level: " << stat_data.affi_level[1] << "  Intimacy Level:  " << stat_data.inti_level[1] << endl;
        cout << "GPA: " << stat_data.GPA << setfill(' ') << setw(27) <<"  Health Point: " << stat_data.hp << endl;
        cout << setw(55) << " Thank you for playing this Game!!" << endl;
        cout << setw(45) << " CREDITS TO " << endl;
        cout << setw(47) << " PARK HYEON BEOM " << endl;
        cout << setw(46) << " LEE SEUNG HUN " << endl;
        // Christmas Tree For Happy Ending
        int num = 6, count = 0;
        int mid = 30;
        cout << "";
        count = num - 2;
        int joint = 0;
        while(count > 0)
         {
           for(int row=0;row<num-count+1;row++) {
             for(int blank=num-joint+mid;blank>=row; blank--)
              {
                cout << " ";
              }
              for(int left =0;left<=row+joint;left++)
              {
                cout << "*";
              }
              for(int right =0;right<=row+joint;right++)
              {
                cout << "*";
              }
          cout << endl;
        }
      count--;
      joint++;
      }
      int v;
      for(int stem = 0; stem < 2; stem++)
       {
         if(num == 4)
          v = 1;
         else
          v=0;
         cout << setw(v + mid + num + num - num / 2);
         cout << "  | |" << endl;
       }
        cout <<  "----------------------------------Game Over---------------------------------" << endl;
      }
      else
      {
        cout << "--------------------------------[DAISY ENDING]--------------------------------" << endl;
        cout << " Congratulations!!! Daisy has fallen love with you!!! "<< endl;
        cout << " Coming Christmas, you are not alone!!! You are going to have a happy time " << endl;
        cout << " with Daisy!! ";
        getchar();
        cout << " Since Daisy is your high school class mate as well as a super rich,  " << endl;
        cout << " You went to Cruise Travelling in Europe this Christmas and had a wonderful time there!!!" << endl;
        cout << " This Christmas, You have gained both love as well as money !!" << endl;
        cout << " ";
        cout << "Affinity Level: " << stat_data.affi_level[2] << "  Intimacy Level:  " << stat_data.inti_level[2] << endl;
        cout << "GPA: " << stat_data.GPA << setfill(' ') << setw(27) <<"  Health Point: " << stat_data.hp << endl;
        cout << setw(55) << " Thank you for playing this Game!!" << endl;
        cout << setw(45) << " CREDITS TO " << endl;
        cout << setw(47) << " PARK HYEON BEOM " << endl;
        cout << setw(46) << " LEE SEUNG HUN " << endl;
        // Christmas Tree For Happy Ending
        int num = 6, count = 0;
        int mid = 30;
        cout << "";
        count = num - 2;
        int joint = 0;
        while(count > 0)
         {
           for(int row=0;row<num-count+1;row++) {
             for(int blank=num-joint+mid;blank>=row; blank--)
              {
                cout << " ";
              }
              for(int left =0;left<=row+joint;left++)
              {
                cout << "*";
              }
              for(int right =0;right<=row+joint;right++)
              {
                cout << "*";
              }
          cout << endl;
        }
        count--;
        joint++;
        }
        int v;
        for(int stem = 0; stem < 2; stem++)
        {
          if(num == 4)
            v = 1;
          else
            v=0;
          cout << setw(v + mid + num + num - num / 2);
          cout << "  | |" << endl;
        }
          cout <<  "----------------------------------Game Over---------------------------------" << endl;
      }
    }
    // Otherwise, if the affinity level of all three characters are below the lover_flag
    // Next, consider the intimacy level of three characters
    // If at least one of them has intimacy level greater than the inti_flag,
    // You become a best friend with the character with highest intimacy level
    else if(inti_largest >= friend_flag)
    {
      if(inti_largest == stat_data.inti_level[0])
      {
        cout << "--------------------------------[BEST FRIEND IRIS ENDING]--------------------------------" << endl;
        cout << " Well Played!!! Iris has become your best friend!!! "<< endl;
        cout << " Coming Christmas, you are not alone!!! You are going to make a Christmas Tree " << endl;
        cout << " with Iris!! " << endl;
        cout << " Iris is your Best Friend! You can get help for assignments if you get stucked " << endl;
        cout << " "
        cout << "Affinity Level: " << stat_data.affi_level[0] << "  Intimacy Level:  " << stat_data.inti_level[0] << endl;
        cout << "GPA: " << stat_data.GPA << setfill(' ') << setw(27) <<"  Health Point: " << stat_data.hp << endl;
        cout << setw(55) << " Thank you for playing this Game!!" << endl;
        cout << setw(45) << " CREDITS TO " << endl;
        cout << setw(47) << " PARK HYEON BEOM " << endl;
        cout << setw(46) << " LEE SEUNG HUN " << endl;
        cout <<  "----------------------------------Game Over---------------------------------" << endl;
      }
      else if(inti_largest == stat_data.inti_level[1])
      {
        cout << "--------------------------------[BEST FRIEND OLIVIA ENDING]--------------------------------" << endl;
        cout << " Well Played!!! Olivia has become your best friend!!! "<< endl;
        cout << " Coming Christmas, you are not alone!!! You are going to make a Christmas Tree " << endl;
        cout << " with Olivia!! " << endl;
        cout << " Olivia is your Best Friend! Since she is your hallmate,  " << endl;
        cout << " You can have a wonderful hall life!!" << endl;
        cout << " ";
        cout << "Affinity Level: " << stat_data.affi_level[1] << "  Intimacy Level:  " << stat_data.inti_level[1] << endl;
        cout << "GPA: " << stat_data.GPA << setfill(' ') << setw(27) <<"  Health Point: " << stat_data.hp << endl;
        cout << setw(55) << " Thank you for playing this Game!!" << endl;
        cout << setw(45) << " CREDITS TO " << endl;
        cout << setw(47) << " PARK HYEON BEOM " << endl;
        cout << setw(46) << " LEE SEUNG HUN " << endl;
        cout <<  "----------------------------------Game Over---------------------------------" << endl;
      }
      else
      {
        cout << "--------------------------------[BEST FRIEND DAISY ENDING]--------------------------------" << endl;
        cout << " Well Played!!! Daisy has become your best friend!!! "<< endl;
        cout << " Coming Christmas, you are not alone!!! You are going to make a Christmas Tree " << endl;
        cout << " with Daisy!! " << endl;
        cout << " Daisy is your Best Friend! Since she was your high school mate,  " << endl;
        cout << " and Super Rich, she will buy you dinner many times!!! " << endl;
        cout << " ";
        cout << "Affinity Level: " << stat_data.affi_level[2] << "  Intimacy Level:  " << stat_data.inti_level[2] << endl;
        cout << "GPA: " << stat_data.GPA << setfill(' ') << setw(27) <<"  Health Point: " << stat_data.hp << endl;
        cout << setw(55) << " Thank you for playing this Game!!" << endl;
        cout << setw(45) << " CREDITS TO " << endl;
        cout << setw(47) << " PARK HYEON BEOM " << endl;
        cout << setw(46) << " LEE SEUNG HUN " << endl;
        cout <<  "----------------------------------Game Over---------------------------------" << endl;
      }
    }
    // Otherwise, you have not become a lover nor best friend with our characters
    // Which is actually very difficult to achieve.
    // However, if you maintained you GPA very high, you get the hidden ending
    else if( stat_data.GPA > good_student_flag)
    {
      cout << "------------------------------[Hidden Ending revealed!]------------------------------" << endl;
      cout << "--------------------------------[Dean's List Ending]---------------------------------" << endl;
      cout << " Great!!! You have obtained the Honor of Dean's List!! " << endl;
      cout << " GPA: " << stat_data.GPA << setfill(' ') << setw(27) <<"  Health Point: " << stat_data.hp << endl;
      cout << " You spend the Christmas Eve at HW311 to prepare for next sem" << endl;
      cout << " You feel somewhat lonely, so you move to Chiwah Learning Commons" << endl;
      cout << " However, there is no one in Chiwah because it's Christmas Eve" << endl;
      cout << " While everyone else is spending their Christmas outside," << endl;
      cout << " You bite the loneliness inside and keep on honing your programming skills" << endl;
      cout << " Today's sorrow will be the seed for tomorrow's bright victory" << endl;
      cout << " Lonely programmer, one day, you will shine brightly" << endl;
      cout << " We present this game for those who have discovered this ending" << endl;

      cout << setw(55) << " Thank you for playing this Game!!" << endl;
      cout << setw(45) << " CREDITS TO " << endl;
      cout << setw(47) << " PARK HYEON BEOM " << endl;
      cout << setw(46) << " LEE SEUNG HUN " << endl;
    }
    else
    // Finally, if non of the above, it is the solo ending
    {
      cout << "--------------------------------[SOLO Ending]---------------------------------" << endl;
      cout << " Coming Christmas, SADLY, you are alone..... " << endl;
      cout << " It is your 23 times of yourself spending Christmas alone..." << endl;
      cout << " When you look at outside from your home, you see numerous of couples hanging out " << endl;
      cout << " Since you get bored of watching Christmas movies at home, you plan to study for next semester. " << endl;
      cout << " Feeling depressed, you decide to immerse yourself into the game, 'Under the Mistletoe' " << endl;
      cout << " Don't Get Frustrated!! You Still have Chance!!  " << endl;
      cout << " Try to be more Romantic or Friendly Next Time!! " << endl;

      cout << " ";
      cout << "GPA: " << stat_data.GPA << setfill(' ') << setw(27) <<"  Health Point: " << stat_data.hp << endl;
      cout << setw(55) << " Thank you for playing this Game!!" << endl;
      cout << setw(45) << " CREDITS TO " << endl;
      cout << setw(47) << " PARK HYEON BEOM " << endl;
      cout << setw(46) << " LEE SEUNG HUN " << endl;
    }
    run = 0;
  }
}
