//****************************************************************
// Author : Emeric SPIROUX
// Date   : 08/07/2014
//***************************************************************

-----------------------------------------------------------------
			Presentation
-----------------------------------------------------------------
Minitalk inter-process is in two part, first, it's a client who 
send series of 1 and 0 to an other process (serveur) that displays
the sentence that was sent.


-----------------------------------------------------------------
			Installation
-----------------------------------------------------------------
 1 - Make the makefile
 2 - Launch the server and keep the pid.
 3 - Launch the client : ./client [pid] [message]

-----------------------------------------------------------------
			Uninstall
----------------------------------------------------------------- 

 1 - make clean (keep server and client)
or 
 1 - make fclean (erase all)
