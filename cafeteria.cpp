
#include <iostream>
#include <iomanip>
#include <time.h>
#include <string>
#include <cstdlib>
#include "cafeteria.h"
#include "universal.h"
using namespace std;
// play.day
//play.period ==> 1. morning 2. afternoon 3. evening
//play.location ==> 0. Library 1. Garden 2. Student Cafeteria  3. Lecture Room
// Iris = [0], Olivia = [1], Daisy = [2]
void cafeteria(status* input_stat, int mood){
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
      cout << " You selected to come to Cafeteria." << endl;
      cout << " In Cafeteria, there is a higher probability for Daisy to appear. Do you want to enter?" << endl;
      cout << " [1] Yes [2] No, I want to go back home [3]Badminton Club" << endl;
      cin >> sel;
      if(sel ==1){
        srand(time(0));
        // Daisy Appears on Cafeteria
        int Daisy_Appear = rand() % 100;
        if(Daisy_Appear < 50){
          cout << "Daisy appears on the Cafeteria" << endl;
          cout << "Hi!! I'm Daisy~~~ " << endl;
          getchar();
          cout << "Getting hungry, you went to have some food." << endl;
          cout << "You saw Daisy messed up the midterm exam and found out that she is below the average score. " << endl;
          getchar();
          cout << " You may choose between three options: "<< endl;
          cout << " 1. It is fine, Daisy. GPA is not all of your life, you can do it better next time!! " << endl;
          cout << " 2. Give her a can of Coke and hear what she says. " << endl;
          cout << " 3. HAHAAHAHAHAAHA (Laugh Out Loud) " << endl;
          cout << "please enter a number from 1 to 3" << endl;
          cin >> input;
          if(input == 1){
            cout << " Olivia: Thank you a lot for your comfort!!! I will do it better!! " << endl;
            input_stat->affi_level[1] += increment;
            input_stat->sun += 1;
          }
          else if(input == 2){
            cout << " Olivia: Thank you for the drink! I will buy you one day, haha " << endl;
            input_stat->inti_level[1] += increment;
            input_stat->sun += 1;
          }
          else{
            cout << " (You saw Daisy with furious face) Daisy:......(Left Cafeteria) " << endl;
            input_stat->inti_level[1] += decrement;
            input_stat->affi_level[1] += decrement;
            input_stat->sun += 1;
          }
        }
        // Iris appears on the Cafeteria
        else if(Daisy_Appear > 50 && Daisy_Appear < 69){
          cout<< "Iris appears on the cafeteria" << endl;
          cout << "Iris: Hi, I'm Iris!" << endl;
          getchar();
          cout << "You went to the Cafeteria with Iris and found out that there was a cockroach inside the dish. " << endl;
          getchar();
          cout << " 1. Leave the Cafeteria and buy her a nice meal. " << endl;
          cout << " 2. Throw the cockroach away and have the meal as if nothing happened. " << endl;
          cout << " 3. Go fight for the peace of Student Cafeteria!! " << endl;
          cout << "please enter a number from 1 to 3" << endl;
          cin >> input;
          if(input == 1){
            cout << " Iris: It was such a terrible experience. I won't go there again!! " << endl;
            cout << " Iris: Btw Thank you for the meal!! " << endl;
            input_stat->affi_level[0] += increment;
            input_stat->sun += 1;
          }
          else if(input == 2){
            cout << " Iris: ....(Left Cafeteria) " << endl;
            input_stat->inti_level[0] += decrement;
            input_stat->affi_level[0] += decrement;
            input_stat->sun += 1;
          }
          else{
            cout << " Iris: Thank you for your courage...I don't wanna go there agian... " << endl;
            input_stat->inti_level[0] += 1;
            input_stat->sun += 1;
          }
        }
        // Olivia Appears on the cafeteria
        else if(Daisy_Appear > 70 && Daisy_Appear < 90){
          cout << "Olivia appears on the cafeteria" << endl;
          cout << " Hi, I'm Olivia. " << endl;
          getchar();
          cout << "You went to the Cafeteria with Olivia and found out that there was a cockroach inside the dish. " << endl;
          getchar()l
          cout << " 1. Leave the Cafeteria and buy her a nice meal. " << endl;
          cout << " 2. Throw the cockroach away and have the meal as if nothing happened. " << endl;
          cout << " 3. Go fight for the peace of Student Cafeteria!! " << endl;
          cout << "please enter a number from 1 to 3" << endl;
          cin >> input;
          if(input == 1){
            cout << " Olivia: It was such a terrible experience. I won't go there again!! " << endl;
            cout << " Olivia: Btw Thank you for the meal!! " << endl;
            input_stat->affi_level[2] += increment;
            input_stat->sun += 1;
          }
          else if(input == 2){
            cout << " Olivia: ....(Left Cafeteria) " << endl;
            input_stat->inti_level[2] += decrement;
            input_stat->affi_level[2] += decrement;
            input_stat->sun += 1;
          }
          else{
            cout << " Olivia: Thank you for your courage...I don't wanna go there agian... " << endl;
            input_stat->inti_level[2] += increment;
            input_stat->sun += 1;
          }
        }
        else
        {
          cout << "Prof T.W. Chim appears" << endl;
          getchar();
          cout << " Not much time for the class until Christmas! " << endl;
          cout << " Have a good meal guys HAHAHAH " << endl;
          cout << " I would recommend Donburi Dish in SU HAHAHA " << endl;
          cout << " And, I prepare you guys with an easy level quiz! ‘cin’ is? " << endl;
          cout << " " << endl;
          cout << "1.	an Object " << endl;
          cout << "2. a Package " << endl;
          cout << "3.	a Class " << endl;
          cin >> input;
          if(input == 1)
          {
            cout << " Correct!!! You have gained 0.5 input_stat->GPA points. " << endl;
            input_stat->GPA += 0.5;
            input_stat->sun += 1;
          }
          else if(input ==2)
          {
            cout << " Wrong! You have lost 0.5 input_stat->GPA points. "   << endl;
            input_stat->GPA -= 0.5;
            input_stat->sun += 1;
          }
          else
          {
            cout << " Wrong! You have lost 0.5 input_stat->GPA points. " << endl;
            input_stat->GPA -= 0.5;
            input_stat->sun += 1;
          }
        }
          input_stat->hp -= 1;
          input_stat->GPA -= 0.3;
        }
      else if(sel == 2){
          cout << "Going back home. " << endl;
          input_stat->hp -= 1;
          input_stat->sun += 1;
          input_stat->GPA -= 0.1;
        }
      else if(sel == 3){
          cout << " You entered Badminton Club. " << endl;
          cout << " By playing badminton you can gain health point per match! " << endl;
          input_stat->hp += 1;
          input_stat->sun += 1;
          input_stat->GPA -= 0.1;
        }
    run = 0;
    }
  }
