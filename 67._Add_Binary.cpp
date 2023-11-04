std::string addBinary(std::string a, std::string b) {
    int carry = 0, i = a.size() - 1, j = b.size() - 1;
    std::string result;

  
    while (i >= 0 && j >= 0) {
        if (carry == 1) {
            if ((a[i] - '0') == 0 &&
                (b[j] - '0') == 0) {
                carry = 0;
                result = '1' + result;
            }
            else if ((a[i] - '0') == 1 &&
                (b[j] - '0') == 1) {
                carry = 1;
                result = '1' + result;
            }
            else {
                carry = 1;
                result = '0' + result;
            }
            i--;
            j--;
        }
        else {
            if ((a[i] - '0') == 0 &&
                (b[j] - '0') == 0) {
                carry = 0;
                result = '0' + result;
            }
            else if ((a[i] - '0') == 1 &&
                (b[j] - '0') == 1) {
                carry = 1;
                result = '0' + result;
            }
            else {
                carry = 0;
                result = '1' + result;
            }
            i--;
            j--;
        }
    }

    if (j >= 0) {
        while (j >= 0) {
            if (carry == 1) {
                if ((b[j] - '0') == 0) {
                    carry = 0;
                    result = '1' + result;
                }
                else {
                    carry = 1;
                    result = '0' + result;
                }
            }
            else {
                if ((b[j] - '0') == 0) {
                    carry = 0;
                    result = '0' + result;
                }
                else {
                    carry = 0;
                    result = '1' + result;
                }
            }
            j--;
        }
    }
    else if (i >= 0) {
        while (i >= 0) {
            if (carry == 1) {
                if ((a[i] - '0') == 0) {
                    carry = 0;
                    result = '1' + result;
                }
                else {
                    carry = 1;
                    result = '0' + result;
                }
            }
            else {
                if ((a[i] - '0') == 0) {
                    carry = 0;
                    result = '0' + result;
                }
                else {
                    carry = 0;
                    result = '1' + result;
                }
            }
            i--;
        }
    }

    if (carry == 1) result = '1' + result;

    return result;
}
