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
  int run =1;
  int M, N, P, Q;
  int affi_largest = stat_data.affi_level[0];
  int inti_largest = stat_data.inti_level[0];

  for(int i = 0; i < 3; i++)
  {
      if(stat_data.affi_level[i]>largest)
      {
        largest = stat_data.affi_level[i];
      }
  }
  for(int j = 0; j < 3; j++)
  {
    if(stat_data.inti_level[i]>Largest)
    {
      Largest = stat_data.inti_level[i];
    }
  }
  while (run == 1){
    if(stat_data.affi_level[0] >= M && stat_data.affi_level[1] >= M && stat_data.affi_level[2] >= M)
    {
      cout << "------------------------------[POLYGAMY ENDING]------------------------------" << endl;
      cout << " Congratulations!!! Iris, Olivia, and Daisy all of them have fallen love with you!!! "<< endl;
      cout << " Coming Christmas, you are not alone!!! You are going to have a happy time with " << endl;
      cout << " Iris, Olivia, and Daisy!!! " << endl
      cout << " "
      cout << "Affinity Level: " << stat_data.affi_level[0] << "  Intimacy Level:  " << stat_data.inti_level[0] << endl;
      cout << "Affinity Level: " << stat_data.affi_level[1] << "  Intimacy Level:  " << stat_data.inti_level[1] << endl;
      cout << "Affinity Level: " << stat_data.affi_level[2] << "  Intimacy Level:  " << stat_data.inti_level[2] << endl;
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
      cout <<  "----------------------------------Game Over---------------------------------" << endl;
    }
    else if(affi_largest >= P)
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
         cout << "  | |"<<endl;
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
    }
    else if(inti_largest >= Q)
    {
      if(inti_largest == stat_data.inti_level[0])
      {
        cout << "--------------------------------[BEST FRIEND IRIS ENDING]--------------------------------" << endl;
        cout << " Well Played!!! Iris has become your best friend!!! "<< endl;
        cout << " Coming Christmas, you are not alone!!! You are going to make a Christmas Tree " << endl;
        cout << " with Iris!! " << endl
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
        cout << " with Olivia!! " << endl
        cout << " "
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
    else if(gpa > N)
    {
      cout << "------------------------------[Dean's List Ending]-----------------------------------" << endl;
      cout << " Great!!! You have obtained the Honor of Dean's List!! " << endl;
      cout << " However, upcoming Christmas will be full of happiness with offers from internship!!!" << endl;
      cout << "GPA: " << stat_data.GPA << setfill(' ') << setw(27) <<"  Health Point: " << stat_data.hp << endl;
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
