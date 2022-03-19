import pyautogui
import time

time.sleep(4)
with open('code.txt','r')as f:
    lines=f.readlines();
    for line in lines:
        pyautogui.write(line.lstrip());