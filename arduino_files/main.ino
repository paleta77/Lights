

void setup(){
    resetAllValues();
    int blue = 2; //digital port
    int red = 3; //pwm port
    int green = 4; //digital port
    analogWrite(blue, 255);
}

void loop(){
    
}

void resetAllValues(){
    analogWrite(1, 0);
    analogWrite(2, 0);
    analogWrite(3, 0);
    analogWrite(4, 0);
    analogWrite(5, 0);
    analogWrite(6, 0);
    analogWrite(7, 0);
    analogWrite(8, 0);
    analogWrite(9, 0);
    analogWrite(10, 0);
    analogWrite(11, 0);
    analogWrite(12, 0);
    analogWrite(13, 0);
}