# Game-Project

Text-based dating simulation game with randomised variables, dynamic memory management, file I/O, and Makefile functions implemented.

Game Description:

So, you’ve come to the university with a dream of meeting new people, but things have not turned out very nicely for you? No worries, because we have developed this amazing game where you can wander about a virtual world full of exciting places, people and events awaiting you.

How to Install and run the game:

1) Prepare the files in the same directory(cafeteria.cpp cafeteria.h ending.cpp ending.h execution.cpp execution.h garden.cpp garden.h lecture.cpp lecture.h library.cpp library.h save_load.cpp save_load.h universal.h main.cpp)
2) On shell, type "makefile" command. The execution file will be created.
3) On shell, type "./Under_the_Mistletoe" command.
4) Play the game!!


![Opening](https://user-images.githubusercontent.com/74304944/159212831-c2b88135-b958-4e99-9754-3a522b04206e.png)


      <Opening>


Date System and Dynamic Endings: 

You will be given 10 virtual days until Christmas to go through the game. After 10 days, you will be taken to different ending scenes depending on the affinity level and some other factors such as whether you have encountered some special events during the game.

![Dean's List Ending](https://user-images.githubusercontent.com/74304944/159212755-a7e6c5c4-88a7-40a2-811a-4f4b251234a2.png)
      
  
      <Dean's List Ending>


![Solo Ending](https://user-images.githubusercontent.com/74304944/159213278-d70660bd-7313-4eb4-aee1-df57cca121f1.png)

      <Solo Ending>


Time System and Action: 

Each day, there are 5 timeslots: Morning 1, Morning 2, Noon, Afternoon, Evening. Some places are only open during specific timeslot. For each timeslot, you can take some action such as study at a café, eat lunch with a character in the story, watch movie with group project mate. 
But, keep in mind that you have to play badminton in order to keep fit, unless you might die...!



![Gameover](https://user-images.githubusercontent.com/74304944/159213887-4505765d-3740-4dc3-9de5-8635d69fd685.png)
      
      <GAME OVER>


Locations: 

In this game are ‘Lecture room’, ‘Library’, ‘Canteen’, ‘Museum’, ‘Gymnasium’, ‘Garden’, ‘House’, ‘Convenience store’, ‘Café’, ‘Theatre’, but subject to change depending on the storyline design.

Libray we might use:

cstdlib and ctime: use for make random numbers while rolling the dice.

iostream: standard input and output fstream: file I/O.

string: store the data of each move and conditions.

cmath: use for calculation.

vector: to store the data and do some operations.

map: do some operations on stored data.

algorithm: use some well-worked functions and algorithms.

iomanip: manipulate input and output

Status variables: 

Your choices of action and how you talk to the characters in the game will affect status variables such as ‘Affinity level’, ‘GPA’, ‘Intimacy level’. ‘Affinity level’ and ‘Intimacy level’ are variables that are assigned to each NPC, whereas ‘GPA’ is a single variable assigned to the player.  There will also be a random variable ‘Mood’ for each NCP that will be set randomly everyday (Happy, So so, Depressed). This ‘Mood’ may be multiplied to how much the player’s action affects the ‘Affinity level’.

I hope you have a heartwarming time with our game. You will reap as you sowed!

Coding requirements
1.  Generation of random game sets or events: 
Throughout the story, the player will face different types of people depending on the location of the player. But there are different probabilities for meeting the characters in the particular place. For example, we set 50 percent of Iris emerging at Main Library, and setting the other characters as different percentage. Moreover, there is an array 'Mood' of NPCs which will be set randomly everyday in scale of 0 to 2 where in bad mood '0', the player will have shorter increase in the affinity level and intimacy level, while decreasing higher in amount of the variables whereas in good mood at the opposite way.

2.  Data structures for storing game status:  
By bringing up the progress file which has been saved by the each of the player’s game status, the player can load the status from save file or start from beginning with basic status. When the game has been started, the data of the player will be moved to the Status structure defined in universal.h file, which will be used throughout the game process. Status structure contains different variables with appropriate purpose and type. game length in 'int', playername in 'string', date and time of the day in 'int', affinity levels and intimacy levels in 'array of double' (size 3 because there are 3 characters), GPA in 'double' and HP in 'int'. We used double for affinity level and intimacy level for the purpose of careful optimization of difficulty.


![Saving Current Game](https://user-images.githubusercontent.com/74304944/159225598-a85e6f0a-fe79-4ec3-a286-6ecb59fe0463.png)
      
      <Saving Current Game>
      
      You can save the current game status if you want to play the game later. 
      For instance, let's end our game at Day 1 Evening and save the game name as GameTrial_1


3.  Dynamic memory management: 
We will make arrays for affinity level, and intimacy level that depend on which characters you meet. Based on the choices you make, particular affinity level or intimacy level will vary. Different indices of affinity level, and intimacy level arrays will contain different information for each NPC. 
Moreover, we added a feature to let the user choose the length of the game. Our game (including the difficulty of attaining endings) was optimized for 5 days. However, the user can choose from 1 to 10 days based on their preference. In general, the more you play, the higher the affinity level and intimacy level will reach.
Also, a dynamic array that will have varying size according to the input file will be used to store information from the input file.

4.	Continue (File input/output): 
The output text file will store the players' data such as game length, nickname, progress, affinity level, intimacy level, GPA and Health point. File input, output will be used to execute the "save" and “continue” feature. After every action, the user can choose to save current progress or load data from a save file. When save_data function is used, a text file with the user's input name will be created. When load_data function is used, the program will read the user data from the file and it will save it to the current_status structure to use it in the game. If successfully, loaded, you can play as if you really just 'continue' playing from previous progress.

5.	Program codes in multiple files: 
We are going to write one main.cpp and multiple files in the each of the functions in separate .cpp files. We will write a header file for each .cpp file and compile all of the files with makefile. The header file called “universal.h” will store the structure of our status variable.


