class Parrot:



    def fly(self):

        print("Parrot can fly")

    

    def swim(self):

        print("Parrot can't swim")



class Penguin(Parrot):



    def fly(self):

        print("Penguin can't fly")

    

    def swim(self):

        print("Penguin can swim")



# common interface





#instantiate objects



`peggy = Penguin()



# passing the object




peggy.fly()

