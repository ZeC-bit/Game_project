
#include <iostream>
#include <time.h>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

void library(int *inti_lev, int *affi_lev, int *gpa, int *health){
  char choose;
  int input;
  char name;
  //library is a location where Iris has a higher probability to emerge
  cout << " You selected to come to library. You can study to obtain high GPA." << endl;
  cout << " Select \"S\" or \"C\" whether you want to go to Study Table or Collaboration Room." << endl;
  cin >> choose;
  if(choose == 'S'){
    cout << "you are now in Study Table" << endl;
  }
  else if(choose == 'C'){
    cout << "you are now in Collaboration Room" << endl;

  }
  else{
    cout << "nothing happens" << endl;

  }

  // initialize rand() with a seed
  srand(time(0));
  //Iris appears at the Library
  int Iris_Appear = (rand() % 100);
  if(Iris_Appear < 70){
    cout << "Iris appears on the library" << endl;
    cout << "Introcing herself: I take the same class as you and I'm on the dean's list!" << endl;
    cout << " You may choose between three options: "<< endl;
    cout << " 1. Introduce yourself to her " << endl;
    cout << " 2. Ask if she can introduce him about the school" << endl;
    cout << " 3. ask the way to borrow the books." << endl;
    cout << "please enter a number from 1 to 3" << endl;
    cin >> input;
    if(input == 1){
      cout << "Hi, I'm " << name << "nice to meet you!" << endl;
      affi_lev++;

    }
    else if(input == 2){
      cout << "Since I'm new here, I want to know the way around school" << endl;
      inti_lev++;

    }
    else{
      cout << "Let me ask you how I can borrow books from library." << endl;

    }
  }
  else if(Iris_Appear > 70 && Iris_Appear < 79){
    cout<< "Daisy appears on the library" << endl;
    getchar(); // use the while loop
    cout << "Introducing herself: " << name <<"! it is a surprise to meet here." <<endl;
    cout << " 1. Introduce yourself to her " << endl;
    cout << " 2. Ask if she can introduce him about the school" << endl;
    cout << " 3. ask the way to borrow the books." << endl;
    cout << "please enter a number from 1 to 3" << endl;
    cin >> input;
    if(input == 1){
      cout << "Hi, I'm " << name << "nice to meet you!" << endl;
      affi_lev++;

    }
    else if(input == 2){
      cout << "Since I'm new here, I want to know the way around school" << endl;
      inti_lev++;

    }
    else{
      cout << "Let me ask you how I can borrow books from library." << endl;

    }
  }
  else if(Iris_Appear > 80 && Iris_Appear < 90){
    cout << "Olivia appears on the library" << endl;

    cout << " 1. Introduce yourself to her " << endl;
    cout << " 2. Ask if she can introduce him about the school" << endl;
    cout << " 3. ask the way to borrow the books." << endl;
    cout << "please enter a number from 1 to 3" << endl;
    cin >> input;
    if(input == 1){
      cout << "Hi, I'm " << name << "nice to meet you!" << endl;
      affi_lev++;

    }
    else if(input == 2){
      cout << "Since I'm new here, I want to know the way around school" << endl;
      inti_lev++;

    }
    else{
      cout << "Let me ask you how I can borrow books from library." << endl;

    }
  }
  else
  {
    cout << "Prof T.W. Chim appears" << endl;
    getchar();
    cout << "Today is the first day of lecture. Hence, I will give you guys a question!" << endl;
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
      gpa -= 0.5;
    }
    else if(input ==2)
    {
      cout << "Correct!!! You have gained 0.5 GPA points" << endl;
      gpa += 0.5;
    }
    else
    {
      cout << "Wrong! You have lost 0.5 GPA points" << endl;
      gpa -= 0.5;
    }
    }









  }





  // conversion system (store) of infi_lev to affi_lev
