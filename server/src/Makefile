CC=clang
CXX=clang++
RM=rm -f
CPPFLAGS=-I../include -Wall -Wextra -Werror -flto -O2 -fomit-frame-pointer

SRCS=main.cpp server.cpp scheduler.cpp 
all: scheduler

scheduler: $(SRCS)
	$(CXX) $(CPPFLAGS) -o scheduler $(SRCS)

distclean:
	$(RM) scheduler
