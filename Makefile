
waitinglist: MainRest.o linkedlist.o functions.o
	 gcc -o waitinglist MainRest.o linkedlist.o functions.o

MainRest.o: MainRest.c Restaurant.h
	  gcc -c MainRest.c

linkedlist.o: linkedlist.c Restaurant.h
	  gcc -c linkedlist.c

functions.o: functions.c Restaurant.h
	 gcc -c functions.c