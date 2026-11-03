start = $200000
addr = start
done = false
print("Permafrost Binary Writer v0.1:: " + toString(start))
print("Enter one byte at a time as $hex or decimal. Type END to finish.")
while not done
	print("BYTE @ " + toString(addr))
	entry = input()
	if entry == "END"
		print("Filename?")
		filename = input()
		size = addr - start
		bsave(filename, start, size)
		print("Saved " + toString(size) + " bytes to " + filename)
		done = true
	else
		value = toNumber(entry)
		poke(addr, value, 1)
		addr += 1
	end
end
