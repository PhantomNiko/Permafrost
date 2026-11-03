systemDevice = 2
userDevice = 4
automountScript = 'm,_=pcall(device,"mount",4,"WMFS64"); if m; t,e=pcall(device,"target",4); if t; s,_=pcall(read,"/startup.ws"); if s; runFile("/startup.ws"); end; else; print("WMFS64 target failed"); print(e); end; else; print("WMFS64 mount failed"); end'

loadOk, loadResult = pcall(bload, "/expand-disk.bin", $200000)
if not loadOk or loadResult == 0
	print("expand-disk load failed")
	if not loadOk
		print(loadResult)
	end
else
	mountOk, mountErr = pcall(device, "mount", userDevice, "WMFS64")
	if mountOk
		targetOk, targetErr = pcall(device, "target", userDevice)
		if targetOk
			print("Expanding user filesystem...")
			expandOk, result = pcall(call, $200000)
			if expandOk and result != 0
				systemOk, systemErr = pcall(device, "target", systemDevice)
				if systemOk
					delete("/expand-disk.bin")
					delete("/startup.ws")
					write("/startup.ws", automountScript)
					finalTargetOk, finalTargetErr = pcall(device, "target", userDevice)
					if not finalTargetOk
						print("WMFS64 final target failed")
						print(finalTargetErr)
					end
				else
					print("WMFS32 retarget failed")
					print(systemErr)
				end
			else
				print("WMFS64 expansion failed")
				if not expandOk
					print(result)
				end
			end
		else
			print("WMFS64 target failed")
			print(targetErr)
		end
	else
		print("WMFS64 mount failed")
		print(mountErr)
	end
end
