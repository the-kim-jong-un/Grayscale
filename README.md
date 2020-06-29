# Grayscale

This code helps convert colored images (or part of) to grayscale images and change brightness level and image formats at the same time.
The goal of this code, is to make it as eazy as possible to use *(see last readme paragraph)*.



### How to use

 * in src/main.cpp, call : Convert::grayscaleImage(loadPath, downloadPath, minX, maxX, minY, maxY, level);
 * Change paths and values
 * go to root, in console type *make* then type *./bin/main*
 
 
 
 ### Quick comments
 **level** : must be > 0 
  * level = 1 : doesn't change brightness
  * 0<level<1 : darker image
  * 1<level : brigther image
  
**minX && minY** : must be >= 0

**maxX && maxY** : must be smaller or equal to image width/height, if not, the image will not be converted to grayscale (program will not crash)

**paths** : download path can be the same as load path

**image format** : bmp, png, tga, jpg, gif, psd, hdr and pic are supported image format. Moreover we can for example load a .jpg image and download a .png grayscale version of itself.



### Dependencies 
This code uses SFML library. To download :
https://www.sfml-dev.org/tutorials/2.5/start-linux.php



### Why have I coded something like that when there is better software elsewhere
A friend of mine with no programming experience needed something extremely eazy to use, so that he could convert hundreds of images to grayscale images. 
