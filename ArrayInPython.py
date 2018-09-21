import array as arr
vals = arr.array('i',[])

arr_Length  = int(input("\nEnter Length of Array "))
for i in range(arr_Length):
    arr_Element = int(input("\nEnter Next Array Element "))
    vals.append(arr_Element)

print("\n"+ str(vals))
