# 0x17. C - Dynamic libraries

**What you should learn from this project**

    At the end of this project you are expected to be able to explain to anyone, without the help of Google:

* What is a dynamic library, how does it work, how to create one, and how to use it
* What is the environment variable $LD_LIBRARY_PATH and how to use it
* What are the differences between static and shared libraries
* Basic usage nm, ldd, ldconfig

## Exercises

[libholberton.so](./libholberton.so)
```
Create the dynamic library libholberton.so containing all the functions listed below:
If you haven’t coded all of the above functions create empty ones, with the right prototype.
Don’t forget to push your holberton.h file in your repository, containing at least all the prototypes of the above functions.
```

[1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh)
```
Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.
```

[100-operations.so](./100-operations.so)
```
I know, you’re missing C when coding in Python. So let’s fix that!
Create a dynamic library that contains C functions that can be called from Python. See example for more detail.
```

[101-make_me_win.sh](./101-make_me_win.sh)
```
I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?
```
* Our mole got us a copy of the program, you can download it here. Our mole also gave us a piece of documentation:
* You can’t modify the program gm itself as Master Sysadmin Sylvain (MSS) always checks its MD5 before running it
* The system is an Linux Ubuntu 16.04
* The server has internet access
* Our mole will be only able to run two commands from a shell script, without being detected by MSS
* Your shell script should be maximum 3 lines long. You are not allowed to use ;, &&, ||, |, ` (it would be detected by MSS), and have a maximum of two commands
* Our mole has only the authorization to upload one file on the server. It will be your shell script
* Our mole will run your shell script this way: mss@gm_server$ . ./101-make_me_win.sh
* Our mole will run your shell script from the same directory containing the program gm, exactly 98 seconds before MSS runs gm with my numbers: ./gm 9 8 10 24 75 9
* MSS will use the same terminal and session than our mole
* Before running the gm program, MSS always check the content of the directory
* MSS always exit after running the program gm
* TL;DR; This is what is going to happen

## Author
### Kevin Yook 
Email: <yook00627@gmail.com> Twitter: [@yook00627](https://twitter.com/yook00627)
