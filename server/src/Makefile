CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=-I../include -Wall -Wextra -Werror
LDFLAGS=
LDLIBS=

SRCS=main.cpp server.cpp
OBJS=$(subst .cpp,.o,$(SRCS))
all: server

server: $(OBJS)
	$(CXX) $(LDFLAGS) -o server $(OBJS) $(LDLIBS)

main.o: main.cpp

server.o: server.cpp

clean:
	$(RM) $(OBJS)

distclean:
	$(RM) server
