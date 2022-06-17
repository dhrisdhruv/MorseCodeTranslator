# MorseCodeTranslator
All in one morse code transmitter and receiver with error checking, independent of time input.

 
Morse Code Translator using Arduino Uno

Submitted By:

DHRUV GUPTA 20BPS1010

Faculty:

ABIRAMI S

Vellore Institute of Technology, Chennai Campus  










Abstract- Morse code, which is employed by expert naval radio operators, is a means of communicating text information as a succession of on-off tones or lights that may be immediately comprehended by a trained listener or observer without the use of special equipment. People with impairments have long struggled with communication, which creates hurdles when communicating. When persons with motion difficulties have at least some controls over their motions, Morse code has been shown to be a useful assistive tool for helping them communicate. The proposed work aims to reduce the barriers that handicapped people face and make it simpler for them to connect with others.  
Key words: Arduino, morse code, transmitter, receiver  
1.	INTRODUCTION  
According to the Merriam-Webster online dictionary, Morse code is "any of two codes consisting of unevenly spaced dots and dashes or long and short sounds used for sending messages via aural or visual signals. Morse code has been used to relay sensitive information using dots since the early nineteenth century. Morse code may be remembered and communicated in a form that is apparent to human senses, such as sound waves or visible light, so that it can be immediately decoded by those who have been taught in the technique. Morse code is frequently conveyed through an information carrying medium such as electric current, radio waves, visible light, or sound waves, which is keyed on and off. The current or wave is present during the dot or dash period and missing during the period between dots and dashes. In creating the code, Morse's crucial insight was to evaluate how frequently each letter is used in English. The most widely used letters have shorter symbols, such as the letter "E," which is represented by a single "dot." In contrast, "Z," the least often used letter in English, was represented by the considerably longer and more complicated.  

2. PROJECT OBJECTIVES  
We'll use an Arduino UNO to convert text to and from Morse code in this project. We'll essentially type any desired phrase or text and get it in Morse code, which may then be delivered as light and sound messages through LED. We are light (led) in our project, so it may be utilized by people with special needs.  
3. METHODOLOGY   
  
Materials required for the hardware:
 
Figure 1 LED
	 
Figure 2 JUMPER WIRES
	 
Figure 3 BREADBOARD
	 
Figure 4 ARDUINO UNO
  
4. IMPLEMENTATION
 

Different buttons are used to enter dot and dash and to press enter to submit morse code. Different LEDs are connected to display dot and dash and end of string. Here, dot button is connected to pin3 and dot light is connected to pin11(green), dash button is connected to pin5 and dash light is connected to pin12(yellow), enter button is connected to pin7 and enter light is connected to pin13(red).
A user can choose between modes (encoder/decoder) and accordingly will be given the choice to either enter a text and convert it to morse code or to enter morse code and to convert it to text. In any case the assistive lights will help to user know what input/output is being processed. Green light represents a dot, yellow for dash, red light indicates end of a particular morse code.
  
5.	CODE ANALYSIS  
  
Code contains a menu function which is called in loop() and a choice is given to user to either use the encoder mode or decoder mode and accordingly further functions to encode/decode will be called.
For encoder mode, user will be given the choice to enter a string in the serial monitor and it is passed to encode() function where a morse code is generated and displayed to user along with respective LEDs blinking for dot and dash.
For decoder mode, user will have to enter a valid morse code using dot and dash buttons, the input is checked against valid morse codes and any error code is discarded saving the valid morse code and user is asked again to enter the morse code if any mistake was made, the input morse code is passed to decode() function where a text string is generated and displayed to user along with the assistive LEDs blinking for dot and dash.
  
  
6.	COMPLEXITY ANALYSIS  
  
This project aims to simplify entering the morse code by providing different buttons for dot and dash and enter button to submit. It also provides error checking against all valid morse code and re-input in case of an error without wasting the useful morse code enter before error, therefore saving time and computation. The code does the complex task to make morse code independent of time limit and make it easy for the user to wait for any amount of time between a dot and dash/dot. This allows user to be at ease while entering highly sensitive code. Independence from usual time constraint also allows user to send/receive complex morse code further encoded using different time gaps. This allows to transmit/receive the code without making it obvious for the middle man to interpret the code.
  
 
7.	PROJECT IN WORKING

 
Figure 5 Simulation

 
Figure 6 Connections with Serial Monitor
 
Figure 7 Working in Real Life
   
 
8.	Code Repository, Output, Simulation Links:

Online Simulation:
https://www.tinkercad.com/things/6QCN0AmIveZ-v2-morse-code-translator/editel?sharecode=sw6aKLirszHl0cQFyfMw9QwoDf8M7wIhYYlxsXICRF0

GitHub:
https://github.com/dhrisdhruv/MorseCodeTranslator.git


9.	REFERENCES: 
  
[1]Morse Code Translator Using the Arduino Platform: Crafting the Future of Microcontrollers Sérgio Silva(a,b,d), António Valente(a,b), Salviano Soares(a,c), M.J.C.S. Reis (a,c),Jean Paiva(a), Paulo 
Bartolomeu(d) 	SAI 	Computing 	Conference 	2016 	July 	13-15, 	2016 	| 	London, 	UK        https://doi.org/10.1109/SAI.2016.7556055  
[2]Paparao Nalajala, Bhavana Godavarth, M Lakshmi Raviteja and Deepthi Simhadri "Morse code  
Generator Using Microcontroller with Alphanumeric” International Conference on Electrical,  
Electronics,  	and  	Optimization  	Techniques  	(ICEEOT)  	–  	2016 https://doi.org/10.1109/ICEEOT.2016.7754788  
[3]Yang C-H, Yang C-H, Chuang L-Y, Truong T-K. The application of the neural network on Morse code recognition for users with physical impairments. Proceedings of the Institution of Mechanical Engineers, 	Part 	H: 	Journal 	of 	Engineering 	in 	Medicine. 	2001;215(3):325-331.  doi:10.1243/0954411011535920  
[4]Paridnya S. Mane1, Niharika B. Sharma2, Marzia N. Rizvi3, Prof. Neelam Phadnis4 "Adaptive Technology for Morse Code using Hindi Language.International Research Journal of Engineering and 
Technology 	(IRJET) 	Volume: 	07 	Issue: 	04 	| 	Apr 	2020 	. https://www.irjet.net/archives/V7/i4/IRJETV7I4954.pdf  
[5]Islam Atef; Sameh Tawfik Abd Elfattah "Utilization of Arduino Circuit to Design a Simplified Circuit to Encrypt Morse Signals Used In Naval Applications"The International Undergraduate Research Conference Article 74, Volume 2, Second International Undergraduate Research  
	Conference,  	IUGRC,  	2017 
https://journals.ekb.eg/article_90954.html#:~:text=10.21608/iugrc.2017.90954  
[6] https://www.codebug.org.uk/assets/steps/540/image_1.png  
[7]41240ea1-a590-4097-8a90-b7b0da149d70.jpg (1000×1000) (staticbg.com)  
[8]https://activedark.com/2012/10/25/fun-facts-what-are-l-e-d-lights/  
[9]https://en.wikipedia.org/wiki/Jump_wire#/media/File:A_few_Jumper_Wires.jpg  
[10]https://potentiallabs.com/cart/buy-arduino-uno-r3-clone-india 
[11]https://learn.sparkfun.com/tutorials/how-to-use-a-breadboard/all  
    
