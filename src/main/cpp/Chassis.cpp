#include "Robot.h"
#include "Chassis.h"

void chassis::run(double rgtpct, double lftpct){
    pchs.m_rgtF.Set(ctre::phoenix::motorcontrol::TalonSRXControlMode::PercentOutput, -rgtpct);
    pchs.m_rgtB.Set(ctre::phoenix::motorcontrol::TalonSRXControlMode::PercentOutput, -rgtpct);
    pchs.m_lftF.Set(ctre::phoenix::motorcontrol::TalonSRXControlMode::PercentOutput, lftpct);
    pchs.m_lftB.Set(ctre::phoenix::motorcontrol::TalonSRXControlMode::PercentOutput, lftpct);
}

