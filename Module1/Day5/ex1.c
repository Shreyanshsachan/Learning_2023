#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box* box) {
    return box->length * box->width * box->height;
}

double calculateSurfaceArea(struct Box* box) {
    double length = box->length;
    double width = box->width;
    double height = box->height;
    
    return 2 * (length * width + length * height + width * height);
}

int main() {
    
    struct Box myBox = { 5.0, 3.0, 4.0 };

    
    struct Box* boxPtr = &myBox;

    
    double volume = boxPtr->length * boxPtr->width * boxPtr->height;

    
    double surfaceArea = 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);

    printf("Volume of the box: %.2f\n", volume);
    printf("Surface area of the box: %.2f\n", surfaceArea);

    return 0;
}
