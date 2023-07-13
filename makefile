TARGET = app
SRCS = main.cpp user.cpp passwordChecker.cpp managment.cpp
OBJS =$(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS)

clean:
	rm -rf $(OBJS)