#ifndef POINT_H
#define POINT_H

#include <string>
#include <iostream>

#include "vendors/glm/glm.hpp"

const int SCRWIDTH = 800;
const int SCRHEIGHT = 800;

//Types: c = circle, s = square, s = star.
class Point {
public:
    Point() {}

    //Point can have a name
    Point(std::string name, glm::vec2& position, char iconType, glm::vec3 color) : name(name), iconType(iconType), position(position), color(color) {
        normalizePosition();
    }

    

    //Change the center of the point
    void setPosition(glm::vec2& newPosition){
        position = newPosition;
        normalizePosition();
    }

    //Get information functions
    std::string getName() const { return name; }
    glm::vec2 getPosition() const { return position; }
    glm::vec2 getNormalizedPosition() const { return normalizedPosition; }

private:
    std::string name;
    char iconType;

    glm::vec2 normalizedPosition;
    glm::vec2 position;
    glm::vec3 color;

    void normalizePosition(){
        normalizedPosition.x = position.x / SCRWIDTH;
        normalizedPosition.y = position.y / SCRWIDTH;
    }
 
};

#endif