% Autor:
% Datum: 27.10.2013

männlich(theodor).
männlich(franz).
weiblich(frida).
weiblich(hilde).

%kind(X,Y): X ist kind von Y.
kind(X,Y) :- vater(Y,X).
kind(X,Y) :- mutter(Y,X).

%vater(X,Y): X ist vater von Y.
vater(theodor,franz).
vater(theodor,hilde).

%mutter(X,Y): X ist mutter von Y.
mutter(frida,franz).
mutter(frida,hilde).

%sohn(X,Y): X ist sohn von Y.
sohn(X,Y) :- männlich(X), kind(X,Y).

%tochter(X,Y): X ist tochter von Y.
tochter(X,Y) :- weiblich(X), kind(X,Y).

%bruder(X,Y): X ist bruder von Y.
bruder(X,Y) :- männlich(X), vater(V,X), vater(V,Y), mutter(M,X), mutter(M,Y), X\=@=Y.

%schwester(X,Y): X ist schwester von Y.
schwester(X,Y) :- weiblich(X), vater(V,X), vater(V,Y), mutter(M,X), mutter(M,Y), X\=@=Y.