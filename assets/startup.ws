result = runcode("/expand-disk.bin", $200000)
if result != 0
	delete("/expand-disk.bin")
	delete("/expand-disk.ws")
	delete("/startup.ws")
end
