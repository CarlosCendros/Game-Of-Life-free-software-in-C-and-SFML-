#Generates .exe and .o file
#In VSCode, go to your current directory and type in the terminal "mingw32-make", if you are using windows
#To erase current .exe and .o files, type "mingw32-make clean"
#You need to change "Link/To/Your/Dependencies" for your actual directory to your dependencies

all: compile link

compile:
	g++ -c GameOfLife.cpp -I"Link/To/Your/Dependencies" -DSFML_STATIC
link:
	g++ GameOfLife.o -o GameOfLife -L"Link/To/Your/Dependencies" -lsfml-graphics-s -lsfml-window-s -lsfml-system-s -lsfml-audio-s -lsfml-main -lopengl32 -lgdi32 -lwinmm -lfreetype -lFLAC -lopenal32 -lpthread -lsfml-system-s -lopenal32 -lFLAC -lvorbisenc -lvorbisfile -lvorbis -logg
clean:
	del GameOfLife.o
	del GameOfLife.exe