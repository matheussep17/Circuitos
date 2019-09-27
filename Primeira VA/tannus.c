
void setup()
{
  pinMode(13, output);
  pinMode(12, output);
  pinMode(11, output);
}

void and (int a, int b)
{
  if (a == 1 && b == 1)
  {
    digitalWrite(11, HIGH);
  }
  else
  {
    digitalWrite(11, LOW);
  }
}

if (a == 1 || b == 1)
{
  digitalWrite(11, HIGH);
}
else
{
  digitalWrite(11, LOW);
}
}

void NOT(int a, int i)
{
  if (i = !a)
  {
    digitalWrite(11, HIGH);
  }
  else
  {
    digitalWrite(11, LOW);
  }
}

void NAND(int a, int b, int i)
{
  if (i = !(a == 1 && b == 1))
  {
    digitalWrite(11, HIGH);
  }
  else
  {
    digitalWrite(11, LOW);
  }
}

void NOR(int a, int b, int i)
{
  if (i = !(a == 1 || b == 1))
  {
    digitalWrite(11, HIGH);
  }
  else
  {
    digitalWrite(11, LOW);
  }
}

void XOR(int a, int b, int i)
{

  if (i == (a ^ b))
  {
    digitalWrite(11, HIGH);
  }
  else
  {
    digitalWrite(11, LOW);
  }
}

void loop()
{
  int i = 1;
  int a = 0;
  int b = 0;

  while (i <= 4)
  {
    if (i <= 2)
    {
      a = 1;
    }
    else
    {
      a = 0;
    }

    if ((i % 2) == 1)
    {
      b = 0;
    }
    else
    {
      b = 1;
    }

    digitalWrite(13, a);
    digitalWrite(12, b);

    and(a, b);
    or (a, b);
    NOT(a, b);
    NAND(a, b, i);
    NOR(a, b, i);
    XOR(a, b, i);

    delay(1000);

    if (i == 4)
    {
      i = 0;
    }
    else
    {
      i++;
    }
  }
}