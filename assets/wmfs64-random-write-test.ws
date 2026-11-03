@@ Write 20,000 random-numbered files into the active WMFS64 root.

iterations = 20000
maxRandom = 2147483647
completed = 0

seed = getTimeMs()
if seed <= 0
	seed = 1
end
math["randomSeed"](seed)

print("WMFS64 random write test")
print("Writing " + toString(iterations) + " files")

for index = 1, iterations
	fileNumber = random(maxRandom)
	valueNumber = random(maxRandom)
	path = "/" + toString(fileNumber)

	writeOk, writeResult = pcall(write, path, toString(valueNumber))
	if not writeOk or writeResult != true
		print("Write failed at iteration " + toString(index))
		print("Path: " + path)
		if not writeOk
			print(writeResult)
		end
		break
	end

	completed = index
	if index % 1000 == 0
		print("Completed " + toString(index) + " writes")
	end
end

print("Completed " + toString(completed) + " writes total")
