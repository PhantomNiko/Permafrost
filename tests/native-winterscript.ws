function twice(x)
return x*2
end
total=0
i=1
while i<=12
total=total+i
i=i+1
end
assert(total==78)
assert(twice(7)==14)
assert(2+3*4==14)
assert(1.5*2.0+0.25==3.25)
assert("snow"+"fall"=="snowfall")
a={3,5,8}
assert(a[2]==5)
ok,message=pcall(error,"ice")
assert(ok==false)
assert(message=="ice")
print("PF-NATIVE-WS-PASS")
