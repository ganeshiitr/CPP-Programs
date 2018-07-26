
    
print "Hello World!\n"

class MyHashMap:
    def __init__(self):
        self.size=10
        self.map=[None]*self.size
        
    def insertInToMap(self,key,val):
        hash = 0
        for char in str(key):
            hash += ord(char)
            
        keyHash = hash%self.size
        keyvalList = [key,val]
        
         
        if self.map[keyHash] is None:
            self.map[keyHash] = list(keyvalList)
            return True
        else:
            return False
            
    def getValue(self,key):
        hash = 0
        for char in str(key):
            hash += ord(char)
            
        keyHash = hash%self.size
        if self.map[keyHash] is None:
            return False
        else:
            return self.map[keyHash]
            
        
        
h = MyHashMap()
print (h.insertInToMap('Ganesh',100))
print (h.insertInToMap('Andheri',200))
print (h.insertInToMap('Dolat',300))
print (h.getValue('Andheri'))
    
