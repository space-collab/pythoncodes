class RomanConverter:
    def int_to_roman(self, num):
        # Simple mapping of values
        val = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
        syb = ["M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"]

        roman = ""
        i = 0
        while num > 0:
            # Keep subtracting until number is reduced
            while num >= val[i]:
                roman += syb[i]
                num -= val[i]
            i += 1
        return roman

    def roman_to_int(self, s):
        roman_map = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
        total = 0
        i = 0
        while i < len(s):
            # If current value < next value, then subtract
            if i+1 < len(s) and roman_map[s[i]] < roman_map[s[i+1]]:
                total += roman_map[s[i+1]] - roman_map[s[i]]
                i += 2
            else:
                total += roman_map[s[i]]
                i += 1
        return total


# Example
conv = RomanConverter()
print(conv.int_to_roman(58))       # LVIII
print(conv.roman_to_int("LVIII"))  # 58