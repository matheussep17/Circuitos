void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void AND(int A, int B)
{

  if (A == 1 && B == 1)
    digitalWrite(11, HIGH);
  else
    digitalWrite(11, LOW);
}
void OR(int A, int B)
{

  if (A == 1 || B == 1)
    digitalWrite(11, HIGH);
  else
    digitalWrite(11, LOW);
}

void NOT(int A, int I)
{

  if (I == !A)
    digitalWrite(11, HIGH);
  else
    digitalWrite(11, LOW);
}
void NAND(int A, int B, int I)
{

  if (I = !(A == 1 && B == 1))
    digitalWrite(11, HIGH);
  else
    digitalWrite(11, LOW);
}
void NOR(int A, int B, int I)
{

  if (I = !(A == 1 || B == 1))
    digitalWrite(11, HIGH);
  else
    digitalWrite(11, LOW);
}
void XOR(int A, int B, int I)
{

  if (I = (A ^ B))
    digitalWrite(11, HIGH);
  else
    digitalWrite(11, LOW);
}

void loop()
{
  int I = 1;
  int A = 0;
  int B = 0;
  while (I <= 4)
  {
    if (I <= 2)
      A = 1;
    else
      A = 0;

    if ((I % 2) == 1)
      B = 0;
    else
      B = 1;

    digitalWrite(13, A);

    digitalWrite(12, B);

    AND(A, B);
    OR(A, B);
    NOT(A, B);
    NAND(A, B);
    NOR(A, B);
    XOR(A, B);

    // aguarda 1000 millisecond(s)
    delay(1000);

    if (I == 4)
      I = 0;
    else
      I++;
  }
}