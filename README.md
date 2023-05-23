# BLUETOOTH-CONTROLLED-CAR-and-LINE-FOLLOWER-ROBOT
CAR OPERATES IN TWO MODES
### BLUETOOTH CONTROLLED

### CAR/LINE FOLLOWER ROBOT

###### CAR OPERATES IN TWO MODES


After initiating timer 0 & 2 in Phase Correct PWM mode

- Set the output to be non-inverted as follows

```
Setting output compare match value to zero will
operate the OC pin as ground
```

#### MODE 1 ... BLUETOOTH CONTROLLED CAR

- Car forward speed controlled by using L 293 IC by sending

##### PWMs over OCO &OC 2 pins using timer 0 & timer 2

- The speed value is exactly the same Output compare

##### match value


- Speed value can range between 0 ~ 255 so
    we mapped values to be between 0 ~ 9
       - It can be controlled using android mobile phones and
          the speed can be controlled throw slider component in
          the APP

##### Speed (OC) value start

##### from 5 because less

##### than that motor will

##### not be able to

##### overcome friction force

##### between wheels & the

##### ground

- The car contain ultrasonic sensor that use the
    ICU hardware mode in timer 1


### MODE 2 .... LINE

### FOLLOWER ROBOT


- By using hardware switch we can change car
    operation mode to line follower robot
       - Line follower robot move in certain black track designed
          by the user using the two IR transmitter_ReceiverModules


- The car move on the track without drifting
    using two infrared sensors
- And if an obstacle found 15 cm apart or less in
    front of the car ... the car will stop & BUZZER
    give alarm sound


**Two 4 v lithium
Battery holder**

## Components

**Bluetooth module HC** (^05) **ON/OFF switch BUZZER**


**16 x 2 LCD**

## Components

```
the two IR transmitter-Receiver Modules Ultrasonic Sensor
```

**2 DC 9 v Motors**

## Components

```
Support Wheel
```

# BY SEIF MOHAMED

# RAMADAN


