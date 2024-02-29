//
// Created by student on 29/02/24.
//

#ifndef PRINTSYSTEM_SYSTEM_H
#define PRINTSYSTEM_SYSTEM_H

#include <vector>
#include <string>
#include "tinyxml.h"
#include "Device.h"
#include "Job.h"

class System
{
public:
    System();

    void ReadData(std::string file_name);

private:
    void ReadDevice(TiXmlElement *device_element);
    void ReadJob(TiXmlElement *job_element);

    bool properlyInitialized() const { return _init == this; }

private:
    System* _init;
    std::vector<Device *> devices;
    std::vector<Job *> jobs;
};


#endif //PRINTSYSTEM_SYSTEM_H