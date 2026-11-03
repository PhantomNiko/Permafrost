@@ Exercise the WinterScript graphics API in ordered checkpoints. On any script
@@ error, force a return to text mode and print the last stage that started.

stage = "boot"

function mark(name)
	stage = name
	serial("graphics-api-demo " + name)
	return name
end

function pause(ms)
	graphicsWait(ms)
end

function runDemo()
	mark("enter-call")
	graphicsEnter()
	mark("enter-return")
	pause(250)

	mark("resize-call")
	graphicsResize(320, 200)
	mark("resize-return")
	pause(250)

	mark("depth32-call")
	graphicsColorDepth(32)
	mark("depth32-return")
	pause(250)

	mark("fill-red-call")
	graphicsFill(255, 0, 0)
	mark("fill-red-return")
	pause(500)

	mark("fill-blue-call")
	graphicsFill(32, 96, 192)
	mark("fill-blue-return")
	pause(500)

	mark("pixel-center-call")
	graphicsPixel(255, 255, 255, 160, 100)
	mark("pixel-center-return")
	pause(500)

	mark("fill-green-call")
	graphicsFill(0, 192, 0)
	mark("fill-green-return")
	pause(500)

	mark("pixel-corners-call")
	graphicsPixel(255, 255, 255, 0, 0)
	graphicsPixel(255, 255, 255, 319, 0)
	graphicsPixel(255, 255, 255, 0, 199)
	graphicsPixel(255, 255, 255, 319, 199)
	mark("pixel-corners-return")
	pause(500)

	mark("fill-cyan-call")
	graphicsFill(0, 192, 192)
	mark("fill-cyan-return")
	pause(500)

	mark("line-top-call")
	graphicsLine(255, 255, 255, 0, 0, 319, 0)
	mark("line-top-return")
	pause(500)

	mark("fill-yellow-call")
	graphicsFill(224, 224, 0)
	mark("fill-yellow-return")
	pause(500)

	mark("line-box-call")
	graphicsLine(255, 255, 255, 0, 0, 319, 0)
	graphicsLine(255, 255, 255, 319, 0, 319, 199)
	graphicsLine(255, 255, 255, 319, 199, 0, 199)
	graphicsLine(255, 255, 255, 0, 199, 0, 0)
	mark("line-box-return")
	pause(500)

	mark("fill-magenta-call")
	graphicsFill(192, 0, 192)
	mark("fill-magenta-return")
	pause(500)

	mark("line-diagonals-call")
	graphicsLine(255, 255, 255, 0, 0, 319, 199)
	graphicsLine(255, 255, 255, 319, 0, 0, 199)
	mark("line-diagonals-return")
	pause(500)

	mark("depth16-call")
	graphicsColorDepth(16)
	mark("depth16-return")
	pause(250)

	mark("fill-teal-call")
	graphicsFill(0, 160, 128)
	mark("fill-teal-return")
	pause(500)

	mark("resize-small-call")
	graphicsResize(160, 120)
	mark("resize-small-return")
	pause(250)

	mark("fill-orange-call")
	graphicsFill(224, 96, 0)
	mark("fill-orange-return")
	pause(500)

	mark("depth8-call")
	graphicsColorDepth(8)
	mark("depth8-return")
	pause(250)

	mark("fill-white-call")
	graphicsFill(255, 255, 255)
	mark("fill-white-return")
	pause(1000)
end

ok, problem = pcall(runDemo)
leaveOk = graphicsLeave()

if ok
	print("graphics api demo complete")
	print("stage " + stage)
else
	print("graphics api demo failed")
	print("stage " + stage)
	print(problem)
end

print("leave " + toString(leaveOk))
