userDevice = 4

mountOk, mountErr = pcall(device, "mount", userDevice, "FAT32")
if mountOk
	targetOk, targetErr = pcall(device, "target", userDevice)
	if not targetOk
		print("FAT32 target failed")
		print(targetErr)
	else
		font("bitmap-font.wbf")
		cls(true)
	end
else
	print("FAT32 mount failed")
	print(mountErr)
end
