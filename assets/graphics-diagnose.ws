@@ Switch to graphics mode internally, draw a raw framebuffer test pattern,
@@ hold it long enough for slow physical displays to sync, restore text mode,
@@ then print the captured mode details for debugging.

probe = graphicsProbe(15000)
print("switch ok: " + toString(probe["switchOk"]))
print("framebuffer ready: " + toString(probe["framebufferReady"]))
print("restore ok: " + toString(probe["restoreOk"]))
print("framebuffer physical: " + toString(probe["framebufferPhysical"]))
print("framebuffer pitch: " + toString(probe["framebufferPitch"]))
print("framebuffer size: " + toString(probe["framebufferWidth"]) + "x" + toString(probe["framebufferHeight"]) + "x" + toString(probe["framebufferBpp"]))
print("red layout: mask=" + toString(probe["redMask"]) + " shift=" + toString(probe["redShift"]))
print("green layout: mask=" + toString(probe["greenMask"]) + " shift=" + toString(probe["greenShift"]))
print("blue layout: mask=" + toString(probe["blueMask"]) + " shift=" + toString(probe["blueShift"]))
