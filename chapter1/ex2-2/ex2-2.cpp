/*
Play a video file from disk
*/

#include "highgui.h"
#include <cstdio>

int main( int argc, char *argv[] ){

	if( argc != 2 ){
		fprintf(stderr, "Error: invalid arguments.\n");
		fprintf(stderr, "Usage:\n\t%s <video_path>\n", argv[0]);
		exit(1);
	}


	exit(0);
}