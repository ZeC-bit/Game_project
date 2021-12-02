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
// M = specific value
  int run = 1;
  int poly_flag;
  int love_flag;
  int friend_flag;
  int good_student_flag;

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
    if(stat_data.affi_level[0] >= poly_flag && stat_data.affi_level[1] >= poly_flag && stat_data.affi_level[2] >= poly_flag)
    {
      cout << "------------------------------[POLYGAMY ENDING]------------------------------" << endl;
      cout << " Congratulations!!! Iris, Olivia, and Daisy all of them have fallen love with you!!! ";
      getchar();
      cout << " Coming Christmas, you are not alone!!! You are going to have a happy time with ";
      getchar();
      cout << " Iris, Olivia, and Daisy!!! " << endl;
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
    else if(affi_largest == stat_data.affi_level[1])
    {
      cout << "--------------------------------[OLIVIA ENDING]--------------------------------" << endl;
      cout << " Congratulations!!! Olivia has fallen in love with you!!! "<< endl;
      cout << " Coming Christmas, you are not alone!!! You are going to have a happy time " << endl;
      cout << " with OLivia!! " << endl;
      cout << " ";
      cout << "Affinity Level: " << stat_data.affi_level[1] << "  Intimacy Level:  " << stat_data.inti_level[1] << endl;
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
    else if(affi_largest >= love_flag)
    {
      if(affi_largest == stat_data.affi_level[0])
      {
        cout << "--------------------------------[Iris ENDING]--------------------------------" << endl;
        cout << " Congratulations!!! Iris has fallen love with you!!! "<< endl;
        cout << " Coming Christmas, you are not alone!!! You are going to have a happy time " << endl;
        cout << " with Iris!! " << endl
        cout << " "
        cout << "Affinity Level: " << stat_data.affi_level[0] << "  Intimacy Level:  " << stat_data.inti_level[0] << endl;
        cout << "GPA: " << stat_data.GPA << setfill(' ') << setw(27) <<"  Health Point: " << stat_data.hp << endl;
        cout << setw(55) << " Thank you for playing this Game!!" << endl;
        cout << setw(45) << " CREDITS TO " << endl;
        cout << setw(47) << " PARK HYEON BEOM " << endl;
        cout << setw(46) << " LEE SEUNG HUN " << endl;
        // Christmas Tree For Happy Ending
        int num=6,count=0;
         int mid=30;
        cout<<""; count=num-2;int joint=0; while(count>0)
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
          cout<<endl;
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
         cout << "  | |" << endl;
      }
        cout <<  "----------------------------------Game Over---------------------------------" << endl;
  }
      else if(affi_largest == stat_data.affi_level[1])
      {
        cout << "--------------------------------[OLIVIA ENDING]--------------------------------" << endl;
        cout << " Congratulations!!! Olivia has fallen love with you!!! "<< endl;
        cout << " Coming Christmas, you are not alone!!! You are going to have a happy time " << endl;
        cout << " with OLivia!! " << endl
        cout << " "
        cout << "Affinity Level: " << stat_data.affi_level[1] << "  Intimacy Level:  " << stat_data.inti_level[1] << endl;
        cout << "GPA: " << stat_data.GPA << setfill(' ') << setw(27) <<"  Health Point: " << stat_data.hp << endl;
        cout << setw(55) << " Thank you for playing this Game!!" << endl;
        cout << setw(45) << " CREDITS TO " << endl;
        cout << setw(47) << " PARK HYEON BEOM " << endl;
        cout << setw(46) << " LEE SEUNG HUN " << endl;
        // Christmas Tree For Happy Ending
        int num=6,count=0;
         int mid=30;
        cout<<""; count=num-2;int joint=0; while(count>0)
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
          cout<<endl;
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
       }
        cout <<  "----------------------------------Game Over---------------------------------" << endl;
      }
      else
      {
        cout << "--------------------------------[DAISY ENDING]--------------------------------" << endl;
        cout << " Congratulations!!! Daisy has fallen love with you!!! "<< endl;
        cout << " Coming Christmas, you are not alone!!! You are going to have a happy time " << endl;
        cout << " with Daisy!! " << endl
        cout << " "
        cout << "Affinity Level: " << stat_data.affi_level[2] << "  Intimacy Level:  " << stat_data.inti_level[2] << endl;
        cout << "GPA: " << stat_data.GPA << setfill(' ') << setw(27) <<"  Health Point: " << stat_data.hp << endl;
        cout << setw(55) << " Thank you for playing this Game!!" << endl;
        cout << setw(45) << " CREDITS TO " << endl;
        cout << setw(47) << " PARK HYEON BEOM " << endl;
        cout << setw(46) << " LEE SEUNG HUN " << endl;
        // Christmas Tree For Happy Ending
        int num=6,count=0;
         int mid=30;
        cout<<"";
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
          cout<<endl;
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
       }
        cout <<  "----------------------------------Game Over---------------------------------" << endl;
      }
    }
    else if(inti_largest >= friend_flag)
    {
      if(inti_largest == stat_data.inti_level[0])
      {
        cout << "--------------------------------[BEST FRIEND IRIS ENDING]--------------------------------" << endl;
        cout << " Well Played!!! Iris has become your best friend!!! "<< endl;
        cout << " Coming Christmas, you are not alone!!! You are going to make a Christmas Tree " << endl;
        cout << " with Iris!! " << endl;
        cout << " ";
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
        cout << " with Daisy!! " << endl
        cout << " "
        cout << "Affinity Level: " << stat_data.affi_level[2] << "  Intimacy Level:  " << stat_data.inti_level[2] << endl;
        cout << "GPA: " << stat_data.GPA << setfill(' ') << setw(27) <<"  Health Point: " << stat_data.hp << endl;
        cout << setw(55) << " Thank you for playing this Game!!" << endl;
        cout << setw(45) << " CREDITS TO " << endl;
        cout << setw(47) << " PARK HYEON BEOM " << endl;
        cout << setw(46) << " LEE SEUNG HUN " << endl;
        cout <<  "----------------------------------Game Over---------------------------------" << endl;
      }
    }
    else if(gpa > good_student_flag)
    {
      cout << "------------------------------[Hidden Ending revealed!]------------------------------"
      cout << "--------------------------------[Dean's List Ending]---------------------------------" << endl;
      cout << " Great!!! You have obtained the Honor of Dean's List!! " << endl;
      cout << "GPA: " << stat_data.GPA << setfill(' ') << setw(27) <<"  Health Point: " << stat_data.hp << endl;
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
    {
      cout << "------------------------------[SOLO Ending]-----------------------------------" << endl;
      cout << " Coming Christmas, SADLY, you are alone..... " << endl;
      cout << " Don't Get Frustrated!! You Still have Chance!!  " << endl;
      cout << " Try to be more Romantic Next Time!! " << endl;
      cout << " "
      cout << "GPA: " << stat_data.GPA << setfill(' ') << setw(27) <<"  Health Point: " << stat_data.hp << endl;
      cout << setw(55) << " Thank you for playing this Game!!" << endl;
      cout << setw(45) << " CREDITS TO " << endl;
      cout << setw(47) << " PARK HYEON BEOM " << endl;
      cout << setw(46) << " LEE SEUNG HUN " << endl;
    }
    run = 0;
  }
}
