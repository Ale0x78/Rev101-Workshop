from typing import Tuple
# Takes in a string and returns a non-cryptographic hashs of it

def bad_otp(data: bytes):
    keys = [0x01, 0x02, 0x03]
    return "".join([ f"\\x{i ^ keys[i % len(keys)]:x}" for i in data ])

level2_flag = b"workshop{Super_SecretLevel2}"
print("Level 2 enc_flag is: " + "".join([ f"\\x{i ^ 0x23:x}" for i in level2_flag ]))
level3_flag = b"workshop{Random_flag_here}"
level3_flag_enc = bad_otp(level3_flag)
print("Level 3 enc_flag is: {}".format(level3_flag_enc))