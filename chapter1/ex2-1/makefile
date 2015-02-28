cflags = -std=c++11 `pkg-config --cflags opencv`
lflags = `pkg-config --libs opencv`


open_image: ex2-1.cpp
	c++ $(cflags) $(lflags) ex2-1.cpp -o open_image.out