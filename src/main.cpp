#include "Convert.h"

int main() {
    Convert::grayscaleImage("planet.jpg", "p.jpg", 0, 1080, 0, 1351,0.2);
    Convert::grayscaleImage("planet.jpg", "tttt.png", 0, 1080, 0, 1351,3);
    return 0;
}
