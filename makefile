TARGET = app
SRCS = main.cpp
OBJS =$(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS)

clean:
	rm -rf $(OBJS)