@@ Run the native raw-framebuffer demo: draw a centered 100x100 red square border,
@@ fill the 98x98 interior with random colors, wait long enough for slow
@@ physical displays to sync, then restore text.

function runDemo()
	graphicsDemoNative(15000)
end

ok, problem = pcall(runDemo)
if not ok
	print("graphics demo failed")
	print(problem)
end
