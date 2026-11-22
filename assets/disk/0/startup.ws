mountedUserDevice = 0
driverOk = true
driverErr = ""
graphicsOk = true
graphicsErr = ""

for userDevice = 1, 16
	mountOk, mountErr = pcall(device, "mount", userDevice, "FAT12")
	if not mountOk
		mountOk, mountErr = pcall(device, "mount", userDevice, "FAT16")
	end
	if not mountOk
		mountOk, mountErr = pcall(device, "mount", userDevice, "FAT32")
	end
	if mountOk
		targetOk, targetErr = pcall(device, "target", userDevice)
		if targetOk
			probeOk, probeData = pcall(read, "/Tundra.app/Contents/Info.plist")
			if not probeOk
				probeOk, probeData = pcall(read, "/Permafrost")
			end
			if probeOk
				mountedUserDevice = userDevice
				break
			end
		end
	end
end

if mountedUserDevice != 0
	driverOk, driverErr = pcall(drivers, "package", "auto")
	cls(true)
else
	print("FAT mount failed")
end

if not driverOk
	print(driverErr)
end
