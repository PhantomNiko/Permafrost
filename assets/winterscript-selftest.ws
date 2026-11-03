@@ WinterScript self-test for 0.5 beta

assert(WINTER_VERSION == 0.5, "WINTER_VERSION should be 0.5")
assert(WINTER_RELEASE == "Beta", "WINTER_RELEASE should be Beta")
assert(typeOf(not) == "not", "standalone not should be the not value")
assert(missingValue == not, "missing variables should resolve to not")
assert((not false) == true, "not false should be true")
assert(typeOf(package) == "table" and package["path"] == "" and package["cpath"] == "", "package metadata table should exist")

native shared = 12
local hidden = 77
local bareA, bareB, bareC
semiA = 1; semiB = 2; semiC = semiA + semiB

assert(bareA == not and bareB == not and bareC == not, "bare local declarations should default to not")
assert(semiA == 1 and semiB == 2 and semiC == 3, "semicolon-separated statements should work")

function readShared()
	return shared
end

function readHidden()
	return hidden
end

assert(readShared() == 12, "native variables should be visible inside functions")
assert(readHidden() == 77, "local variables should be visible inside nested functions")

if true
	assert(shared == 12, "native variables should be visible in nested blocks")
	assert(hidden == 77, "local variables should remain visible in nested if blocks")
end

for i = 1, 1
	assert(shared == 12, "native variables should be visible in loops")
	assert(hidden == 77, "local variables should remain visible in loops")
end

assert(hidden == 77, "local variables should remain visible in the current block")

function add(x, y)
	return x + y
end

native function nativeMul(x, y)
	return x * y
end

local function localOnly()
	return 123
end

runner = add
box = {run: runner}
assert(box["run"](4, 5) == 9, "functions should be first-class values")
assert(nativeMul(3, 4) == 12, "native function declarations should work")
assert(localOnly() == 123, "local functions should be callable in the current block")

if true
	assert(localOnly() == 123, "local functions should remain visible in nested blocks")
end

function triple()
	return 1, 2, 3
end

a, b, c, d = triple()
assert(a == 1 and b == 2 and c == 3 and d == not, "multi-value returns and assignments should work")

function collectVarArgs(head, ...)
	local first, second, third = ...
	return head, first, second, third
end

va, vb, vc, vd = collectVarArgs(4, 5, 6, 7)
assert(va == 4 and vb == 5 and vc == 6 and vd == 7, "vararg functions should expose extra values through ...")

decayCount = 0
decay function stepDecay(amount)
	decayCount += amount
	decayCount += amount
end

stepDecay(5)
assert(decayCount == 5, "decay functions should run one scheduled statement after yielding")
assert(decayCount == 10, "decay functions should resume on later statements")

decayLoopCount = 0
decay function loopDecay()
	while decayLoopCount < 12
		decayLoopCount += 1
		decayLoopCount += 10
	end
end

loopDecay()
assert(decayLoopCount == 1, "decay while loops should run one body statement per turn")
assert(decayLoopCount == 11, "decay while loops should resume inside the body")
assert(decayLoopCount == 12, "decay while loops should return through the loop header")
assert(decayLoopCount == 22, "decay while loops should continue after re-entering the body")

decayKilled = 0
decay function doomedDecay()
	decayKilled += 1
	decayKilled += 10
end

doomedDecay()
kill()
assert(decayKilled == 1, "kill should stop the active decay function")

function buildNestedAccessor()
	local hiddenTable = {{hp: 7}}
	local hiddenText = "nest"
	function nestedRead(i)
		return hiddenTable[i]["hp"], hiddenText
	end
	return nestedRead(1)
end

nestedHp, nestedText = buildNestedAccessor()
assert(nestedHp == 7 and nestedText == "nest", "nested functions should capture outer locals")

branch = 0
for i = 1, 6
	if i == 2
		branch += 1
	elseif i == 4
		branch += 10
		break
	else
		branch += 100
	end
end
assert(branch == 211, "elseif and break should work")

repeatCount = 0
repeat
	repeatCount += 1
until repeatCount == 3
assert(repeatCount == 3, "repeat/until should work")

iterSum = 0
for idx, value in ipairs({2, 4, 6})
	iterSum += idx + value
end
assert(iterSum == 18, "ipairs generic for loops should work")

map = {alpha: 1, beta: 2}
pairSum = 0
for key, value in pairs(map)
	pairSum += len(key) + value
end
assert(pairSum == 12, "pairs generic for loops should work")

nextKey1, nextValue1 = next(map)
nextKey2, nextValue2 = next(map, nextKey1)
assert(nextKey1 == "alpha" and nextValue1 == 1 and nextKey2 == "beta" and nextValue2 == 2, "next should iterate deterministically")

arr = {10, 20, 30}
assert(arr[1] == 10 and arr[3] == 30 and arr[4] == not, "arrays should be 1-based and return not on missing entries")
arr[4] = 40
assert(arr[4] == 40 and #arr == 4, "array writes and # should work")

mixed = {1, 2, ["name"] = "winter"}
assert(mixed[1] == 1 and mixed[2] == 2 and mixed["name"] == "winter" and len(mixed) == 2, "mixed brace literals should preserve numeric entries")

tree[1]["branch"][1] = "leaf"
assert(tree[1]["branch"][1] == "leaf", "indexed assignment should auto-create nested containers")

hybrid = {4, 5}
hybrid[0] = 3
assert(hybrid[0] == 3 and hybrid[1] == 4 and hybrid[2] == 5, "array-to-table promotion should preserve existing values")

assert((10 / 4) > 2.4 and (10 / 4) < 2.6, "slash division should be floating-point")
assert((10 \ 4) == 2, "backslash division should be integer division")
assert((2 ^ 3) == 8, "exponentiation should work")
assert(("hi" and 7) == 7, "and should return the right operand when the left side is truthy")
assert((not or 9) == 9, "or should return the fallback operand when the left side is not")

assert("winter"["upper"]() == "WINTER", "bound string methods should work")
assert(string["len"]("winter") == 6, "string len should work")
assert(string["lower"]("WS") == "ws", "string lower should work")
assert(string["sub"]("winter", 2, 4) == "int", "string sub should work")

findStart, findEnd = string["find"]("winter 42", "%d+")
assert(findStart == 8 and findEnd == 9, "string find should return match bounds")

findOnly = string["find"]("winter 42", "%d+")
assert(findOnly == 8, "single-target call assignment should keep only the first return value")

matchWord, matchNumber = string["match"]("cat-42", "(%a+)%-(%d+)")
assert(matchWord == "cat" and matchNumber == "42", "string match should return captures")

gmatchLen = 0
for _, piece in ipairs(string["gmatch"]("1,22,333", "%d+"))
	gmatchLen += len(piece)
end
assert(gmatchLen == 6, "string gmatch should collect matches")

byteA, byteZ = string["byte"]("AZ", 1, 2)
assert(byteA == 65 and byteZ == 90, "string byte should return byte values")
assert(string["char"](119, 115) == "ws", "string char should construct strings from byte values")
assert(string["format"]("%s-%d", "ws", 3) == "ws-3", "string format should work")
assert(string["rep"]("ha", 3) == "hahaha", "string rep should work")

assert(gsub("item42 item7", "%d+", "[n]") == "item[n] item[n]", "gsub should use Lua-style patterns by default")
swap = {cat: "dog", fox: "wolf"}
assert(gsub("cat fox cat", "/cat|fox/", swap) == "dog wolf dog", "gsub should support regex replacements from tables")

nums = {3, 1, 2}
table["insert"](nums, 4)
removed = table["remove"](nums, 2)
table["sort"](nums)
assert(removed == 1 and table["concat"](nums, "-") == "2-3-4", "table library helpers should work")

plainTable = {}
table["insert"](plainTable, 3)
table["insert"](plainTable, 1)
table["insert"](plainTable, 2, 2)
plainRemoved = table["remove"](plainTable, 1)
table["sort"](plainTable)
assert(plainRemoved == 3 and table["concat"](plainTable, "-") == "1-2", "table helpers should accept plain tables too")

assert(math["floor"](3.9) == 3, "math floor should work")
assert(math["ceil"](3.1) == 4, "math ceil should work")
assert(math["abs"](-7) == 7, "math abs should work")
assert(math["min"](3, 1, 4) == 1, "math min should work")
assert(math["max"](3, 1, 4) == 4, "math max should work")
assert(math["sqrt"](81) == 9, "math sqrt should work")
assert(math["log"](1) == 0, "math log should work")
assert(math["pi"] > 3, "math pi should be populated")
assert(math["abs"](math["sin"](math["rad"](90)) - 1.0) < 0.001, "math sin/rad should work")
assert(math["abs"](math["cos"](math["rad"](0)) - 1.0) < 0.001, "math cos/rad should work")

math["randomSeed"](12345)
randomA = math["random"](100)
math["randomSeed"](12345)
randomB = math["random"](100)
assert(randomA == randomB, "math random should be deterministic after reseeding")
assert(randomA >= 1 and randomA <= 100, "math random with one argument should be 1-based and inclusive")

math["randomSeed"](54321)
randomC = math["random"](3, 3)
assert(randomC == 3, "math random with equal min/max should return that value")

math["randomSeed"](22222)
randomD = math["random"](2, 5)
assert(randomD >= 2 and randomD <= 5, "math random with two arguments should be inclusive")

assert(toNumber("ff", 16) == 255, "toNumber should support bases")
assert(toString($80000000) == "$80000000", "high-bit hex literals should survive as pointer values")
assert(toString(toNumber("80000000", 16)) == "$80000000", "toNumber should preserve unsigned 32-bit address values")
assert(toNumber("nope") == not, "toNumber should return not on failure")
assert(toString(not) == "not", "toString should render the not value as not")

ok, boom = pcall(error, "boom")
assert(ok == false and boom == "boom", "pcall should capture errors")

selectA, selectB = select(2, 10, 20, 30)
assert(selectA == 20 and selectB == 30, "select should return the requested tail values")
assert(select(5, 10, 20) == not, "select should return not when the index is out of range")
assert(collectGarbage() == not, "collectGarbage should be available")

chunk = load("return 8, 9")
chunkA, chunkB = chunk()
assert(chunkA == 8 and chunkB == 9, "load should return callable chunks")

runA, runB, runC, runD = runFile("winterscript-selftest-loader.ws")
assert(runA == 5 and runB == 6 and runC == 42 and runD == 42, "runFile should execute scripts and preserve relative path loading")

loader = loadFile("winterscript-selftest-loader.ws")
loadA, loadB, loadC, loadD = loader()
assert(loadA == 5 and loadB == 6 and loadC == 42 and loadD == 42, "loadFile should return callable script chunks")

assert(utf8["len"]("abc") == 3, "utf8 len should work")
assert(utf8["offset"]("abc", 2) == 2, "utf8 offset should work")

clockValue = os["clock"]()
timeValue = os["time"]()
assert(clockValue >= 0 and timeValue > 0, "os helpers should be available")

ramInfo = hardware("ram")
cpuInfo = hardware("cpu")
cacheInfo = hardware("cache")
diskInfo = hardware("disk")
assert(typeOf(ramInfo) == "table" and typeOf(ramInfo["initialized"]) == "string" and typeOf(ramInfo["detected"]) == "string" and typeOf(ramInfo["free"]) == "string", "hardware ram should return a table of strings")
assert(typeOf(cpuInfo) == "table" and typeOf(cpuInfo["available"]) == "boolean" and typeOf(cpuInfo["name"]) == "string", "hardware cpu should return a table with a name")
assert(typeOf(cacheInfo) == "table" and typeOf(cacheInfo["available"]) == "boolean", "hardware cache should return an availability table")
assert(typeOf(diskInfo) == "table" and typeOf(diskInfo["size"]) == "string" and typeOf(diskInfo["free"]) == "string", "hardware disk should return target capacity info")

tempPath = "/tmp/winterscript-selftest.tmp"
probeWriteOk, probeWriteResult = pcall(write, tempPath, "probe")
if probeWriteOk and probeWriteResult == true
	cleanupOk, cleanupResult = pcall(delete, tempPath)
	assert(cleanupOk and cleanupResult == true, "temp file cleanup should succeed")

	writer = io["open"](tempPath, "w")
	assert(typeOf(writer) == "table", "io open should return a file table")
	assert(writer["write"]("alpha\nbeta") == true, "file write should succeed")
	assert(writer["close"]() == true, "file close should succeed")

	reader = io["open"](tempPath, "r")
	assert(reader["read"]() == "alpha", "file read should read one line")
	assert(reader["read"]("*a") == "beta", "file read *a should read the rest of the file")
	assert(reader["close"]() == true, "file close should succeed after reading")

	finalCleanupOk, finalCleanupResult = pcall(delete, tempPath)
	assert(finalCleanupOk and finalCleanupResult == true, "temp file cleanup after io should succeed")
else
	print("Skipping io file write self-test on an unwritable target")
	if not probeWriteOk
		print(probeWriteResult)
	end
end

pipe = io["popen"]("printf winter", "r")
assert(typeOf(pipe) == "table", "io popen should return a pipe table")
assert(pipe["read"]("*a") == "winter", "pipe read should capture command output")
assert(pipe["close"]() == true, "pipe close should succeed")

plushDeskModel = dofile("plush-desk.ws")
assert(typeOf(plushDeskModel) == "table" and #plushDeskModel == 48, "plush-desk model should load as a 48-quad table")
assert(typeOf(plushDeskModel[1]) == "table", "plush-desk first quad should be a table")
assert(typeOf(plushDeskModel[1]["tl"]) == "table" and plushDeskModel[1]["texture"] == 1, "plush-desk quad data should preserve corners and texture ids")
deskXBefore = plushDeskModel[1]["tl"][1]
deskYBefore = plushDeskModel[1]["tl"][2]
deskZBefore = plushDeskModel[1]["tl"][3]
plushDeskModel[1]["tl"][1] = deskXBefore + 5
plushDeskModel[1]["tl"][2] = deskYBefore + 6
plushDeskModel[1]["tl"][3] = deskZBefore + 7
assert(plushDeskModel[1]["tl"][1] == deskXBefore + 5 and plushDeskModel[1]["tl"][2] == deskYBefore + 6 and plushDeskModel[1]["tl"][3] == deskZBefore + 7, "imported model quads should support nested coordinate mutation")

print("WinterScript self-test: PASS")
