serial("PF-CASES-BEGIN")
serial(2 + 3 * 4)
serial($200000)
serial(0x20)
serial(toNumber("-2147483648"))
serial(1.5 + 2.25)
serial("ice" + "berg")
a = array()
push(a, 10)
push(a, 20)
serial(len(a))
serial(get(a, 1))
serial(pop(a))
t = {name: "Permafrost"}
t["snow"] = 1
serial(t["name"])
serial(t["snow"] == 1)
serial(len(t))
serial(gsub("ice ice", "ice", "snow"))
i = 0
while i < 3
serial(i)
i += 1
end
if true
serial("branch")
else
serial("wrong branch")
end
repeat
i -= 1
until i == 0
serial(i)
write("/conformance.txt", "WMFS data")
serial(read("/conformance.txt"))
delete("/conformance.txt")
poke($200000, 184)
poke($200001, 42)
poke($200002, 0)
poke($200003, 0)
poke($200004, 0)
poke($200005, 195)
serial(call($200000))
serial(runcode("/nightmode.bin", $200000))
serial(runcode("/hello.bin", $200000))
serial(typeOf(true))
serial(typeOf(1.5))
serial(random(100))
serial(random())
serial("PF-CASES-END")
