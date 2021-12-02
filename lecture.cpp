
#include <iostream>
#include <iomanip>
#include <time.h>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include "lecture.h"
#include "universal.h"
using namespace std;
//Inputs of the function are struct Status. The affinity level, intimacy level, GPA, and
//Health points are stored in the structure. Throughout the process of the game, the data stored
//Status Structure will be continuously modified where they are set as pointer variables.
//Mood Variable shows the mood of the characters where it affects on the increment and decrement of
//Affinity level and intimacy level. Mood Variable comes out with random probabilities with scale of 0 to 2.
// Perid of the day ==> 1. morning 2. afternoon 3. evening
// Location ==> 0. Library 1. Garden 2. Student Cafeteria  3. Lecture Room
// Array number for the characters are Iris = [0], Olivia = [1], Daisy = [2]
void lect(status* input_stat, int mood){
  char choose;
  int input;
  char name;
  double increment = 1;
  double decrement = -1;
  int sun;
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
      int sel;
      cout << " You selected to come to the Lecture Room." << endl;
      cout << " In Lecture Room, there is a higher probability for Prof. T. W. Chim to appear. Do you want to enter?" << endl;
      cout << " [1] Yes [2] No, I want to go back home [3]Badminton Club" << endl;
      cin >> sel;
      if(sel ==1){
        srand(time(0));
        int Chim_Appear = rand() % 100;
        // Random Chance of Prof. Chim Appearing on the Lecture Room.
        if(Chim_Appear < 50){
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
            cout << " Wrong! You have lost 1.5 GPA points. ";
            getchar();
            input_stat->GPA -= 1.5;
            input_stat->sun += 1;
          }
          else if(input == 2){
            cout << " Correct!!! You have gained 1.5 GPA points. ";
            getchar();
            input_stat->GPA += 1.5;
            input_stat->sun += 1;
          }
          else{
            cout << " Wrong! You have lost 1.5 GPA points. ";
            getchar();
            input_stat->GPA -= 1.5;
            input_stat->sun += 1;
          }
        }
        // Random Chance of Iris Appearing on the Lecture Room.
        else if(Chim_Appear >= 50 && Chim_Appear <= 69){
          cout<< "Iris appears on the Lecture Room. " << endl;
          cout << "Iris: Hi, I'm Iris!" << endl;
          cout << " While you were studying hard, Iris said “I want to go to the Ocean Park.” " << endl;
          getchar();
          cout << " 1. Ignore her as if you did not hear anything and study harder on your work. " << endl;
          cout << " 2. You make an appointment with her to go to the Ocean Park after the exams. " << endl;
          cout << " 3. Go to the Ocean Park tomorrow. " << endl;
          cout << "please enter a number from 1 to 3" << endl;
          cin >> input;
          if(input == 1){
            cout << " Iris: .....";
            getchar();
            input_stat->affi_level[0] += decrement;
            input_stat->inti_level[0] += decrement;
            input_stat->sun += 1;
          }
          else if(input == 2){
            cout << " Iris: Alright! Let's study harder until end of all exams ";
            getchar();
            input_stat->inti_level[0] += increment;
            input_stat->sun += 1;
          }
          else{
            cout << " Iris: Seriously?? Great!! Let's go go go!!! ";
            getchar();
            input_stat->affi_level[0] += increment;
            input_stat->sun += 1;
          }
        }
          // Random Chance of Olivia Appearing on the Lecture Room.
        else if(Chim_Appear >= 70 && Chim_Appear < 90){
          cout<< "Olivia appears on the Lecture Room. " << endl;
          cout << " Hi, I'm Olivia. " << endl;
          cout << " While you were studying hard, Olivia said “I want to go to the Ocean Park.” " << endl;
          getchar();
          cout << " 1. Ignore her as if you did not hear anything and study harder on your work. " << endl;
          cout << " 2. You make an appointment with her to go to the Ocean Park after the exams. " << endl;
          cout << " 3. Go to the Ocean Park tomorrow. " << endl;
          cout << "please enter a number from 1 to 3" << endl;
          cin >> input;
          if(input == 1){
            cout << " Olivia: .....";
            getchar();
            input_stat->affi_level[1] += decrement;
            input_stat->inti_level[1] += decrement;
            input_stat->sun += 1;
          }
          else if(input == 2){
            cout << " Olivia: Alright! Let's study harder until end of all exams ";
            getchar();
            input_stat->inti_level[1] += increment;
            input_stat->sun += 1;
          }
          else{
            cout << " Olivia: Seriously?? Great!! Let's go go go!!! ";
            getchar();
            input_stat->affi_level[1] += increment;
            input_stat->sun += 1;
          }
        }
          // Random Chance of Daisy Appearing on the Lecture Room.
        else
        {
          cout << "Daisy appears on the Lecture Room. " << endl;
          cout << "Hi!! I'm Daisy~~~ " << endl;
          cout << " While you were studying hard, Daisy said “I want to go to the Ocean Park.” " << endl;
          getchar();
          cout << " 1. Ignore her as if you did not hear anything and study harder on your work. " << endl;
          cout << " 2. You make an appointment with her to go to the Ocean Park after the exams. " << endl;
          cout << " 3. Go to the Ocean Park tomorrow. " << endl;
          cout << "please enter a number from 1 to 3" << endl;
          cin >> input;
          if(input == 1){
            cout << " Daisy: .....";
            getchar();
            input_stat->affi_level[2] += decrement;
            input_stat->inti_level[2] += decrement;
            input_stat->sun += 1;
          }
          else if(input == 2){
            cout << " Daisy: Alright! Let's study harder until end of all exams ";
            getchar();
            input_stat->inti_level[2] += increment;
            input_stat->sun += 1;
          }
          else{
            cout << " Daisy: Seriously?? Great!! Let's go go go!!! ";
            getchar();
            input_stat->affi_level[2] += increment;
            input_stat->sun += 1;
          }
        }
          input_stat->hp -= 1;
          input_stat->GPA += 0.3;
        }
      else if(sel == 2){
          cout << "Going back home... ";
          getchar();
          input_stat->sun += 1;
          input_stat->GPA -= 0.1;
        }
      else if(sel == 3){
          cout << " You entered Badminton Club. " << endl;
          cout << " By playing badminton you can gain health point per match! ";
          getchar();
          input_stat->hp += 3;
          input_stat->sun += 1;
          input_stat->GPA -= 0.1;
        }
      run = 0;
      }
    }
