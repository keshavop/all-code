from importlib.abc import SourceLoader
import pyautogui 
import time

text=[]
# text=[]
time.sleep(4)
for i in range(21):
    pyautogui.typewrite(text[i])
    pyautogui.typewrite("\n")