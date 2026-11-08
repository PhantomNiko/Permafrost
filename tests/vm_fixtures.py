"""Native/source and booted guest VM fixtures. Pooka's Free Software License."""

def fixtures(language):
    common=[('answer=6*7',42),('answer=2+3*4',14),('answer=-19+7',-12)]
    extra=([
        ('answer=0; for i=1,12 do answer=answer+i end',78),
                ('a={3,5,8}; answer=a[2]',5),
        ('answer=(1.5*2.0+0.25)*4',13),
        ('answer=0; i=1; while i<=5 do answer=answer+i; i=i+1 end',15),
        ('answer=0; for i=5,1,-1 do answer=answer+i end',15),
        ('answer=17%5',2),
        ('answer=0; if true then answer=9 end',9),
        ('answer=0; if false then answer=7 else answer=11 end',11),
        ('a={3,5,8}; a[2]=17; answer=a[2]',17),
    ]if language=='lua'else[
        ('answer=0\ni=1\nwhile i<=12\nanswer=answer+i\ni=i+1\nend',78),
        ('def twice(x)\nreturn x*2\nend\nanswer=twice(7)',14),
        ('a=[3,5,8]\nanswer=a[1]',5),
        ('answer=(1.5*2.0+0.25)*4',13),
    ])
    if language=='winterscript':
        extra=[
            ('answer=0\ni=1\nwhile i<=12\nanswer=answer+i\ni=i+1\nend',78),
            ('function twice(x)\nreturn x*2\nend\nanswer=twice(7)',14),
            ('a={3,5,8}\nanswer=a[2]',5),
            ('answer=(1.5*2.0+0.25)*4',13),
            ('answer=17%5',2),
            ('answer=21/3',7),
            ('answer=0\nif 3<4\nanswer=11\nelse\nanswer=7\nend',11),
            ('answer=0\nif false\nanswer=7\nelse\nanswer=11\nend',11),
            ('a={1,2}\na[1]=17\nanswer=a[1]',17),
            ('function inc(x)\nreturn x+1\nend\nanswer=inc(inc(40))',42),
            ('function fact(n)\nif n<=1\nreturn 1\nend\nreturn n*fact(n-1)\nend\nanswer=fact(6)',720),
            ('answer=(-1.5+4.75)*4',13),
            ('a={3,5,8}\nanswer=0\ni=1\nwhile i<=3\nanswer=answer+a[i]\ni=i+1\nend',16),
            ('answer=123456789',123456789),
        ]
    if language=='rwby':
        extra += [
            ('answer=17%5',2),
            ('answer=21/3',7),
            ('answer=4294967297+7',4294967304),
            ('answer=0\nif 3<4\nanswer=11\nelse\nanswer=7\nend',11),
            ('answer=0\nif false\nanswer=7\nelse\nanswer=11\nend',11),
            ('a=[1,2]\na[0]=17\nanswer=a[0]',17),
            ('answer=utf8_len("Hello")',5),
            ('answer=utf8_len("雪❄️")',3),
            ('def inc(x)\nreturn x+1\nend\nanswer=inc(inc(40))',42),
            ('def fact(n)\nif n<=1\nreturn 1\nend\nreturn n*fact(n-1)\nend\nanswer=fact(6)',720),
            ('answer=(-1.5+4.75)*4',13),
            ('a=[3,5,8]\nanswer=0\ni=0\nwhile i<3\nanswer=answer+a[i]\ni=i+1\nend',16),
        ]
    comparison = ('if "Perma".."frost"=="Permafrost" then answer=1 else answer=0 end'
                  if language == 'lua' else
                  'if "Perma"+"frost"=="Permafrost"\nanswer=1\nelse\nanswer=0\nend')
    return common+extra+[(comparison, 1)]
