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
        ]
    comparison = ('if "Perma".."frost"=="Permafrost" then answer=1 else answer=0 end'
                  if language == 'lua' else
                  'if "Perma"+"frost"=="Permafrost"\nanswer=1\nelse\nanswer=0\nend')
    return common+extra+[(comparison, 1)]
