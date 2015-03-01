/*
Play a video file from disk
*/

#include "highgui.h"
#include <cstdio>
#define WAIT_TIME 33 // in ms
#define ESC_KEY 27 // ASCII value of ESC key

int main( int argc, char *argv[] ){

	if( argc != 2 ){
		fprintf(stderr, "Error: invalid arguments.\n");
		fprintf(stderr, "Usage:\n\t%s <video_path>\n", argv[0]);
		exit(1);
	}


	CvCapture *capture = cvCreateFileCapture( argv[1] );
	if( !capture ){
		printf("error: could not open %s\n", argv[1]);
		exit(1);
	}

	cvNamedWindow( "video", CV_WINDOW_AUTOSIZE );

	while( true ){
		static char c;

		IplImage *frame = cvQueryFrame( capture );
		if( !frame ) break;

		cvShowImage( "video", frame );

		c = cvWaitKey(WAIT_TIME);
		if( c == ESC_KEY ) break;
	}

	cvReleaseCapture( &capture );
	cvDestroyWindow( "video" );

	exit(0);
}