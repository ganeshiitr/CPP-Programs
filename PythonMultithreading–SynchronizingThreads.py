# for Thread class support
import threading 
from time import * 

#Global Variable i shared by both threads
i = 0 

# Create custom thread class as subclass of Builtin Thread class
class Even_Thread(threading.Thread):
    #run method contains logic that is executed by thread
    def run(self):
        #Use Global Variable here 
        global i
        while i <= 10 :
            # Acquire lock to synchronize thread
            threadLock.acquire()
            print("From Even Class Thread " + str(i))
            i+=1
            # Release lock for the next thread
            threadLock.release()
            #used sleep so that other thread can get chance easily
            sleep(1)
            
# Create custom thread class as subclass of Builtin Thread class
class Odd_Thread(threading.Thread):
    def run(self):
        #Use Global Variable here
        global i
        while i <= 10:
            # Acquire lock to synchronize thread
            threadLock.acquire()
            print("From Odd Class Thread " + str(i))
            i+=1
            # Release lock for the next thread
            threadLock.release()
            #used sleep so that other thread can get chance easily
            sleep(1)
            

# just creating thread class objects 
et_obj = Even_Thread()
ot_obj = Odd_Thread()

threadLock = threading.Lock()

# start method starts thread
# start method internally calls run method
et_obj.start()
ot_obj.start()

# Wait for all threads to complete
et_obj.join()
ot_obj.join()

print ("Exiting the Program!!!")
