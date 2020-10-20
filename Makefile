CC=g++
CFLAGS=-c -Wall -g
LDFLAGS=
SOURCES=main.cpp CustomerInfoTypeImp.cpp PhoneServiceImp.cpp InternetServiceImp.cpp TelevisionServiceImp.cpp PromotionTypeImp.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main

all: $(SOURCES) $(EXECUTABLE)
    
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXECUTABLE) $(OBJECTS)
