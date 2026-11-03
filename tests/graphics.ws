@@ Permafrost 0.5 graphics rendering differential. Pooka's Free Software License.
probe = graphicsProbe()
assert(probe["switchOk"] and probe["framebufferReady"] and probe["restoreOk"], "raw framebuffer probe")
graphicsEnter()
graphicsWait(1)
graphicsResize(32,24)
depths = {8,15,16,24,32}
for i = 1,5
    graphicsColorDepth(depths[i])
    graphicsFill(31,63,127)
    graphicsPixel(255,0,0,0,0)
    graphicsPixel(0,0,255,31,23)
    graphicsLine(0,255,0,1,1,30,22)
    graphicsLine(255,255,0,30,1,1,22)
    assert(runcode("/framebuffer.bin",$250000)==1,"framebuffer digest")
end
graphicsResize(160,120)
graphicsFill(224,96,0)
graphicsLeave()
serial("PF-GRAPHICS-PASS")
