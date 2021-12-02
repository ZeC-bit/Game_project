#include <iostream>
#include <string>
#include <stdlib.h>
#include "universal.h"
using namespace std;

// play.day
//play.period ==> 1. morning 2. afternoon 3. evening
//play.location ==> 0. Library 1. Garden 2. Student Cafeteria  3. Lecture Room
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
      cout << " Congratulations!!! Iris, Olivia, and Daisy have fallen love with you!!!! " << endl;
      cout << " Coming Christmas, you are not alone!! You are going to have a big party with Iris, Olivia, and Daisy " << endl;
      cout <<  "----------------------------------Game Over---------------------------------" << endl;
    }
    else if(affi_largest >= P)
    {
      if(affi_largest == stat_data.affi_level[0])
      {
        cout << "------------------------------[Iris ENDING]-------------------------" << endl;
        cout << " Congratulations!!! Iris has fallen love with you!!! "<< endl;
        cout << " Coming Christmas, you are not alone!!! You are going to have a happy time" << endl;
        cout << " with Iris!! " << endl;
        cout << setw(55) << " Thank you for playing this Game!!" << endl;
        cout << setw(45) << " CREDITS TO " << endl;
        cout << setw(50) << " PARK HYEON BEOM " << endl;
        cout << setw(50) << " LEE SEUNG HUN " << endl;
        cout <<  "----------------------------------Game Over---------------------------------" << endl;
      }
      else if(affi_largest == stat_data.affi_level[1])
      {
        cout << "------------------------------[Olivia ENDING]----------------------------------" << endl;
        cout << " Congratulations!!! Olivia has fallen love with you!!!! "<< endl;
        cout << " Coming Christmas, you are not alone!! You are going to have a happy time with Olivia!!! " << endl;
        cout <<  "----------------------------------Game Over---------------------------------" << endl;
      }
      else 
      {
        cout << "------------------------------[Daisy ENDING]----------------------------------" << endl;
        cout << " Congratulations!!! Daisy has fallen love with you!!!! "<< endl;
        cout << " Coming Christmas, you are not alone!! You are going to have a happy time with Daisy!!! " << endl;
        cout <<  "----------------------------------Game Over---------------------------------" << endl;
      }
    }
    else if(inti_largest >= Q)
    {
      if(inti_largest == stat_data.inti_level[0])
      {
        cout << "------------------------------[BEST FRIEND IRIS ENDING]-------------------------" << endl;
        cout << " Congratulations!!! Iris has become your best friend!!! "<< endl;
        cout << " Coming Christmas, you are not alone!! You are going to make a Christmas Tree" << endl;
        cout << " with Iris!! " << endl;
        cout << setw(55) << " Thank you for playing this Game!!" << endl;
        cout << setw(45) << " CREDITS TO " << endl;
        cout << setw(50) << " PARK HYEON BEOM " << endl;
        cout << setw(50) << " LEE SEUNG HUN " << endl
        cout <<  "----------------------------------Game Over---------------------------------" << endl;
      }
      else if(inti_largest == stat_data.inti_level[1])
      {
        cout << "------------------------------[BEST FRIEND Olivia ENDING]-------------------------" << endl;
        cout << " Congratulations!!! Olivia has become your best friend!!! "<< endl;
        cout << " Coming Christmas, you are not alone!! You are going to make a Christmas Tree" << endl;
        cout << " with Olivia!! " << endl;
        cout << setw(55) << " Thank you for playing this Game!!" << endl;
        cout << setw(45) << " CREDITS TO " << endl;
        cout << setw(50) << " PARK HYEON BEOM " << endl;
        cout << setw(50) << " LEE SEUNG HUN " << endl;
        cout <<  "----------------------------------Game Over---------------------------------" << endl;
      }
      else
      {
        cout << "------------------------------[BEST FRIEND Daisy ENDING]-------------------------" << endl;
        cout << " Congratulations!!! Daisy has become your best friend!!! "<< endl;
        cout << " Coming Christmas, you are not alone!! You are going to make a Christmas Tree" << endl;
        cout << " with Daisy!! " << endl;
        cout << setw(55) << " Thank you for playing this Game!!" << endl;
        cout << setw(45) << " CREDITS TO " << endl;
        cout << setw(50) << " PARK HYEON BEOM " << endl;
        cout << setw(50) << " LEE SEUNG HUN " << endl;
        cout <<  "----------------------------------Game Over---------------------------------" << endl;
      }
    }
    else if(gpa > N)
    {
      cout << "------------------------------[Dean's List Ending]-----------------------------------" << endl;
      cout << " Congratulations!!! You have obtained the Honor of Dean's List!! " << endl;
      cout << " However, upcoming Christmas will be full of happiness with offers from internships!!!" << endl;
    }
    else
    {
    cout << "------------------------------[SOLO Ending]-----------------------------------" << endl;
    }


  }

}
