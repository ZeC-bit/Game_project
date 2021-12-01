
#include <iostream>
#include <time.h>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include "garden.h"
#include "universal.h"
using namespace std;
// play.day
//play.period ==> 1. morning 2. afternoon 3. evening
//play.location ==> 0. Library 1. Garden 2. Student Cafeteria  3. Lecture Room
// Iris = [0], Olivia = [1], Daisy = [2]
void lect(status* input_stat, int mood[3]){
  char choose;
  int input;
  char name;
  double increment = 1;
  double decrement = -1;
  if (mood == 0){
    decrement = -1.5;
    increment = 0.8;
  }
  if (mood == 2) {
    increment = 2;
    decrement = -0.8;
  }
  int run = 1;
  while(run == 1){
    double inti_lev; double affi_lev; double input_stat->GPA; int input_stat->hp; int mood;
    if(data == 3){
      int sel;
      cout << " You selected to come to the Lecture Room." << endl;
      cout << " In Lecture Room, there is a higher probability for Prof. T. W. Chim to appear. Do you want to enter?" << endl;
      cout << " [1] Yes [2] No, I want to go back home [3]Badminton Club" << endl;
      cin >> sel;
      if(sel ==1){
        srand(time(0));
        int Chim_Appear = rand() % 100;
        if(Chim_Appear < 70){
          cout << " Prof. T. W. Chim appears on the Lecture Room. " << endl;
          getchar();
          cout << " Welcome to the class of COMP 2113!!! I will guide you how to become a Code Master!! " << endl;
          cout << " If you meet Prof. Chim in the Lecture, you can gain triple points for the quiz! " << endl;
          getchar();
          cout << " What is the result of j after below code is executed? "<< endl;
          cout << " int i = 10; " << endl;
          cout << " unsigned int j = i++; " << endl;
          cout << " 1. -11 " << endl;
          cout << " 2. 10 " << endl;
          cout << " 3. 11 " << endl;
          cout << "please enter a number from 1 to 3" << endl;
          cin >> input;
          if(input == 1){
            cout << " Wrong! You have lost 1.5 input_stat->GPA points. " << endl;
            input_stat->GPA -= 1.5;
          }
          else if(input == 2){
            cout << " Correct!!! You have gained 1.5 input_stat->GPA points. " << endl;
            input_stat->GPA += 1.5;
          }
          else{
            cout << " Wrong! You have lost 1.5 input_stat->GPA points. " << endl;
            input_stat->GPA -= 1.5;
          }
        }
        else if(Chim_Appear > 70 && Chim_Appear < 79){
          cout<< "Iris appears on the Lecture Room. " << endl;
          cout << " While you were studying hard, Iris said “I want to go to the Ocean Park.” " << endl;
          getchar();
          cout << " 1. Ignore her as if you did not hear anything and study harder on your work. " << endl;
          cout << " 2. You make an appointment with her to go to the Ocean Park after the exams. " << endl;
          cout << " 3. Go to the Ocean Park tomorrow. " << endl;
          cout << "please enter a number from 1 to 3" << endl;
          cin >> input;
          if(input == 1){
            cout << " Iris: ....." << endl;
            input_stat->affi_level[0] -= decrement;
            input_stat->inti_level[0] -= decrement;
          }
          else if(input == 2){
            cout << " Iris: Alright! Let's study harder until end of all exams " << endl;
            input_stat->inti_level[0] += increment;
          }
          else{
            cout << " Iris: Seriously?? Great!! Let's go go go!!! " << endl;
            input_stat->affi_level[0] += increment;
          }
        }
        else if(Chim_Appear > 80 && Chim_Appear < 90){
          cout<< "Olivia appears on the Lecture Room. " << endl;
          cout << " While you were studying hard, Olivia said “I want to go to the Ocean Park.” " << endl;
          getchar();
          cout << " 1. Ignore her as if you did not hear anything and study harder on your work. " << endl;
          cout << " 2. You make an appointment with her to go to the Ocean Park after the exams. " << endl;
          cout << " 3. Go to the Ocean Park tomorrow. " << endl;
          cout << "please enter a number from 1 to 3" << endl;
          cin >> input;
          if(input == 1){
            cout << " Olivia: ....." << endl;
            input_stat->affi_level[1] -= decrement;
            input_stat->inti_level[1] -= decrement;
          }
          else if(input == 2){
            cout << " Olivia: Alright! Let's study harder until end of all exams " << endl;
            input_stat->inti_level[1] += increment;
          }
          else{
            cout << " Olivia: Seriously?? Great!! Let's go go go!!! " << endl;
            input_stat->affi_level[1] += increment;
          }
        }
        else
        {
          cout << "Daisy appears on the Lecture Room. " << endl;
          cout<< "Iris appears on the Lecture Room. " << endl;
          cout << " While you were studying hard, Iris said “I want to go to the Ocean Park.” " << endl;
          getchar();
          cout << " 1. Ignore her as if you did not hear anything and study harder on your work. " << endl;
          cout << " 2. You make an appointment with her to go to the Ocean Park after the exams. " << endl;
          cout << " 3. Go to the Ocean Park tomorrow. " << endl;
          cout << "please enter a number from 1 to 3" << endl;
          cin >> input;
          if(input == 1){
            cout << " Daisy: ....." << endl;
            input_stat->affi_level[2] -= decrement;
            input_stat->inti_level[2] -= decrement;
          }
          else if(input == 2){
            cout << " Daisy: Alright! Let's study harder until end of all exams " << endl;
            input_stat->inti_level[2] += increment;
          }
          else{
            cout << " Daisy: Seriously?? Great!! Let's go go go!!! " << endl;
            input_stat->affi_level[2] += increment;
          }
        }
          input_stat->hp -= 1;
        }
      else if(sel == 2){
          cout << "Going back home. " << endl;
          input_stat->hp -= 1;
        }
      else if(sel == 3){
          cout << " You entered Badminton Club. " << endl;
          cout << " By playing badminton you can gain health point per match! " << endl;
          input_stat->hp += 1;
        }
      }
    }
  }
