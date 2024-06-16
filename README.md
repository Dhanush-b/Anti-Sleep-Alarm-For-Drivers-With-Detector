<h1 align="center">Anti Sleep Alarm for Drivers with Alcohol Detector</h1>
 



## Project Overview
Drowsiness is a significant cause of accidents worldwide, especially among drivers who are fatigued or lack sufficient sleep. This project aims to provide a technical solution to enhance driver safety by detecting drowsiness and alerting the driver before a potential accident occurs.

## Abstract
Our system detects driver drowsiness using eye blink detection. The system consists of two stages:
1. An alert system that warns the driver through a buzzer.
2. A fail-safe mechanism that cuts off power to the vehicle's motor if the driver remains drowsy, bringing the vehicle to a stop.

## Features
- Eye blink frequency analysis for drowsiness detection.
- Real-time alert system with a buzzer.
- Fail-safe mechanism to stop the vehicle in case of prolonged drowsiness.
- Alcohol detection to prevent the vehicle from starting if alcohol is detected.

## Components
- **Arduino Nano**: Microcontroller used to process the data from sensors.
- **Relay Module**: Used to control the motor based on the microcontroller's signal.
- **Buzzer**: Audio signaling device to alert the driver.
- **IR Sensor**: Detects obstacles and ensures proper operation of the system.
- **Eye Blink Sensor**: Monitors the driver's eye blinks to determine drowsiness.
- **BO Motor**: Represents the vehicle's motor controlled by the system.
- **MQ3 Sensor**: Alcohol sensor to detect the presence of alcohol, enhancing the safety system.
- **NRF24L01**: Wireless module for communication between different parts of the system.

## Block Diagram
![image](https://github.com/Dhanush-b/ANTI_SLEEP_ALARM_FOR_DRIVERS_WITH_ALCOHOL/assets/83268895/e7698228-1f43-42c7-95bd-de1add36ab8b)

The system's block diagram includes:
- Sensors for eye blink and alcohol detection.
- Arduino Nano for processing sensor data.
- Relay module for controlling the motor.
- Buzzer for alerting the driver.

## Working Principle
![image](https://github.com/Dhanush-b/ANTI_SLEEP_ALARM_FOR_DRIVERS_WITH_ALCOHOL/assets/83268895/470abb0f-b2be-44bf-a774-5aaad919fc4f)
Circuit Connection of Transmitting
![image](https://github.com/Dhanush-b/ANTI_SLEEP_ALARM_FOR_DRIVERS_WITH_ALCOHOL/assets/83268895/9f048ae0-ea56-48c4-b1fc-99ee4e5355de)
Circuit Connection of  Receiving

1. **Eye Blink Detection**: The eye blink sensor continuously monitors the driver's eye blinks. If the blink frequency indicates drowsiness, the Arduino Nano processes this data.
   - **Alerting**: The buzzer is activated to alert the driver.
   - **Fail-safe Mechanism**: If the driver does not respond, the relay cuts off power to the motor, safely stopping the vehicle.

2. **Alcohol Detection**: The MQ3 alcohol sensor checks for the presence of alcohol in the driver's breath.
   - **Prevention Mechanism**: If alcohol is detected, the Arduino Nano prevents the motor from starting, ensuring the vehicle remains stationary.


## Bill of Materials
| Component Name   | Description  | Quantity |
|------------------|--------------|----------|
| Arduino Nano     | Microcontroller | 1      |
| MQ3 Sensor       | Alcohol sensor  | 1      |
| BO Motor         | Motor         | 1      |
| Relay Module     | 1 Channel Relay | 1      |
| Buzzer           | 5V Buzzer     | 1      |
| NRF24L01         | RF Module     | 1      |
| Lithium Ion Battery | Battery   | 1      |
| Eye Blink Sensor | Eye blink detection | 1  |
| IR Sensor        | Infrared Sensor | 1      |
| PCB Board        | Printed Circuit Board | 1|




