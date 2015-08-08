import sys
size = int(sys.argv[1])

#Height fron size
heights = []
sup_stars = [0,4,4]
for i in range(size):
	heights.append(3+i)

tot = 4
i = 2
while i < size:
	if i > 1 and (i+1) % 2:
		tot += 2
	sup_stars.append(tot)
	i += 1

def get_line_len(floor, line):
	tot = 0;
	if floor > 0:
		tot += get_line_len(floor - 1, heights[floor - 1] - 1 )
		tot += 2 * (line+1) #Normal width increment
		tot += sup_stars[floor]
		return tot
	else:
		return 3 + 2 * line

floor = 0;
maxlen = get_line_len(size-1, heights[size-1])
while floor < size:
	line = 0;
	print 'begin floor \n'
	while line < heights[floor]:
		linelen = get_line_len(floor, line)
		print 'Length: ', linelen, ' , supstars: ', sup_stars[floor], '\n'
		line += 1
	floor += 1
	print 'end floor \n'
