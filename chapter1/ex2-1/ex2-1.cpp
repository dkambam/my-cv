/*
Open and display an image from file.
*/

#include "highgui.h"
#include <cstdio>

int main( int argc, char *argv[] ){

	if( argc != 2 ){
		fprintf(stderr, "Error: invalid arguments.\n");
		fprintf(stderr, "Usage:\n\t%s <image_path>\n", argv[0]);
		exit(1);
	}

	IplImage* img = cvLoadImage( argv[1] );
	cvNamedWindow( "Example 1", CV_WINDOW_AUTOSIZE );
	cvShowImage( "Example 1", img );
	cvWaitKey(0);
	cvReleaseImage( &img );
	cvDestroyWindow( "Example 1" );

	exit(0);
}