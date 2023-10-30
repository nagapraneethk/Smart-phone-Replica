# Smart-phone-Replica
## INTRODUCTION:

The purpose of this project is to develop a software application in C language that replicates the functionality of a basic mobile phone. The Phone Replica application will be able to add contacts, play games, perform the function of a simple calculator and currency convertor, and display a calendar. It also can install and delete apps from the App Store. This replica has a feature to change the password, wallpaper of the lock screen, font color, and display color through the settings. It also has a file manager comprising folders, sub-folders, and files. File manager provides users to create new folders, subfolders, and files and it also has access to delete and edit them.

## ABSTRACT:
The "Phone Replica" project aims to develop a software application that replicates the basic functions of a mobile phone. This report presents the development of a Phone Replica application using C programming language. The main focus of the project is to provide users with a virtual phone experience that closely mimics real-life phone interactions. To ensure user-friendliness, the interface will be intuitive and straightforward, making it easy for users to navigate and use the application. The application uses the menu-driven interface to allow the user to select the desired action. Overall, the Phone Replica project will offer a fun and educational experience, while also providing a practical solution for those who need a virtual phone experience.

## METHODOLOGY:

●	Problem statement: A brief description of the problem addressed by the project, which is the need to provide a more affordable alternative to expensive smart phones while offering a similar user experience.

●	Programming language: C language was used to write the program.

●		Testing: The methods used to test the program is user acceptance testing. 

●	Lock Screen Display:

 

•	Home Screen: 
 
•	 Settings:
 
•	Change Password: It allows user to create a new password. File handling is used to check and store the password entered by the user. String comparison is used to verify the password entered by the user. For security purposes when user entered the password it will display in “*” format and it is done through “\b” in printf function.
 
•	Set Wallpaper: It allows user to change the lock screen wallpaper. File handling takes major part to access the changes in lock screen wallpaper.
 
 
•	Font Color: This function is used to change the font color of the mobile(entire program).  system(“color ##”) command is used to change desired font color.
 
 
•	Display Color: This setting allows user to access the desired display color. system(“color ##”) command is used to change display color. 
 
 
•	App List: 
 


APPS IN PHONE REPLICA
●	Rock Paper scissor:  The game is between user and computer. We have used while loop for playing multiple times depending upon the user. The library “time.h” is used to pick random options for computer. File handling is used to display the ascii arts whenever required in the game. Nested switch cases are used to give the result of game between user and computer.
 

●	Calculator: It provides a simple calculation of two numbers. We have used while loop for operating multiple times depending upon the user. Nested switch cases are used to display the mathematical operations.

  

●	Calendar: It displays the calendar of particular month of year 2023. We have used while loop for displaying multiple times. Switch cases are used to store some data in particular variables for which user want to display the particular month. 
 
 

●	Currency Convertor: It provides user to convert currency of one country to another country. While loop is used for operating the convertor for multiple times depending upon the user. Nested switch cases are used to display the required amount to be converted in required currency.
 
 

●	Tic Tac Toe: The game is between two users. Whenever any player forms a straight line in any direction in the game then the player is winner of the game. We used while loop for playing multiple times depending upon the user. We used data structures to reserve a particular place in the game for user 1 and user 2. With the help of data structures and for loop, the grid system in the game is printed. If, else ifs are used to display the result of the game between user 1 and user 2.
    

●	Adventure Game: This game is played only by a user. It is the game in which the user searches for a treasure by solving the riddles. We have used while loop for playing multiple times depending upon the user. The library “time.h” is used to pick random riddles in each level of the game. File handling is used to display the ascii arts whenever required in the game. Switch cases are used to display the riddles, hints, store the result of the riddle. In switch cases, if conditions and ‘string comparison’ is used to compare the user entered answer and the correct answer for the riddle. 
 
 
 
This game goes on until a player solves 5 riddles or fails to solve a riddle.
If player is success is to solve a riddle, then the player will get the treasure.
  
If player is fails to solve a riddle, then the player will die.
 
●	Phone Book: It provides user to display contacts, search and create a contact. Data structures are used to store the details of each contact. While loop is used to display options and execution of following option.

 
Displaying all contacts
 
Searching a contact
 
Create a new contact
 
 

App Store: It provides user to install and delete apps. Swapping of elements in array is used to install and delete apps. Sleeping function is used to display install page.

 
 
Install Apps:

 
 
Delete Apps:
 
 
●	File Manager: It allows user to create, edit, and remove folders and text files. “system()” function from library <stdlib.h> is used to show directories and also for clear screen. "chdir()” [from <unistd.h> library] is used to change directories. File handling also plays a vital role for creating and editing a text file. 
 
•	Opening a folder:
 
 
•	Options in Folder manager:
 
Folder Management
 










Creating New Folder:
 

 
Deleting a Folder:
  


•	Options in File Management:
 
Creating new txt file
 
 





Editing txt file
 
 
Deleting a file:
 

CONCLUSION:
The Phone Replica software application was successfully developed in C language and tested to ensure its functionality and reliability. The application provides a user-friendly interface for the user to interact with the application. The application provides a basic functionality of a mobile phone, making it a useful tool for learning and practicing programming in C language. The development of this application is an excellent opportunity to demonstrate the use of C programming language in developing practical application and to provide a basic understanding of the functionality of a smart phone.

![image](https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/db5d258c-39c2-480e-af1c-64894fffdf3c)



