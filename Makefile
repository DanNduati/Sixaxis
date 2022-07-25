OBJS = joystick_test.cpp
CC = g++

# -w suppresses all warnings
COMPILER_FLAGS = -w
LINKER_FLAGS = -lSDL2

OBJ_NAME = joystick_test

#This is the target that compiles our executable
all : $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o ./build/$(OBJ_NAME)
