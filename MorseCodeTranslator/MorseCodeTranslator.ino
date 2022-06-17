//// start of encoder variables
String code = "";
int len = 0;
char ch;
char new_char;
//// end of encoder variables

//// start of decoder variables
int dot = 3;
int dash = 5;
int enterChar = 7;
String inputchar = "";
String outputmsg = "";
int green = 11;
int yellow = 12;
int red = 13;
int wrongcode = 0;
int unitDelay = 500;
//// end of decoder variables

//// start of setup function
void setup()
{
    pinMode(dot, INPUT);
    pinMode(dash, INPUT);
    pinMode(enterChar, INPUT);
    pinMode(green, INPUT);
    pinMode(yellow, INPUT);
    pinMode(red, INPUT);
    Serial.begin(9600);
}
//// end of setup function

void flush()
{
  //Stream.flush();
  Serial.flush();
  while(Serial.available()){Serial.read();}
}


//// start of encoder code
void printDot()
{
    Serial.print(".");
    digitalWrite(green, HIGH);
    delay(unitDelay);
    digitalWrite(green, LOW);
    delay(unitDelay);
    flush();
}

void printDash()
{
    Serial.print("-");
    digitalWrite(yellow, HIGH);
    delay(unitDelay * 3);
    digitalWrite(yellow, LOW);
    delay(unitDelay);
    flush();
}

void A()
{
    printDot();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
}
void B()
{
    printDash();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
}
void C()
{
    printDash();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
}
void D()
{
    printDash();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
}
void E()
{
    printDot();
    delay(unitDelay);
}
void f()
{
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
}
void G()
{
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
}
void H()
{
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
}
void I()
{
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
}
void J()
{
    printDot();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
}
void K()
{
    printDash();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
}
void L()
{
    printDot();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
}
void M()
{
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
}
void N()
{
    printDash();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
}
void O()
{
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
}
void P()
{
    printDot();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDot();
}
void Q()
{
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
}
void R()
{
    printDot();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
}
void S()
{
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
}
void T()
{
    printDash();
    delay(unitDelay);
}
void U()
{
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
}
void V()
{
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
}
void W()
{
    printDot();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
}
void X()
{
    printDash();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
}
void Y()
{
    printDash();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
}
void Z()
{
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
}
void one()
{
    printDot();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
}
void two()
{
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
}
void three()
{
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
}
void four()
{
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
}
void five()
{
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
}
void six()
{
    printDash();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
}
void seven()
{
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
}
void eight()
{
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
}
void nine()
{
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDot();
    delay(unitDelay);
}
void zero()
{
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
    printDash();
    delay(unitDelay);
}
void morse()
{
    if (ch == 'A' || ch == 'a')
    {
        A();
        Serial.print(" ");
    }
    else if (ch == 'B' || ch == 'b')
    {
        B();
        Serial.print(" ");
    }
    else if (ch == 'C' || ch == 'c')
    {
        C();
        Serial.print(" ");
    }
    else if (ch == 'D' || ch == 'd')
    {
        D();
        Serial.print(" ");
    }
    else if (ch == 'E' || ch == 'e')
    {
        E();
        Serial.print(" ");
    }
    else if (ch == 'f' || ch == 'f')
    {
        f();
        Serial.print(" ");
    }
    else if (ch == 'G' || ch == 'g')
    {
        G();
        Serial.print(" ");
    }
    else if (ch == 'H' || ch == 'h')
    {
        H();
        Serial.print(" ");
    }
    else if (ch == 'I' || ch == 'i')
    {
        I();
        Serial.print(" ");
    }
    else if (ch == 'J' || ch == 'j')
    {
        J();
        Serial.print(" ");
    }
    else if (ch == 'K' || ch == 'k')
    {
        K();
        Serial.print(" ");
    }
    else if (ch == 'L' || ch == 'l')
    {
        L();
        Serial.print(" ");
    }
    else if (ch == 'M' || ch == 'm')
    {
        M();
        Serial.print(" ");
    }
    else if (ch == 'N' || ch == 'n')
    {
        N();
        Serial.print(" ");
    }
    else if (ch == 'O' || ch == 'o')
    {
        O();
        Serial.print(" ");
    }
    else if (ch == 'P' || ch == 'p')
    {
        P();
        Serial.print(" ");
    }
    else if (ch == 'Q' || ch == 'q')
    {
        Q();
        Serial.print(" ");
    }
    else if (ch == 'R' || ch == 'r')
    {
        R();
        Serial.print(" ");
    }
    else if (ch == 'S' || ch == 's')
    {
        S();
        Serial.print(" ");
    }
    else if (ch == 'T' || ch == 't')
    {
        T();
        Serial.print(" ");
    }
    else if (ch == 'U' || ch == 'u')
    {
        U();
        Serial.print(" ");
    }
    else if (ch == 'V' || ch == 'v')
    {
        V();
        Serial.print(" ");
    }
    else if (ch == 'W' || ch == 'w')
    {
        W();
        Serial.print(" ");
    }
    else if (ch == 'X' || ch == 'x')
    {
        X();
        Serial.print(" ");
    }
    else if (ch == 'Y' || ch == 'y')
    {
        Y();
        Serial.print(" ");
    }
    else if (ch == 'Z' || ch == 'z')
    {
        Z();
        Serial.print(" ");
    }
    else if (ch == '0')
    {
        zero();
        Serial.print(" ");
    }
    else if (ch == '1')
    {
        one();
        Serial.print(" ");
    }
    else if (ch == '2')
    {
        two();
        Serial.print(" ");
    }
    else if (ch == '3')
    {
        three();
        Serial.print(" ");
    }
    else if (ch == '4')
    {
        four();
        Serial.print(" ");
    }
    else if (ch == '5')
    {
        five();
        Serial.print(" ");
    }
    else if (ch == '6')
    {
        six();
        Serial.print(" ");
    }
    else if (ch == '7')
    {
        seven();
        Serial.print(" ");
    }
    else if (ch == '8')
    {
        eight();
        Serial.print(" ");
    }
    else if (ch == '9')
    {
        nine();
        Serial.print(" ");
    }
    else if (ch == ' ')
    {
        delay(unitDelay * 7);
        Serial.print("/ ");
    }
    else
        Serial.println("Unknown symbol!");
      flush();
}

void String2Morse()
{
    len = code.length();
    for (int i = 0; i < len; i++)
    {
        ch = code.charAt(i);
        morse();
    }
    blink(red);
}
//// end of encoder code

//// start of decoder code
void blink(int led)
{
    digitalWrite(led, HIGH);
    delay(unitDelay);
    digitalWrite(led, LOW);
}

void decodeChar()
{
    static String morse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....",
                             "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-",
                             ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "!"};
    int i = 0;
    while (morse[i] != "!")
    {
        if (inputchar == morse[i])
        {
            outputmsg += char('A' + i);
            break;
        }
        i++;
    }
    if (morse[i] == "!")
    {
        Serial.print("[Discarding Wrong Code]");
        flush();
        blink(red);
    }
    inputchar = "";
}

void inputChar()
{
    while (digitalRead(enterChar) == LOW)
    {
        if (digitalRead(dot) == HIGH)
        {
            inputchar += ".";
            Serial.print(".");
            flush();
            blink(green);
        }
        if (digitalRead(dash) == HIGH)
        {
            inputchar += "-";
            Serial.print("-");
            flush();
            blink(yellow);
        }
    }
    Serial.print(" ");
    flush();
    blink(red);
}

void inputString()
{
    Serial.println("Enter a morse string");
    flush();
    while (1)
    {
        inputChar();
        if (inputchar == "")
            break;
        decodeChar();
        delay(unitDelay);
    }
    blink(red);
}

void showOutput()
{
    Serial.print("\nDecoded Message is : ");
    Serial.println(outputmsg);
    flush();
    code = outputmsg;
    String2Morse();
    outputmsg = "";
    blink(red);
}
//// end of decoder code

// start of menu
void menu()
{
    Serial.println("\nPress 1. For Encoder / 2. For Decoder");
    flush();
    int choice;
    while (Serial.available() == 0)
    {
    }
    choice = Serial.parseInt();
    flush();
    if (choice == 1)
    {
        Serial.println("Ready to take string input");
        flush();
        while (Serial.available() == 0)
        {
        }
        code = Serial.readStringUntil('\n');
        flush();
        Serial.print(code);
        Serial.print(" = ");
        String2Morse();
        Serial.println("");
    }
    else if (choice == 2)
    {
        inputString();
        flush();
        showOutput();
    }
    else
    {
        Serial.println("Wrong input ! Try again !");
        flush();
    }
}

//// start of loop function
void loop()
{
    menu();
}
//// end of loop function
