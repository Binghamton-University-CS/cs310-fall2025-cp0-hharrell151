# This is a simplistic makefile with minimal functionality.
# More interesting makefiles to come!
#
# Specifiy the target
all: zoo

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
# Linking object files
zoo: zoo.o Animal.o AnimalsInZoo.o
	g++ zoo.o Animal.o AnimalsinZoo.o -o zoo
	

# Creating object files from source and related headers
Animal.o: Animal.cpp Animal.h
	g++ -Wall -Wextra -c Animal.cpp

AnimalsInZoo.o: AnimalsInZoo.cpp AnimalsInZoo.h
	g++ -Wall -Wextra -c AnimalsInZoo.cpp
# Specify how the object files should be created from source files
zoo.o: zoo.cpp
	g++ -Wall -Wextra -c zoo.cpp
	

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o zoo
