# Name of the program.
NAME     := main

# Sources and objects.
SRCS     := main.cpp
OBJS     := $(SRCS:.cpp=.o)

# Define all the compiling flags.
CXX      := g++
CXXFLAGS := -Wall -Werror -Wextra -pedantic-errors -std=c++17

# Compile and create everything.
all: $(NAME)

# Compile the program with the objects.
$(NAME): $(OBJS)
	@$(CXX) $(OBJS) -o $@

# This won't run if the source files don't exist or are not modified.
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

.PHONY: clean fclean re

# Rule to remove all the object files.
clean:
	@rm -f $(OBJS)
	@echo "[INFO] Objects removed!"

# Rule to remove everything that has been created by the makefile.
fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] $(NAME) removed!"

# Rule to re-make everything.
re:     fclean all
