# PlayPal
University of Kentucky EE491 Senior Design PlayPal Team 08

This repository contains code for the Master and Slave branch of PlayPal. There is an Arduino Rev 3 connected to a force sensing resistor on the Master side. The Master code (fsr_master) controls the input of the digital pin when the FSR is pressed. The Slave code (fsr_slave) controls the output of the digital pin based on the communication in the Serial from the Master. There is an Arduino Rev 3 connected to an LED on the Slave side.

The Master code (fsr_master_multi) has been expanded to control multiple inputs of the digital pin when the FSRs are pressed and control the playmat LEDs. The Slave code (fsr_slave_multi) has been expanded to control the outputs of the digital pins based on the communication in the Serial from the Master.

![image](https://github.com/DevinD14/PlayPal/assets/66424619/f494536a-08a8-40a4-9839-5686966f152a)

FSR Master Schematic

![image](https://github.com/DevinD14/PlayPal/assets/66424619/65fb493c-6da7-45fc-b693-d2b53a181373)

FSR Slave Schematic
