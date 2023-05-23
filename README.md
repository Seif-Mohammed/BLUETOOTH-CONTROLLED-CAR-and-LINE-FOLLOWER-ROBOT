![](vertopal_58be757e99b2491896dff1ac62e59c24/media/image1.png){width="13.333333333333334in"
height="7.5in"}

+-----------------------------------------------------------------------+
| > [BLUETOOTH CONTROLLED]{.underline}                                  |
+=======================================================================+
+-----------------------------------------------------------------------+

  -----------------------------------------------------------------------
  [CAR/LINE FOLLOWER ROBOT]{.underline}
  -----------------------------------------------------------------------

  -----------------------------------------------------------------------

  -----------------------------------------------------------------------
  CAR OPERATES IN TWO MODES
  -----------------------------------------------------------------------

  -----------------------------------------------------------------------

![](vertopal_58be757e99b2491896dff1ac62e59c24/media/image2.png){width="13.333333333333334in"
height="7.5in"}![](vertopal_58be757e99b2491896dff1ac62e59c24/media/image2.png){width="13.333333333333334in"
height="7.5in"}

After initiating timer 0&2 in Phase Correct PWM mode• Set the output to
be non-inverted as follows

> Setting output compare match value to zero will operate the OC pin as
> ground

![](vertopal_58be757e99b2491896dff1ac62e59c24/media/image3.png){width="13.333333333333334in"
height="7.5in"}

[MODE 1 ... BLUETOOTH CONTROLLED CAR]{.underline} • Car forward speed
controlled by using L293 IC by sending\
PWMs over OCO &OC2 pins using timer 0 & timer 2\
• The speed value is exactly the same Output compare\
match value

![](vertopal_58be757e99b2491896dff1ac62e59c24/media/image4.png){width="13.333333333333334in"
height="7.5in"}![](vertopal_58be757e99b2491896dff1ac62e59c24/media/image4.png){width="13.333333333333334in"
height="7.5in"}

+-----------------+-----------------+-----------------+-----------------+
| •               | > Speed value   | •               | It can be       |
|                 | > can range     |                 | controlled      |
|                 | > between 0 \~  |                 | using android   |
|                 | > 255 so        |                 | mobile phones   |
|                 |                 |                 | and             |
+=================+=================+=================+=================+
| •               | > we mapped     |                 | > the speed can |
|                 | > values to be  |                 | > be controlled |
|                 | > between 0\~9  |                 | > throw slider  |
|                 |                 |                 | > component in  |
+-----------------+-----------------+-----------------+-----------------+
|                 |                 |                 | > the APP       |
+-----------------+-----------------+-----------------+-----------------+
|                 | > The car       |                 |                 |
|                 | > contain       |                 |                 |
|                 | > ultrasonic    |                 |                 |
|                 | > sensor that   |                 |                 |
|                 | > use the       |                 |                 |
+-----------------+-----------------+-----------------+-----------------+

> ICU hardware mode in timer 1
>
> Speed (OC) value start\
> from 5 because less\
> than that motor will\
> not be able to\
> overcome friction force\
> between wheels & the\
> ground

![](vertopal_58be757e99b2491896dff1ac62e59c24/media/image5.png){width="13.333333333333334in"
height="7.5in"}

[MODE 2.... LINE]{.underline}\
[FOLLOWER ROBOT]{.underline}

![](vertopal_58be757e99b2491896dff1ac62e59c24/media/image6.png){width="13.333333333333334in"
height="7.5in"}

+-------------+-------------+-------------+-------------+-------------+
| •           | > By using  |   --------  | •           | > Line      |
|             | > hardware  |             |             | > follower  |
|             | > switch we |   --------  |             | > robot     |
|             | > can       |             |             | > move in   |
|             | > change    |             |             | > certain   |
|             | > car       |             |             | > black     |
|             |             |             |             | > track     |
|             |             |             |             | > designed  |
+=============+=============+=============+=============+=============+
|             |             |             |             | > by the    |
|             |             |             |             | > user      |
|             |             |             |             | > using the |
|             |             |             |             | > two IR    |
|             |             |             |             | > transmitt |
|             |             |             |             | er_Receiver |
|             |             |             |             | > Modules   |
+-------------+-------------+-------------+-------------+-------------+
|             | > operation |             |             |             |
|             | > mode to   |             |             |             |
|             | > line      |             |             |             |
|             | > follower  |             |             |             |
|             | > robot     |             |             |             |
+-------------+-------------+-------------+-------------+-------------+

![](vertopal_58be757e99b2491896dff1ac62e59c24/media/image7.png){width="13.333333333333334in"
height="7.5in"}

• The car move on the track without drifting

> using two infrared sensors

+-----------------------------------+-----------------------------------+
| •                                 | > And if an obstacle found 15cm   |
|                                   | > apart or less in                |
+===================================+===================================+
+-----------------------------------+-----------------------------------+

> front of the car ... the car will stop & BUZZER
>
> give alarm sound

![](vertopal_58be757e99b2491896dff1ac62e59c24/media/image8.png){width="13.333333333333334in"
height="7.5in"}

Components

+-----------------+-----------------+-----------------+-----------------+
| > **Two 4v      | **Bluetooth     | > **ON/OFF      | **BUZZER**      |
| > lithium**     | module HC05**   | > switch**      |                 |
+=================+=================+=================+=================+
+-----------------+-----------------+-----------------+-----------------+

> **Battery holder**

![](vertopal_58be757e99b2491896dff1ac62e59c24/media/image9.png){width="13.333333333333334in"
height="7.5in"}

Components

+-----------------------+-----------------------+-----------------------+
| > **16x2 LCD**        | > **the two IR        | **Ultrasonic Sensor** |
|                       | >                     |                       |
|                       |  transmitter-Receiver |                       |
|                       | > Modules**           |                       |
+=======================+=======================+=======================+
+-----------------------+-----------------------+-----------------------+

![](vertopal_58be757e99b2491896dff1ac62e59c24/media/image10.png){width="13.333333333333334in"
height="7.5in"}

Components

> **2 DC 9v Motors** **Support Wheel**

+-----------------------------------------------------------------------+
| > BY SEIF MOHAMED                                                     |
+=======================================================================+
+-----------------------------------------------------------------------+

![](vertopal_58be757e99b2491896dff1ac62e59c24/media/image11.png){width="13.333333333333334in"
height="7.5in"}

  -----------------------------------------------------------------------
  RAMADAN
  -----------------------------------------------------------------------

  -----------------------------------------------------------------------
