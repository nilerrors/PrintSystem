//
// Created by student on 29/02/24.
//

#ifndef PROJECTTITLE_DEVICE_H
#define PROJECTTITLE_DEVICE_H

#include <string>

#include "tinyxml.h"

class Device
{
public:
    Device(TiXmlElement *device_element);

    Device(const std::string &name, int emission, int speed);

private:
    Device *init_;
    std::string name;
    int emission;
    int speed;
};


#endif //PROJECTTITLE_DEVICE_H
