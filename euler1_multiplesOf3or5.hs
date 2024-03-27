--list of numbers 1 to 999
numbers = [1..999]
-- function to compare module of 3 or 5
divideby3or5 x = (x `mod` 3==0) || (x `mod` 5== 0 )
-- Get list of all multiples of 3 or 5
listModule = filter divideby3or5 numbers
-- Get sum of list
sumModules = sum listModule
-- Print result
main = print(sumModules)