


<h1 align="center">
<div align ="center">
 <h2 style="color:#FFD700"> TIC TAC TOE 
</div> 
</h1>

</br>
<h2 align="center">
<img alt="tictactoe" height="200" src="Images/tictactoe.gif"/></h2>

<h2 align="left">
<div>
 <b style="color:#888FFF"> INDEX </div> 
</h2></b></br>

<h3 style="font-family:Arial;"><b>

[1- CODE TIC TAC TOE (LINUX)](./TicTacToe_Linux.cpp)  

[2- CODE TIC TAC TOE (WINDOWS)](./TicTacToe.cpp)  || [DOWNLOAD EXE (WINDOWS)](./TicTacToe.exe)

[3- How to run](https://github.com/UP210878/UP210878_CPP/tree/main/U3%20Functions#--how-to-run--)  

[4- Things to consider](https://github.com/UP210878/UP210878_CPP/tree/main/U3%20Functions#--things-to-consider--)  

[5- Flowchart](https://github.com/UP210878/UP210878_CPP/tree/main/U3%20Functions#--flowchart--)  

[6- Code development & explanation](https://github.com/UP210878/UP210878_CPP/tree/main/U3%20Functions#--code-development--explanation--)  

[7- Closure](https://github.com/UP210878/UP210878_CPP/tree/main/U3%20Functions#--closure--)  

</h3></b></br></br></br></br></br>
    
<h2 align="center">
<div>
 <b style="color:#0AAFFF"><i> HOW TO RUN </div> 
</h2></b></br></i>

There are two game modes, **VS** which is the classic player vs player experience or **Singleplayer** which involves an A.I to act as the other player. When starting the game you select the gamemode, **1** for _VS_ or **2** for _Singleplayer_.  
Select your play on the board using number 1-9.

<h3 align="left">
<div>
 <b style="color:#FF0"> LINUX </div> 
</h3></b></br>

1. Download or clone the directory in github. (Using the command <q><i>git clone https://github.com/UP210878/UP210878_CPP.git</q></i>)</br></br>
2. Make sure you already have a compiler. More info: https://www.cyberciti.biz/faq/howto-compile-and-run-c-cplusplus-code-in-linux/</br></br>
3. Through the terminal, enter the directory where you cloned the repository using the cd command. (E.g: cd C:\Users\\(Username)\Desktop\UP210878_CPP\U3 Functions)</br></br>
4. While in the directory of the repository in <i>U3 Functions</i>, type: ./TicTacToe.</br></br>
5. Enjoy :D.</br></br></br>

<h3 align="left">
<div>
 <b style="color:#0A9"> WINDOWS </div> 
</h3></b></br>

1. Download the [Executable](./TicTacToe.exe)</br></br>
2. Run & Enjoy :) .</br></br>

OR</br></br>

1. Download the [Source code](./TicTacToe.cpp).</br></br>
2. Make sure you have a compiler available. I recommend [MinGW](https://sourceforge.net/projects/mingw/).</br></br>
3. Load the code in a source editor such as [VS Studio](https://code.visualstudio.com/).</br></br>
4. Compile it.</br></br>
5. Run & Enjoy :) .</br></br>

</br></br></br></br></br></br></br>

<h2 align="center">
<div>
 <b style="color:#F07777"><i> THINGS TO CONSIDER </div> 
</h2></b></br></i>

* **VS MODE:** You can't select what symbol you are playing; the game assumes that player 1 is <b style="color:#0AAFFF"> X </b> while player 2 is <b style="color:#FF0000"> O </b> 
* **SINGLEPLAYER**: Likewise, you'll play as <b style="color:#0AAFFF"> X </b> while the CPU will be <b style="color:#FF0000"> O </b>.
* **SINGLEPLAYER**: The player <b> ALWAYS </b> goes first, the CPU goes after.

<h3 align="center">
<div>
 <span style="color:red">Possible Errors</span>.</div> 
</h3></b></i>

<b>First and foremost, this tic-tac-toe is not perfect in any way shape or form.</b> Its very possible that the program may not run as expected sometimes and that may be due to a missinput, a compiling mistake or another error I've yet to figure out. I'm aiming to make this better but there are some time restrains due to college that may hinder the development of this, but I do intend on coming back to make some adjustments.</br></br>That being said, there are some common mistakes one can make when playing with this that may lead to the program to crash, these mistakes include but are not limited to:
<b>

1. Introducing a character instead of a number </br></br> <div align="center">
<img alt="tictactoe" height="200" src="Images/Char0.PNG"/> <img alt="tictactoe" height="200" src="Images/Char1.PNG"/>

2. Introducing a non-integer value</br></br><div align="center">
<img alt="tictactoe" height="200" src="Images/Decimal0.PNG"/> <img alt="tictactoe" height="200" src="Images/Decimal1.PNG"/>

</b></br><div align="center">I'm still trying to solve these issues but in the meantime I kindly ask for you (the user) to avoid these mistakes. Thank you :D.</div></br></br></br></br></br>

<h2 align="center">
<div>
 <b style="color:#399999"><i> FLOWCHART </div> 
</h2></b></i>


</br>
<div align="center">
<img alt="FlowChart" src="Images/Flowchart.png"/>
</div>

Made with draw.io/diagram.net. [Check them out!](https://github.com/jgraph/drawio-desktop) [Here's their website too!](https://www.diagrams.net/)
</br></br></br></br></br>

<h2 align="center">
<div>
 <b style="color:#FF6"><i> CODE EXECUTION & EXPLANATION </div> 
</h2></b></i>
<h3 align="left">
<div>
 <b style="color:#0A9"> VS MODE </div> 
</h3></b>
Since the Player vs Player mode is pretty straightforward due to both inputs being made by people, I'll use it to cover the basic functioning of the game.</br></br>

<img style="float: left;" src="Images/Game1.PNG">
<img style="float: right;" src="Images/Game0.PNG"> </br>
<p align ="center"> 
&emsp; GAME STARTING MENU. If you choose another value other than 1 or 2, the game exits automatically. 
  </p></br></br></br>




</br></br>
<h3 align="left">
<div>
 <b style="color:#0A9"> SINGLEPLAYER/VS CPU  </div> 
</h3></b>
Logical reasoning behind the CPU decisions.


</br></br></br></br></br>

<h2 align="center">
<div>
 <b style="color:#BFFF"><i> CLOSURE </div> 
</h2></b></i></br>

This project was a lot of fun to make; until we introduced the A.I. It was hard for me to grasp the reasoning behind the A.I decisions and it was more difficult figuring out how to make the A.I "think" by analizing the whole board. At first I was developing a macro rather than an A.I because what it did initially was play based on the user inputs but without analyzing or "thinking" before doing so. Basically, I was programming a set of instrucions based on the play inputs rather than an Artificial Intelligence. However with the help of my peers and some research I was finally able to figure out how to make it "think".  </br></br>

The code is also really messy and could've used some more refining to make it more readable; The biggest issue by far was overloading the main function, I should've made more functions that replaced some of the things I did in the main function because while reading it I feel like the code repeats itself a lot.  </br></br>

All problems aside, I consider I did the task succesfully and the program (for the most part) runs smoothly and does what it's supposed to do so I'd consider I was somewhat succesful in my program.  </br></br>

I also learned that github markdown does not allow any kinds of styles, not CSS nor HTML which is a shame because I like colors :disappointed: (Still allows for emojis though) . Fun fact, If you preview this Readme.md through VS Studio or the like, the markdown will read just fine, with color styles and everything. 