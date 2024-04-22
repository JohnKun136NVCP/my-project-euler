-- Verify is prime or not --
isPrime :: Integer -> Bool
isPrime n
    | n < 2 = False --If the number is less than 2--
    | otherwise = all (\x -> n `mod` x /= 0) [2..isqrt n] --If not get Module and divide between itself
    where
        isqrt = floor . sqrt . fromIntegral
--Get Prime Factors---
primeFactors :: Integer -> [Integer]
primeFactors x = go x 2 []
  where
    go 1 _ res = res
    go num prime res
        | num `mod` prime == 0 = go (num `div` prime) prime (res ++ [prime])
        | otherwise = go num (prime + 1) res

-- Max number of prime factors into list--
maximus :: (Ord a) => [a] -> a
maximus [] = error "Empty List"
maximus [x] = x
maximus (x:xs)
    | x > maxTail = x
    | otherwise = maxTail
  where
    maxTail = maximus xs
main :: IO ()
main = do
    let x = 600851475143
        oddPrime = filter isPrime [3,5..x]
        factors = primeFactors x
        maxFactor = maximus factors
    print $ "The largest Prime Factor of " ++ show x ++ " is: " ++ show maxFactor
