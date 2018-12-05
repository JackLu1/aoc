sum = 0
a = []
with open("f.txt") as f:
  line = 1
  while line:
    line = f.readline().rstrip("\n")
    if line != '':
      sum += int(line)
      if sum in a:
        print(sum)
        break
      else:
        a.append(sum)
    else:
      print('aaaa')
      f.seek(0,0)
      line = f.readline().rstrip("\n")
      
    
    

f.close()
