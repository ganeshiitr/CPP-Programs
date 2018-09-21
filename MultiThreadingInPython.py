# for Thread class support
from threading import * 
# for sleep function between two threads
from time import * 

# Create custom class as subclass of Thread class
class Even_Thread(Thread):
    #run method contains logic that is executed by thread
    def run(self):
        i = 0
        while i <= 10 :
            print("From Even Class Thread " + str(i))
            i+=2
            sleep(1)
        
class Odd_Thread(Thread):
    def run(self):
        j = 1 
        while j <= 10:
            print("From Odd Class Thread " + str(j))
            j+=2
            sleep(1)

# just creating thread class objects 
et_obj = Even_Thread()
ot_obj = Odd_Thread()

# start method starts thread
# start method internally calls run method
et_obj.start()
ot_obj.start()
