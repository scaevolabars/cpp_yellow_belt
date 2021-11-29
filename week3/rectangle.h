//
// Created by serge on 11/29/2021.
//

#ifndef CPP_YELLOW_BELT_RECTANGLE_H
#define CPP_YELLOW_BELT_RECTANGLE_H

class Rectangle {
public:
    Rectangle(int width, int height);

    int GetArea() const;
    int GetPerimeter() const;
    int GetWidth() const;
    int GetHeight() const;

private:
    int width_, height_;
};
#endif //CPP_YELLOW_BELT_RECTANGLE_H
