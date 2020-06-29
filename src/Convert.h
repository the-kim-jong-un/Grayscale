#ifndef GRAYSCALE_CONVERT_H
#define GRAYSCALE_CONVERT_H

#include <SFML/Graphics.hpp>

#include <string>
#include <iostream>

class Convert {
public :

    /////////////////////////////////// CONSTRUCTOR
    /**
     * @brief constructor
     * @param[in] imgPath : source path of the image to modify
     * @param[in] imgPathRes : path of the modified image
     * @param[in] minX : minimum of the image in x axis to grayscale
     * @param[in] maxX : maximum of the image in x axis to grayscale
     * @param[in] minY : minimum of the image in y axis to grayscale
     * @param[in] maxY : maximum of the image in y axis to grayscale
     * @param[in] level : level of brightness
     */
    static void grayscaleImage(const std::string &, const std::string &,
            const unsigned,
            const unsigned,
            const unsigned,
            const unsigned,
            const float);




    /////////////////////////////////// IMAGE MODIFYING PROCEDURES

    /**
     * @brief loops on x and y axis all the pixels to grayscale
     * @param[in] img : the image to grayscale
     * @param[in] minX : minimum of the image in x axis to grayscale
     * @param[in] maxX : maximum of the image in x axis to grayscale
     * @param[in] minY : minimum of the image in y axis to grayscale
     * @param[in] maxY : maximum of the image in y axis to grayscale
     * @param[in] level : level of brightness
     */
    static void grayscale(sf::Image &, const unsigned, const unsigned, const unsigned, const unsigned, const float);

    /**
     * @brief changes r,g,b values of a single pixel
     * @param[in] col : the color of a single pixel
     * @param[in] level : the level of brigthness
     */
    static void grayscalePixel(sf::Color &, const float);






    /////////////////////////////////// IMAGE PROCEDURES / FUNCTIONS
        /**
     * @brief loads image with help from SFML library
     * @param[in] imgPath : the image to load
     * @param[in] img : the SFML structure to load the image onto
     */
    static bool loadImage(const std::string &, sf::Image &);

    /**
     * @brief downloads image
     * @param[in] img : the image to download
     * @param[in] imgPathRes : the path of the download
     * @return true if image saved propely, false if not
     */
    static bool downloadImage(const sf::Image, const std::string &);

    /**
    * @briefs gets size of image  to after compare if boundaries are OK
    * @param[in] img : the image to gets size from
    * @param[in] size : the vector to put x and y size in
    * @return true if image loaded propely, false if not
    */
    static void getSize(const sf::Image, sf::Vector2u &);
};

#endif //GRAYSCALE_CONVERT_H
