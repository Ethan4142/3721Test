// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"
#include "Chassis.h"

chassis drive;
void Robot::RobotInit() {
  m_rgtB.Follow(m_rgtF);
  m_lftB.Follow(m_lftF);  
  
}
void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {
  m_timer.Reset();  //Reset and start timer
  m_timer.Start();
}
void Robot::AutonomousPeriodic() {
  if (m_timer.Get() < 2_s){
    //m_robotDrive.ArcadeDrive(0.5, 0,false); 
  }else{
    //..m_robotDrive.ArcadeDrive(0.0, 0.0, false);
  }
}

void Robot::TeleopInit() {}
void Robot::TeleopPeriodic() {
  double y = -m_stick.GetRawAxis(1);
  double x = m_stick.GetRawAxis(4);
  drive.run(y - x, y + x);
  
  //drive.runWheelie(m_stick.GetRawButton(1));
  //m_robotDrive.ArcadeDrive(-m_stick.GetY(), 
    //                      m_stick.GetX());
}

void Robot::DisabledInit() {}
void Robot::DisabledPeriodic() {}

void Robot::TestInit() {}
void Robot::TestPeriodic() {}

void Robot::SimulationInit() {}
void Robot::SimulationPeriodic() {}

void Robot::test(){
  //m_rgtF.Set(ctre::phoenix::motorcontrol::TalonSRXControlMode::PercentOutput, 0);
}

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif
