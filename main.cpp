 
#include <iostream>
#include "BackupJob.h"
#include "SplitStorage.h"
#include "SingleStorage.h"

int main() {
    

    SplitStorage splitStorage;
    BackupJob job(&splitStorage);

    job.addFile(BackupObject("file1.txt"));
    job.addFile(BackupObject("file2.txt"));

    job.createRestorePoint(); 


    

    SingleStorage singleStorage;
    BackupJob job2(&singleStorage);

    job2.addFile(BackupObject("file3.txt"));
    job2.addFile(BackupObject("file4.txt"));

    job2.createRestorePoint(); 


    return 0;
}
