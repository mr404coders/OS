echo "Enter a number"
read n
t=$n
s=0
b=0
c=10
while [ $n -gt 0 ]
do
r=$((n % c))
i=$((r * r * r))
s=$((s + i))
n=$((n / c))
done
echo $s
if [ $s == $t ]
then
echo "Amstrong number"
else
echo "Not an Armstrong number"
fi
