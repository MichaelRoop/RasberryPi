
// The <> bracketing has the Linux WSL path included if using WSL. 
// Not sure what happens with remote builds such as for Rasberry which has to be 
// compiled on the Rasberry PI due to it being an ARM processor
#include <cstdio>
#include <mutex>
#include <iostream>

// This is in the same project so you only need the header name
// The "" bracketing allows access to real paths relative to the project root
#include "TestHeader1.h"

// Here you have the path to the shared project file header.  
// The related cpp is in the shared source filter of this project so it can be compiled here
//    When adding to the filter, the relative path of the cpp is added to it
// The "" bracketing allows access to real paths. The <> has the Linux WSL path included
#include "../TestSharedProject/WriteToConsole.h"


int main() {
    for (int i = 0; i < 10; i++) {
        std::cout << " Lots of iterations:" << i << std::endl;
    }

    printf("BEFORE mutex\n");
    std::mutex m;
    printf("BEFORE lock\n");
    m.lock();
    printf("hello from LinuxConsoleTest! gnarly stuff\n");
    m.unlock();
    printf("AFTER lock\n");

    // Object in shared project - Not a static or dynamic library. Just holder for files
    WriteToConsoleTest t;// = new WriteToConsoleTest();
    t.PrintCount();
    t.PrintCount();
    t.PrintCount();

    //LinuxProject1VGDBTest();

    DoIt d;
    d.PrAndIncr();
    d.PrAndIncr();

    printf("AFTER PR and INCR\n");


    return 0;
}