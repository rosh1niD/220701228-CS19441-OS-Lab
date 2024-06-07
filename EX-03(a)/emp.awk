BEGIN {print "EMPLOYEES DETAILS"}
{#salary should be greater than 6000 and days more than 4
 if( $2>6000 && $3>4)
{
print $1, "\t\t" ,$2*$3
pay=pay+$2*$3
count=count+1
}
}
END{
{#action part
print "no employees are=" ,NR/count+1
print "total pay=" ,pay
print "average pay=" ,pay/count
}
}
