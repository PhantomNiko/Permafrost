@@ Permafrost 0.5 FAT32 growth and persistence checks.
@@ Pooka's Free Software License.
for i = 1, 24
    path = "/pf-stress-" + toString(i)
    assert(write(path, "snow-" + toString(i)) == true, "FAT32 create")
end
for i = 1, 24
    path = "/pf-stress-" + toString(i)
    assert(read(path) == "snow-" + toString(i), "FAT32 read after root growth")
    assert(write(path, "ice") == true, "FAT32 overwrite")
    assert(read(path) == "ice", "FAT32 overwritten data")
    assert(delete(path) == true, "FAT32 delete")
end
serial("PF-FILESYSTEM-PASS")
