OBJECTS=serverindex.cpp
CFLAGS=-g -Wall
LIBS=-lm
CC=g++
PROGRAM_NAME=serverindex

$(PROGRAM_NAME):$(OBJECTS)
	$(CC) $(CFLAGS) -o $(PROGRAM_NAME) $(OBJECTS) $(LIBS)
	cp serverindex /usr/bin/serverindex
	@echo "Copiato file programma in usr/bin/"	
	mkdir /opt/serverindex
	cp serverindex.conf.css /otp/serverindex/serverindex.conf.css      
	@echo "Copiato File css configurazione in /opt/serverindex/ "
	@echo "Compilazione completata!"
	@echo " "
