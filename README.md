# Bluetooth_Controlled_Car
A bluetooth controlled car using Arduino. Which can get commands from the any phone's Bluetooth which of course should be connected to car's bluetooth module and can be controlled via app in the phone

Components Used:
  
1. Arduino Uno(Atmel microcontroller)
2. BO Motors
3. Lithium ion battery(These batteries are great resource for energy)
4. Motor Driver(As the output current from the arduino is not sufficient to drive the motors)
5. HC05 Bluetooth module(This bluetooth module cna communicate with arduino using UART)

Working:
        The blutooth module receives the signal from the connected device and send it to arduino using UART communication protocal. After receiving the message the arduino decodes it and apply certain action. This action is sent to motor driver which is connected to Lithium ion Batteries for more power takes appropriate action like acting all four motors so moving straight.
        
