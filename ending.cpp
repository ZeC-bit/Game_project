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
  int M, N;
  while (run == 1){
    if(input_stat->affi_level[0] >= M && input_stat->affi_level[1] >= M && input_stat->affi_level[2] >= M)
    {
      cout << "------------------------------[POLYGAMY ENDING]------------------------------" << endl;
      cout << " Congratulations!!! Iris, Olivia, and Daisy have fallen love with you!!!! " << endl;
      cout << " Coming Christmas, you are not alone!! You are going to have a big party with Iris, Olivia, and Daisy " << endl;
      cout <<  "----------------------------------Game Over---------------------------------" << endl;
    }
    else if(input_stat->affi_level[0] > input_stat->affi_level[1] && input_stat->affi_level[0] > input_stat->affi_level[2])
    {
      cout << "------------------------------[IRIS ENDING]----------------------------------" << endl;
      cout << " Congratulations!!! Iris has fallen love with you!!!! "<< endl;
      cout << " Coming Christmas, you are not alone!! You are going to have a happy time with Iris!!! " << endl;
      cout <<  "----------------------------------Game Over---------------------------------" << endl;
    }
    else if(input_stat->affi_level[1] > input_stat->affi_level[0] && input_stat->affi_level[1] > input_stat->affi_level[2])
    {
      cout << "------------------------------[Olivia ENDING]----------------------------------" << endl;
      cout << " Congratulations!!! Olivia has fallen love with you!!!! "<< endl;
      cout << " Coming Christmas, you are not alone!! You are going to have a happy time with Olivia!!! " << endl;
      cout <<  "----------------------------------Game Over---------------------------------" << endl;
    }
    else if(input_stat->affi_level[2] > input_stat->affi_level[0] && input_stat->affi_level[2] > input_stat->affi_level[1])
    {
      cout << "------------------------------[Daisy ENDING]----------------------------------" << endl;
      cout << " Congratulations!!! Daisy has fallen love with you!!!! "<< endl;
      cout << " Coming Christmas, you are not alone!! You are going to have a happy time with Daisy!!! " << endl;
      cout <<  "----------------------------------Game Over---------------------------------" << endl;
    }
    else if(input_stat->inti_level[0] > input_stat->inti_level[1] && input_stat->inti_level[0] > input_stat->inti_level[2])
    {
      cout << "------------------------------[Friend Iris ENDING]----------------------------------" << endl;
      cout << " Congratulations!!! Iris has become your best friend!!! "<< endl;
      cout << " Coming Christmas, you are not alone!! You are going to make a Christmas Tree with Iris!! " << endl;
      cout <<  "----------------------------------Game Over---------------------------------" << endl;
    }
    else if(input_stat->inti_level[1] > input_stat->inti_level[2] && input_stat->inti_level[1] > input_stat->inti_level[0])
    {
      cout << "------------------------------[Friend Olivia ENDING]----------------------------------" << endl;
      cout << " Congratulations!!! Iris has become your best friend!!! "<< endl;
      cout << " Coming Christmas, you are not alone!! You are going to make a Christmas Tree with Olivia!! " << endl;
      cout <<  "----------------------------------Game Over---------------------------------" << endl;
    }
    else if(input_stat->inti_level[2] > input_stat->inti_level[0] && input_stat->inti_level[2] > input_stat->inti_level[1])
    {
      cout << "------------------------------[Friend Daisy ENDING]----------------------------------" << endl;
      cout << " Congratulations!!! Iris has become your best friend!!! "<< endl;
      cout << " Coming Christmas, you are not alone!! You are going to make a Christmas Tree with Daisy!! " << endl;
      cout <<  "----------------------------------Game Over---------------------------------" << endl;
    }
    else if(gpa > N)
    {
      cout << "------------------------------[Dean's List Ending]-----------------------------------" << endl;
      cout << " Congratulations!!! You have obtained the Honor of Dean's List!! " << endl;
      cout << " However, upcoming Christmas will be full of happiness with offers from internships!!!" << endl;
    }





  }




























}
