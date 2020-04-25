class Geeks: 
     def __init__(self): 
          self._age = 0
       
     # using property decorator 
     # a getter function 
     @property
     def b(self): 
         print("getter method called") 
         return self._age 
       
     # a setter function 
     @age.setter 
     def b(self, a): 
         if(a < 18): 
            raise ValueError("Sorry you age is below eligibility criteria") 
         print("setter method called") 
         self._age = a 
  
mark = Geeks() 
  
mark._age = 20
  
print(mark.age) 