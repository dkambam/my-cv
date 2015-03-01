CFLAGS = -std=c++11 `pkg-config --cflags opencv`
LFLAGS = `pkg-config --libs opencv`


open_video: ex2-2.cpp
	c++ $(CFLAGS) $(LFLAGS) ex2-2.cpp -o open_video.out

clean:
	rm *.out