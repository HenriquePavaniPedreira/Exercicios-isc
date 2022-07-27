e = 0; b = 0; s = 0; alarme = 0; luz = 0

while e == 0 or e == 1 or e ==2 :
  b = int(input("Botão: "))
  s = int(input("Sensor: "))
  
  if e == 0 and b == 1:
      e = 1
      alarme = 0
      luz = 1
      
  elif e == 1 and s == 1:
      e = 2
      alarme = 1
      luz = 1
      
  elif e == 2 and b == 1:
      e = 0
      alarme = 0
      luz = 0

  if alarme == 1:
    print('Alarme ligado')
  elif alarme == 0:
    print('Alarme desligado')

  if luz == 1:
    print('Luz acesa')
  elif luz == 0:
    print('Luz apagada')
