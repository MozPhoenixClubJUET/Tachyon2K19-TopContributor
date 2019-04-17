# Project Details
## Tech Used
- dlib==19.16.0
- numpy==1.15.4
- opencv-python==3.4.3.18
- playsound==1.2.2
- scipy==1.1.0

## Description
- The risk, danger and sometimes tragic results of drowsy driving are alarming. The National Highway Traffic Safety 
	Administration conservatively estimates that 100,000 police-reported crashes resulted in an estimated 1,550 deaths,
	71,000 injuries, and $12.5 billion in monetary losses due to driver fatigue.
	This application detects blinks and alerts of the driver's drowsiness. It handles variable lighting conditions and 
	works pretty well in day as well as in the dark. It uses histogram equalization and gamma correction to eliminate 
	the effect of lighting.
- A blink is supposed to last for 300 to 400 milliseconds. So, if the eye remains closed for more than 800-900 ms, we can say     that the person is either drowsy or sleeping. On the other hand, if the eye reopens after just 100ms, its considered an         invalid blink discarded.
