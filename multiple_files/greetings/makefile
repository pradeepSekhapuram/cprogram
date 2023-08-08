all: app.o greetings.o app run
app: app.o greetings.o
	gcc app.o greetings.o -o app
app.o: app.c
	gcc -c app.c
greetings.o:
	gcc -c greetings.c
run:
	./app	
