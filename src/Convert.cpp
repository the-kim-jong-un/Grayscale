#include "Convert.h"

void Convert::grayscaleImage(const std::string & imgPath, const std::string & imgPathRes, const unsigned minX,
                             const unsigned maxX,
                             const unsigned minY,
                             const unsigned maxY,
                             const float level) {
    sf::Image img;
    sf::Vector2u size;
    if(loadImage(imgPath, img)) {
        getSize(img, size);
        if (size.x >= maxX && size.y >= maxY && minX >= 0 && minY >= 0) {
            grayscale(img, minX, maxX, minY, maxY, level);
            downloadImage(img, imgPathRes);
        } else {
            std::cout << "The chosen boundaries are incorrect" << std::endl;
            std::cout << "Boundaries should be between, x = 0, x = " << size.x << ", y = 0, y = " << size.y
                      << std::endl;
            std::cout << "Your boundaries are between, x = " << minX << ", x = " << maxX << ", y = " << minY << ", y = "
                      << maxY << std::endl;
        }
    }
}

bool Convert::loadImage(const std::string & imgPath, sf::Image & img) {
    if(img.loadFromFile(imgPath))
        return true;
    return false;
}

void Convert::getSize(const sf::Image img, sf::Vector2u & size) {
    size = img.getSize();
}

bool Convert::downloadImage(const sf::Image img, const std::string & imgPathRes) {
    if(img.saveToFile(imgPathRes))
        return true;
    return false;
}

void Convert::grayscale(sf::Image & img, const unsigned minX, const unsigned maxX, const unsigned minY,
        const unsigned maxY,
        const float level) {

    sf::Color col;

    for (unsigned i = minX; i < maxX; ++i){
        for (unsigned j = minY; j < maxY; ++j) {
            col = img.getPixel(i, j);
            grayscalePixel(col, level);
            img.setPixel(i, j, col);
        }
    }

}

void Convert::grayscalePixel(sf::Color & col, const float level) {
    float value = (float(col.r)*0.299 + float(col.g)*0.587 + float(col.b)*0.114);
    value *= level;
    col.r = value;
    col.g = value;
    col.b = value;
}
