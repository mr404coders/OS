echo -n "enter value for a b and c"
read x y z
if [[ $x -ge $y ]] && [[ $x -ge $z ]];
then
echo -n "A is biggest"
elif [ $y -ge $z ];
then
echo -n "B is biggest"
else
echo -n "C is biggest"
fi
