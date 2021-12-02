
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include "library.h"
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
void library(status* input_stat, int mood){
  char choose;
  int input;
  char name;
  double increment = 1;
  double decrement = -1;
  int sun;

  if (mood == 0){
    decrement -= 0.5;
    increment -= 0.2;
  }
  if (mood == 2) {
    increment += 1;
    decrement += 0.2;
  }
  int run = 1;
  while(run == 1){
      int sel;
      cout << " You selected to come to Library." << endl;
      cout << " In Library, there is a higher probability for Iris to appear. Do you want to enter?" << endl;
      cout << " [1] Yes [2] No, I want to go back home [3]Badminton Club" << endl;
      cin >> sel;
      if(sel ==1){
        srand(time(0));
        int Iris_Appear = rand() % 100;
        //Iris Appears on the Library
        if(Iris_Appear < 50){
          cout << " Iris appears on the library " << endl;
          cout << "Iris: Hi, I'm Iris!" << endl;
          cout << "Iris: I take the same class as you and I'm on the dean's list!" << endl;
          getchar();
          cout << " You met Iris on Main library. " << endl;
          cout << " Since you and Iris feel so distracted from the noise " << endl;
          cout << " at the study table playing League of Legend " << endl;
          getchar();
          cout << " You may choose between three options: "<< endl;
          cout << " 1. Go fight for the peace of main library. " << endl;
          cout << " 2. Ask kindly to make him silent. " << endl;
          cout << " 3. Take all the stuff with you and leave the place with Iris. " << endl;
          cout << "please enter a number from 1 to 3" << endl;
          cin >> input;
          if(input == 1){
            cout << " Iris: Please don't fight...(But you made him silent) " << endl;
            input_stat->inti_level[0] += increment;
            input_stat->sun += 1;
          }
          else if(input == 2){
            cout << " Iris: Thank you for your courage! " << endl;
            input_stat->affi_level[0] += increment;
            input_stat->sun += 1;
          }
          else{
            cout << " (Iris's face seems disappointed) " << endl;
            input_stat->inti_level[0] += decrement;
            input_stat->affi_level[0] += decrement;
            input_stat->sun += 1;
          }
        }
        //Daisy Appears on the Library
        else if(Iris_Appear > 50 && Iris_Appear < 69){
          cout<< " Daisy appears on the library " << endl;
          cout << "Hi!! I'm Daisy~~~ " << endl;
          cout << "Daisy: I was your classmate in the high school!!" << endl;
          cout << "It is a surprise to meet you here!!!" << endl;
          getchar();
          cout << " Feeling too tired and exhausted, you do not have any power to study. " << endl;
          cout << " But, you came to the library. " << endl;
          getchar();
          cout << " 1. Chat with Daisy what we will do after the final exam. " << endl;
          cout << " 2. Even if you feel tired, just go for it. " << endl;
          cout << " 3. You found that she seems also tired. Prepare two redbulls for you and her to stay awake. " << endl;
          cout << "please enter a number from 1 to 3" << endl;
          cin >> input;
          if(input == 1){
            cout << " Daisy: I can't wait till the end of the exams...But have too much things to do.. " << endl;
            input_stat->inti_level[2] += increment;
            input_stat->sun += 1;
          }
          else if(input == 2){
            cout << " Daisy: (Sleeping)..... " << endl;
            input_stat->inti_level[2] += decrement;
            input_stat->affi_level[2] += decrement;
            input_stat->sun += 1;
          }
          else{
            cout << " Daisy: Thank you so much!! I feel so fresh now!! " << endl;
            input_stat->affi_level[2] += increment;
            input_stat->sun += 1;
          }
        }
        //Olivia appears on the Library
        else if(Iris_Appear > 70 && Iris_Appear < 90){
          cout << " Olivia appears on the library " << endl;
          cout << " Hi, I'm Olivia. " << endl;
          cout << " I am living in Starr Hall, and your hall mate!! " << endl;
          getchar();
          cout << " Feeling too tired and exhausted, you do not have any power to study. " << endl;
          cout << " But, you came to the library. " << endl;
          getchar();
          cout << " 1. Chat with Olivia what we will do after the final exam. " << endl;
          cout << " 2. Even if you feel tired, just go for it. " << endl;
          cout << " 3. You found that she seems also tired. Prepare two redbulls for you and her to stay awake. " << endl;
          cout << "please enter a number from 1 to 3" << endl;
          cin >> input;
          if(input == 1){
            cout << " Olivia: I can't wait till the end of the exams...But have too much things to do.. " << endl;
            input_stat->inti_level[1] += increment;
            input_stat->sun += 1;
          }
          else if(input == 2){
            cout << " Olivia: (Sleeping)..... " << endl;
            input_stat->inti_level[1] += decrement;
            input_stat->affi_level[1] += decrement;
            input_stat->sun += 1;
          }
          else{
            cout << " Olivia: Thank you so much!! I feel so fresh now!! " << endl;
            input_stat->affi_level[1] += increment;
            input_stat->sun += 1;
          }
        }
        // Prof Chim appears on the Library
        else
        {
          cout << "Prof T.W. Chim appears on the Library" << endl;
    	    getchar();
          cout << " It is nice to see you guys studying hard in the Library!! " << endl;
           cout << " So, I will give you a surprise quiz hahahaha " << endl;
    	    cout << "Guess if you do not know the answer. In linux, the ________ command can be used to remove directories." << endl;
    	    getchar();
    	    cout << "choose a number between 1 and 3" << endl;
    	    cout << "1.	Rmdir" << endl;
    	    cout << "2. Rmdir and rm -r" << endl;
    	    cout << "3.	Rmdir and del" << endl;
    	    cin >> input;
    	    if(input == 1)
    	    {
    	      cout << "Wrong! You have lost 0.5 GPA points" << endl;
    	      input_stat->GPA += 0.5;
            input_stat->sun += 1;
    	    }
    	    else if(input ==2)
    	    {
    	      cout << "Correct!!! You have gained 0.5 GPA points" << endl;
    	      input_stat->GPA += 0.5;
            input_stat->sun += 1;
    	    }
    	    else
    	    {
    	      cout << "Wrong! You have lost 0.5 GPA points" << endl;
    	      input_stat->GPA += 0.5;
            input_stat->sun += 1;
    	    }
        }
        input_stat->hp -= 1;
        input_stat->GPA += 0.25;
      }
      else if(sel == 2){
          cout << "Going back home... " << endl;
          input_stat->sun += 1;
          input_stat->GPA -= 0.1;
        }
      else if(sel == 3){
          cout << " You entered Badminton Club. " << endl;
          cout << " By playing badminton you can gain health point per match! " << endl;
          input_stat->hp += 3;
          input_stat->sun += 1;
          input_stat->GPA -= 0.1;
        }
      run = 0;
      }
    }
