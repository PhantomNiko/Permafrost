@@ Permafrost 0.3 WMFS64 growth and persistence checks.
@@ Pooka's Free Software License.
for i = 1, 200
    path = "/pf-stress-" + toString(i)
    assert(write(path, "snow-" + toString(i)) == true, "WMFS64 create")
end
for i = 1, 200
    path = "/pf-stress-" + toString(i)
    assert(read(path) == "snow-" + toString(i), "WMFS64 read after root growth")
    assert(write(path, "ice") == true, "WMFS64 overwrite")
    assert(read(path) == "ice", "WMFS64 overwritten data")
    assert(delete(path) == true, "WMFS64 delete")
end
serial("PF-WMFS64-PASS")
