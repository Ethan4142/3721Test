// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once
// Includes------------------------------------------
#include <frc/TimedRobot.h>
#include <frc/Joystick.h>
#include <frc/TimedRobot.h>
#include <frc/Timer.h>
#include <frc/drive/DifferentialDrive.h>
#include <ctre/phoenix/motorcontrol/GroupMotorControllers.h>
#include <ctre/phoenix/motorcontrol/can/TalonFX.h>
#include <ctre/phoenix/motorcontrol/can/WPI_TalonFX.h>
#include <ctre/phoenix/motorcontrol/can/TalonSRX.h>
#include <ctre/phoenix/motorcontrol/ControlMode.h>
#include "rev/CANSparkMax.h"

//-----------------------------------------------------
class Robot : public frc::TimedRobot {
  friend class chassis;
 public:
  frc::Joystick m_stick{0};
  
  Robot(){}
  void RobotInit() override;
  void RobotPeriodic() override;

  void AutonomousInit() override;
  void AutonomousPeriodic() override;

  void TeleopInit() override;
  void TeleopPeriodic() override;

  void DisabledInit() override;
  void DisabledPeriodic() override;

  void TestInit() override;
  void TestPeriodic() override;

  void SimulationInit() override;
  void SimulationPeriodic() override;
  
  
  private:
    
    int foo;
  //Robot variables
  enum direction {rgt, lft, fwd, bck};
       
    //frc::DifferentialDrive m_robotDrive{m_rgtF, m_lftF};
    
    
    frc::Timer m_timer;
  
    ctre::phoenix::motorcontrol::can::TalonSRX m_rgtF{7};
    ctre::phoenix::motorcontrol::can::TalonSRX m_lftF{5};
    ctre::phoenix::motorcontrol::can::TalonSRX m_rgtB{6};
    ctre::phoenix::motorcontrol::can::TalonSRX m_lftB{4};

    rev::CANSparkMax wheelie {2,rev::CANSparkMax::MotorType::kBrushless};
    
    void test();
};
