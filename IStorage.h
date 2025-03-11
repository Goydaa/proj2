 
#ifndef ISTORAGE_H
#define ISTORAGE_H

#include <vector>        
#include "RestorePoint.h" 


class IStorage {
public:
    virtual RestorePoint createRestorePoint(const std::vector<BackupObject>& files) = 0;
    virtual ~IStorage() = default; 
};

#endif // ISTORAGE_H
