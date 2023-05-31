echo "Enter a number"
read n
for x in 1 2 3 4 5 6 7 8 9 10
do
p=$(( $x * $n ))
echo $p
sleep 1
done
