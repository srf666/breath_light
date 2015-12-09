void setup ()
{
  pinMode(11,OUTPUT);
  pinMode(8,OUTPUT);
}
 
void loop()
{
  for (int a=0; a<=255;a++)                //循环语句，控制PWM亮度的增加
  {
    analogWrite(11,a);
    analogWrite(8,a);
    delay(5);                             //当前亮度级别维持的时间,单位毫秒            
  }
    for (int a=255; a>=0;a--)             //循环语句，控制PWM亮度减小
  {
    analogWrite(11,a);
    analogWrite(8,a);
    delay(5);                             //当前亮度的维持的时间,单位毫秒  
  }
  delay(80);                             //完成一个循环后等待的时间,单位毫秒
}
