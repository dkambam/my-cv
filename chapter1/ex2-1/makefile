CFLAGS = -std=c++11 `pkg-config --cflags opencv`
LFLAGS = `pkg-config --libs opencv`


open_image: ex2-1.cpp
	c++ $(CFLAGS) $(LFLAGS) ex2-1.cpp -o open_image.out

clean:
	rm *.out