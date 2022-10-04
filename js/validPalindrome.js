//https://leetcode.com/problems/valid-palindrome/
/**
 * @param {string} s
 * @return {boolean}
 */
 var isPalindrome = function(s) {
    const parsed = s.replace(/[^a-z0-9]/gi,'').toLowerCase()
    return parsed === parsed.split('').reverse().join('')
};