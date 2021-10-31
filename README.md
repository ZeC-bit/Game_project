# COMP2113-Game-project

COMP2113 Project – Dating Simulation Game
Group 7

PARK Hyeonbeom (3035552789), LEE Seunghun (3035551515)

Game Description:

So, you’ve come to the university with a dream of meeting new people, but things have not turned out very nicely for you? No worries, because we have developed this amazing game where you can wander about a virtual world full of exciting places, people and events awaiting you.

Date System and Dynamic Endings: 

You will be given 10 virtual days until Christmas to go through the game. After 10 days, you will be taken to different ending scenes depending on the affinity level and some other factors such as whether you have encountered some special events during the game.

Time System and Action: 

Each day, there are 5 timeslots: Morning 1, Morning 2, Noon, Afternoon, Evening. Some places are only open during specific timeslot. For each timeslot, you can take some action such as study at a café, eat lunch with a character in the story, watch movie with group project mate.

Locations: 

In this game are ‘Lecture room’, ‘Library’, ‘Canteen’, ‘Museum’, ‘Gymnasium’, ‘Garden’, ‘House’, ‘Convenience store’, ‘Café’, ‘Theatre’, but subject to change depending on the storyline design.

Status variables: 

Your choices of action and how you talk to the characters in the game will affect status variables such as ‘Affinity level’, ‘GPA’, ‘Intimacy level’. ‘Affinity level’ and ‘Intimacy level’ are variables that are assigned to each NPC, whereas ‘GPA’ is a single variable assigned to the player.  There will also be a random variable ‘Mood’ for each NCP that will be set randomly everyday (Happy, So so, Depressed). This ‘Mood’ may be multiplied to how much the player’s action affects the ‘Affinity level’.

I hope you have a heartwarming time with our game. You will reap as you sowed!

Coding requirements
1.  Generation of random game sets or events: 
Throughout the story, the player will face different types of people depending on where the player is. But there are different probabilities for meeting the characters in the particular place. Moreover, there is an array 'Mood' of NPCs which will be set randomly everyday.

2.  Data structures for storing game status:  
By bringing up the progress file which has been saved by the each of the player’s game status, the player can load the game. When the game has been started, the data of the player will be moved to the Game_data structure, which will be used throughout the game process.

3.  Dynamic memory management 
We will make arrays for affinity level, and intimacy level that depend on which characters you meet. Based on the choices you make, particular affinity level or intimacy level will vary. Different indices of affinity level, and intimacy level arrays will contain different information for each NPC.

4.	Continue (File input/output): 
The output text file will store the players' data such as nickname, progress, affinity level, intimacy level and so on. File input, output will be used to execute the “continue” feature. For instance, as a new player is formed and saved for the first time, the text file “game_users.txt” will be created and the program will read the user data from the file when the player loads their game data and it will save it to the Game_data structure to use it in the game.

5.	Program codes in multiple files: 
We are going to write one main.cpp and multiple files in the each of the functions in separate .cpp files. We will write a header file for each .cpp file and compile all of the files with makefile. The header file will be called “normal.h” where there are structures in separate header file.
