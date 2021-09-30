// Import a standard cpp header
#include <iostream>
// Import a user defined header
#include "arithmetic.h"

int main(){
    std::cout << "Initialising app..." << std::endl;
    char hostName[] = "Dell XP13 2019";
    char currentUser[100];
    std::string domain = "bbdnet";
    int cpu1 = 1;
    int cpu2  = 2;
    int totalProcessors = add(cpu1, cpu2);

    std::cout << "Host name "<< hostName << std::endl;
    std::cout <<"I have " << totalProcessors << " logical processors on my pc\n";
    std::cout << "Please enter your username: \n";

    std::cin >> currentUser;

    std::cout << "Current user: " << domain << "/" << currentUser << std::endl;
    return 0;
}
