# coding: utf-8
MAX_TRIES = 40
SITE_ERRORS = ["We're sorry, but something went wrong: Web application could not be started",
               "404 Not Found"]
PASSWORD = '#'

import pandas as pd, time
from selenium import webdriver               
from selenium.webdriver.common.by import By

def type_cmd(s, timeout=0.5):
    global terminal
    terminal.send_keys(s)
    time.sleep(timeout)

driver = webdriver.Chrome('/Users/pav/Downloads/chromedriver')               

df = pd.read_csv('../namelist2sem.txt', sep='\t', 
                 header=None, 
                 names=['student_name', 'student_login'])

for i, row in df.iterrows(): 
    if i<27: continue
    student_login = row['student_login']
    student_name = row['student_name']
    
    try:
        driver.get(f'http://ide.cs50.io/{student_login}/ide');

        found = False
        tries = 0
        while not found and tries < MAX_TRIES:
            try:
                terminal = driver.find_element(By.CSS_SELECTOR, 'div.c9terminalcontainer textarea')
                found = True
            except:
                try:
                    t = None
                    t = driver.find_element_by_tag_name('title')
                except:
                    pass
                if t is not None and t.get_attribute('innerHTML') in SITE_ERRORS:
                    raise Exception(t.get_attribute('innerHTML'))
                time.sleep(5)
                tries += 1

        if not found: raise Exception(f"TIMEOUT, tries={tries}")

        clicked = False
        tries = 0
        while not clicked and tries < MAX_TRIES:
            try:
                terminal_ace = driver.find_element(By.CSS_SELECTOR, 'div.c9terminalcontainer div.ace_content') 
                terminal_ace.click() 
                clicked = True
            except:
                time.sleep(1) 

        if not clicked: raise Exception(f"CANNOT CLICK ON TERMINAL, tries={tries}")
        time.sleep(4) 

        type_cmd('git clone https://github.com/saaska/contra1\n', 2)
        type_cmd('cd contra1\n')
        type_cmd('mv ../task* .\n')
        type_cmd(f'git branch {student_name}\n')
        type_cmd(f'git checkout {student_name}\n')
        type_cmd('git config user.name "Aleksandr Pavlov"\n')
        type_cmd('git config user.email "7911562+av-pavlov@users.noreply.github.com"\n')
        type_cmd('git add *.cpp\n')
        type_cmd('git commit -m "`export LAST_TIME=$(stat -c %y *.cpp | sort -r | head -1 | cut -f 1 -d "."); echo ${LAST_TIME:0:16}`.cpp"\n')
        type_cmd(f'git push -u origin {student_name}\n', 1)
        type_cmd(f'saaska\n')
        type_cmd(PASSWORD+'\n', 2.5)
        print(f'Success: {student_name} {student_login}')
    except Exception as e:
        print(f'***FAIL: {student_name} {student_login}', e)

