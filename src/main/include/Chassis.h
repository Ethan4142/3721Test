#pragma once
#include "Robot.h"


class chassis: private Robot {
    Robot pchs;
  public:
    chassis(){
        
    }
    void run(double rgtpct, double lftpct);

   // void runWheelie(double pct);

    //void arcade(){};
};