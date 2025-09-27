MOD = 10**10  # We only care about the last 10 digits

def selfPower(base, exponent):
    result = 1
    base %= MOD
    while exponent > 0:
        if exponent % 2 == 1:
            result = (result * base) % MOD
        base = (base * base) % MOD
        exponent //= 2
    return result

value_data = 0
for i in range(1, 1001):
    power = selfPower(i, i)
    value_data = (value_data + power) % MOD

print(f"Last 10 digits: {str(value_data).zfill(10)}")
