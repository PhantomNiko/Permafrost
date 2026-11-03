@@ Run the native raw-framebuffer demo: draw a centered 100x100 red square border,
@@ fill the 98x98 interior with random colors, wait five seconds, then restore text.

ok, problem = pcall(graphicsDemoNative)
if not ok
	print("graphics demo failed")
	print(problem)
end
