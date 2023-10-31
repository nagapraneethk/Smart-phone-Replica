# SMART PHONE REPLICA
## INDEX:
* [INTRODUCTION](#introduction)
* [ABSTRACT](#abstract)
* [METHODOLOGY](#methodology)
	* [HOME SCREEN](#home-screen)
 	* [Settings](#settings)
  	* [Change Password](#change-password)
  	* [Set Wallpaper](#set-wallpaper)
  	* [Font Color](#font-color)
  	* [Display Color](#display-color)
* [APPS IN PHONE REPLICA](#apps-in-phone-replica)
	* [App List](#app-list)
		* [Rock Paper & Scissors](#rock-paper-scissors)
		* [Calculator](#calculator)
		* [Calendar](#calendar)
		* [Currency Converter](#currency-converter)
		* [Tic-Tac-Toe](#tic-tac-toe)
		* [APP Store](#app-store)
			* [Install Apps](#install-apps)
			* [Delete Apps](#delete-apps)
		* [File Manager](#file-manager)
			* [Opening a folder](#opening-a-folder)
			* [File Manager Options](#file-manager-options)
			* [Folder Management](#folder-management)
		
        
## INTRODUCTION:

The purpose of this project is to develop a software application in C language that replicates the functionality of a basic mobile phone. The Phone Replica application will be able to add contacts, play games, perform the function of a simple calculator and currency convertor, and display a calendar. It also can install and delete apps from the App Store. This replica has a feature to change the password, wallpaper of the lock screen, font color, and display color through the settings. It also has a file manager comprising folders, sub-folders, and files. File manager provides users to create new folders, subfolders, and files and it also has access to delete and edit them.

## ABSTRACT:
The "Phone Replica" project aims to develop a software application that replicates the basic functions of a mobile phone. This report presents the development of a Phone Replica application using C programming language. The main focus of the project is to provide users with a virtual phone experience that closely mimics real-life phone interactions. To ensure user-friendliness, the interface will be intuitive and straightforward, making it easy for users to navigate and use the application. The application uses the menu-driven interface to allow the user to select the desired action. Overall, the Phone Replica project will offer a fun and educational experience, while also providing a practical solution for those who need a virtual phone experience.

## METHODOLOGY:

●	Problem statement: A brief description of the problem addressed by the project, which is the need to provide a more affordable alternative to expensive smartphones while offering a similar user experience.

●	Programming language: C language was used to write the program.

●		Testing: The method used to test the program is user acceptance testing. 

●	Lock Screen Display:

<img width="300" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/6938b7d6-84ff-4621-9e12-2848ecf6fc55">

### Home Screen: 

<img width="205" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/2677968b-2db9-4789-8761-f8be8af245aa">

### Settings:

<img width="248" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/26effe15-9485-4a28-9de1-d512ed038514">

### Change Password: 

It allows the user to create a new password. File handling is used to check and store the password entered by the user. String comparison is used to verify the password entered by the user. For security purposes when the user enters the password it will display in `*` format and it is done through `\b` in 'printf' function.

<img width="270" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/31b82956-1893-4f43-9bf5-ac4d2887d18d">

### Set Wallpaper: 

It allows the user to change the lock screen wallpaper. File handling plays a major part in accessing the changes in the lock screen wallpaper.

Before:

<img width="243" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/78c2d45c-c62d-4e43-afed-fa92d686aa9d">
 
After:

<img width="256" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/7dd8de3b-0ac0-43ce-8fcb-36584ac79879">

 
#### Font Color: 

This function is used to change the font color of the mobile(entire program).  `system(“color ##”)` is used to change the desired font color.

Before:

<img width="273" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/f8928733-e195-4b1a-b98e-982c8cfb8583">

After:

<img width="208" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/6e812795-7b54-4f69-a7ee-dab9fd529e63">

 
#### Display Color: 

This setting allows the user to access the desired display color. `system(“color ##”)` is used to change the display color. 

Before:

<img width="305" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/80e11adc-30c1-40a0-be22-662bb477fb49">
 
After:

<img width="238" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/57540718-9fb5-470f-aee2-96030f806980">

 
## APPS IN PHONE REPLICA

### App List: 

<img width="284" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/f49f8ca5-f598-4d86-ba81-85c48b0090f6">


### Rock Paper Scissors: 

The game is between the user and the computer. We have used a while loop for playing multiple times depending upon the user. The library `time.h` is used to pick random options for the computer. File handling is used to display the ASCII art whenever required in the game. Nested switch cases are used to give the result of the game between the user and the computer.

 <img width="165" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/a6b560b9-25e2-457e-bf6a-7d891c0cdb6c">


### Calculator:

It provides a simple calculation of two numbers. We have used a while loop for operating multiple times depending upon the user. Nested switch cases are used to display the mathematical operations.

<img width="226" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/79a22d02-b944-4865-803e-60ece8e31576">

### Calendar: 

It displays the calendar of a particular month of the year 2023. We have used a while loop for displaying multiple times. Switch cases are used to store some data in particular variables for which the user wants to display the particular month. 

 <img width="179" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/2db51262-dd03-44db-80af-196f94047aa4">

<img width="259" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/a01b1e6f-e6dd-4ccc-bcce-beb072dbb8e8">

### Currency Converter: 

It allows users to convert the currency of one country to another country. While loop is used for operating the converter multiple times depending upon the user. Nested switch cases are used to display the required amount to be converted into the required currency.

 <img width="300" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/86d0ec9c-3751-4488-b7c3-fa280141440f">

<img width="225" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/ce8c60a4-b13c-4859-94ef-4f140fd7c537">

### Tic Tac Toe: 

The game is between two users. Whenever any player forms a straight line in any direction in the game then the player is the winner of the game. We used a while loop for playing multiple times depending on the user. We used data structures to reserve a particular place in the game for User 1 and User 2. With the help of data structures and a for loop, the grid system in the game is printed. If, else ifs are used to display the result of the game between user 1 and user 2.

<img width="125" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/776cc94a-762c-4753-b097-3c971de19bb3">
<img width="125" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/7b5ad110-7e06-46f6-9b4e-0620da0eabc3">
<img width="140" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/de10b6a3-8173-4350-9153-64d9466eaede">
<img width="151" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/9ee8a8b8-2e85-4556-a4da-a235a4842f3b">


### Adventure Game: 

This game is played only by a user. It is a game in which the user searches for a treasure by solving the riddles. We have used a while loop for playing multiple times depending upon the user. The library `time.h` is used to pick random riddles in each level of the game. File handling is used to display the ASCII art whenever required in the game. Switch cases are used to display the riddles, and hints, and store the result of the riddle. In switch cases, 'if' conditions and ‘string comparison’ are used to compare the user-entered answer and the correct answer for the riddle. 

 <img width="273" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/1149b008-b658-439b-91b2-79e0274d59b2">

This game goes on until a player solves 5 riddles or fails to solve a riddle.
If a player is successful in solving a riddle, then the player will get the treasure.

Final:

<img width="325" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/eb82d986-77cc-4224-ada5-b387c5215a36">

If a player fails to solve a riddle, then the player will die.

<img width="205" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/1c48981d-29e4-4fec-a27e-640f638aa738">


### App Store: 

It allows users to install and delete apps. Swapping of elements in the array is used to install and delete apps. The sleeping function is used to display the install page.

<img width="154" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/e3c65864-5c5e-4cea-b0fb-58fc4ab5e56d">
<img width="148" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/6f02bfec-c49c-4894-9f8a-cab10760aa62">
 
#### Install Apps:

<img width="267" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/fbacdc30-24b2-41e9-9e00-66b76c702d4f">
<img width="266" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/7ec76df7-d3b5-421d-a29c-387c541f7859">

#### Delete Apps:

<img width="292" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/4483542f-d8ba-4d8c-a611-8a29eca97a2c">
<img width="278" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/fda2866e-c0c0-4c7c-b07e-b0193d12d032">

 
### File Manager: 

It allows users to create, edit, and remove folders and text files. `system()` function from library <stdlib.h> is used to show directories and also for clear screen. `chdir()` [from `<unistd.h>` library] is used to change directories. File handling also plays a vital role in creating and editing a text file. 

<img width="299" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/33a1e5e4-5afc-4d4c-9c8b-14f6132984a4">

#### Opening a folder:

<img width="303" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/c5be5e9d-ceed-430d-9238-5c32f69c7f54">
<img width="323" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/5a8002b9-aaf5-421e-b144-fbe2f5817d26">

 
#### File Manager Options:

<img width="173" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/f85275ca-34aa-475c-ba23-27502cdf4fcc">

#### Folder Management:
 
<img width="153" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/b6e79ca7-f22b-43c6-b051-8567c892ee79">

##### Creating New Folder:
 
<img width="357" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/162220bc-d20e-49a3-8ba0-439b16bbc7ce">
<img width="337" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/63af56c9-2a89-4146-aa11-785b2aa82173">

 
##### Deleting a Folder:
  
<img width="452" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/632bba1f-e10f-466f-94e9-41bb5018aa70">


#### Options in File Management:

<img width="131" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/f8a100a5-b689-42f0-9791-8660afd952db">

##### Creating a new txt file:

<img width="273" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/26a1ce46-b205-4794-ad69-7a2d6d2b101c">
<img width="290" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/f2d7d7d7-787c-43e8-a3cb-141f032eaa5e">

##### Editing a txt file:
 
<img width="147" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/0e681d43-cd59-45a9-a335-1dfab8ad950a">
<img width="347" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/75deaa62-319b-4bcd-ab83-c15c7cfeb372">

 
##### Deleting a txt file:

<img width="313" alt="image" src="https://github.com/nagapraneethk/Smart-phone-Replica/assets/115631392/62647c37-935a-4faa-bac2-d9a04ad85d96">


## CONCLUSION:

The Phone Replica software application was successfully developed in C language and tested to ensure its functionality and reliability. The application provides a user-friendly interface for the user to interact with the application. The application provides the basic functionality of a mobile phone, making it a useful tool for learning and practicing programming in C language. The development of this application is an excellent opportunity to demonstrate the use of C programming language in developing practical applications and to provide a basic understanding of the functionality of a smartphone.

