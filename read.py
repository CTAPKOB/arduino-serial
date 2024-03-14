import serial

print(serial.__file__)

ser = serial.serial_for_url("rfc2217://localhost:4009", baudrate=115200)
ser.write(b"hello")

for i in range(10):
    line = ser.readline().decode("utf-8").rstrip("\r\n")
    print(line == "Hello Arduino")
