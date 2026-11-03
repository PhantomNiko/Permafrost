chunk = load("return 5, 6")
valueA, valueB = chunk()
valueC = runFile("winterscript-selftest-helper.ws")
helperChunk = loadFile("winterscript-selftest-helper.ws")
valueD = helperChunk()

return valueA, valueB, valueC, valueD
