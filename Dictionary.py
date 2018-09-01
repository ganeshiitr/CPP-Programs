def FindCubesInDictionary(num):
    Cubes = {} # Empty Dictionary 
    i=1
    while i <= num:
        Cubes[i] = i * i * i 
        i=i+1
    return Cubes

Cubes =  FindCubesInDictionary(5)
#print(type(Cubes))
print(Cubes)

def DisplayDictionary(d):
    for i,j in d.items():#items function gives all key values of dictionary
        print(i,j)

d = { 1: 1, 2: 8, 3: 27, 4: 64, 5: 125 }
#print(type(d))
DisplayDictionary(d)
        
    
