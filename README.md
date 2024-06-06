# Humanoid-Robot

Mapeo de Pines<br><br>



PCA Torso Derecha  -  Direccion  I2C = 0x40<br>
  
        |      |           |   Pin    |   Open  |  Closed  |  Center
 
    1   |  AA  |  Cadera   |    3     |         |          |          
    2   |  AB  |  Alita    |    4     |   100   |   145    |   125    
    3   |  AC  |  Hombro   |    7     |    0    |   270    |   140    
    4   |  AD  |  Tricep   |    8     |    0    |   270    |   140    
    5   |  AF  |  Bicep    |    11    |   80    |   150    |   145    



<br>PCA Brazo Derecha  -  Direccion  I2C = 0x41<br>
  
        |      |           |   Pin    |   Open  |  Closed  |  Center
  
    6   |  BA  |  Muñeca   |    3     |   180   |    0     |   90     
    7   |  BB  |  Pulgar   |    4     |    0    |   180    |   90     
    8   |  BC  |  Indice   |    7     |    0    |   180    |   90     
    9   |  BD  |  Medio    |    8     |   180   |    0     |   90     
    10  |  BF  |  Anular   |    11    |   180   |    0     |   90     
    11  |  BG  |  Meñique  |    12    |   180   |    0     |   90     



<br>PCA Cuello Centro  -  Direccion  I2C = 0x43<br>
  
        |      |           |   Pin    |   Open  |  Closed  |  Center
 
    12  |  CA  |  L Thro   |    3     |   40    |   100    |   70     
    13  |  CB  |  R Thro   |    4     |   120   |   190    |   150    
    14  |  CC  |  Center   |    7     |   50    |   110    |   80     
    15  |  CD  |   Head    |    8     |   0     |   180    |   90     



<br>PCA Torso Izquierda  -  Direccion  I2C = 0x4A<br>
  
        |      |           |   Pin    |   Open  |  Closed  |  Center
 
    16  |  DA  |  Cadera   |    3     |         |          |          
    17  |  DB  |  Alita    |    4     |   100   |   145    |   125    
    18  |  DC  |  Hombro   |    7     |    0    |   270    |   135    
    19  |  DD  |  Tricep   |    8     |    0    |   270    |   135    
    20  |  DE  |  Bicep    |    11    |   100   |   190    |   145    



<br>PCA Brazo Izquierda  -  Direccion  I2C = 0x50<br>
  
        |      |           |   Pin    |   Open  |  Closed  |  Center
  
    21  |  EA  |  Muñeca   |    3     |   180   |    0     |   90     
    22  |  EB  |  Pulgar   |    4     |   180   |    0     |   90     
    23  |  EC  |  Indice   |    7     |   180   |    0     |   90     
    24  |  ED  |  Medio    |    8     |    0    |   180    |   90     
    25  |  EE  |  Anular   |    11    |    0    |   180    |   90     
    26  |  EF  |  Meñique  |    12    |    0    |   180    |   90     
