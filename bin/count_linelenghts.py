f = open('out.txt','r')

lines = []
f = f.read()

aline = 0
for c in f:
	if c != ' ' and c != '\n':
		aline += 1
	if c == '\n':
		lines.append(aline)
		aline = 0

for line in lines:
	print line
