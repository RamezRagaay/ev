//#include <bits/stdc++.h>
//#include "bmplib.h"
//using namespace std;
//unsigned char image[SIZE][SIZE];

//void loadImage () {
//    char imageFileName[100];
//
//    // Get gray scale image file name
//    cout << "Enter the source image file name: ";
//    cin >> imageFileName;
//
//    // Add to it .bmp extension and load image
//    strcat (imageFileName, ".bmp");
//    readGSBMP(imageFileName, image);
//}
//void saveImage () {
//    char imageFileName[100];
//
//    // Get gray scale image target file name
//    cout << "Enter the target image file name: ";
//    cin >> imageFileName;
//
//    // Add to it .bmp extension and load image
//    strcat (imageFileName, ".bmp");
//    writeGSBMP(imageFileName, image);
//}
//
////_________________________________________
//void doSomethingForImage() {
//    for (int i = 0; i < SIZE; i++) {
//        for (int j = 0; j < SIZE; j++) {
//
///* Example code to convert to BW the image
//   A better version should NOt use 127 but the
//   average of the pixels
//*/
//            if (image[i][j] > 127)
//                image[i][j] = 255;
//            else
//                image[i][j] = 0;
//
//// do something with the image
//        }
//    }
//}
//int main() {
//    loadImage();
//    doSomethingForImage();
//    saveImage();
//    return 0;
//}
